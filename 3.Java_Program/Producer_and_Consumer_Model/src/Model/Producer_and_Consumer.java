package Model;

import java.util.concurrent.Semaphore;
import java.util.Scanner;

//Java implementation of a producer and consumer
//that use semaphores to control synchronization.

class Queue {
	int item;

	static Semaphore semCon = new Semaphore(0);

	static Semaphore semProd = new Semaphore(1);

	void get() {
		try {
			semCon.acquire();
		} catch (InterruptedException e) {
			System.out.println("InterruptedException caught");
		}
		System.out.println("Consumer consumed item : " + item);
		semProd.release();
	}

	void put(int item) {
		try {
			semProd.acquire();
		} catch (InterruptedException e) {
			System.out.println("InterruptedException caught");
		}
		this.item = item;
		System.out.println("Producer produced item : " + item);
		semCon.release();
	}
}

//Producer class
class Producer implements Runnable {
	Queue q;
	int n;

	Producer(Queue q, int n) {
		this.q = q;
		this.n = n;
		new Thread(this, "Producer").start();
	}

	public void run() {
		for (int i = 0; i < n; i++)
			q.put(i);
	}
}

//Consumer class
class Consumer implements Runnable {
	Queue q;
	int n;

	Consumer(Queue q, int n) {
		this.n = n;
		this.q = q;
		new Thread(this, "Consumer").start();
	}

	public void run() {
		for (int i = 0; i < n; i++)
			q.get();
	}
}

//Driver class
public class Producer_and_Consumer {
	public static void main(String args[]) {
		// creating buffer queue
		Queue q = new Queue();

		int n;
		System.out.println("Enter the size of buffer : ");
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		sc.close();

		new Consumer(q, n);

		new Producer(q, n);
	}
}