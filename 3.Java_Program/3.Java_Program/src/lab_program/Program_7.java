package lab_program;

class Product {
	boolean productIsReady = true;
	int productNumber;
	
	public synchronized void Produce(int productNumber) {
		while (productIsReady != true) {
			try {
				wait();
			} catch (InterruptedException e) {
				System.out.println(e);
			}
		}
		this.productNumber = productNumber;
		System.out.println("Product " + productNumber + " is produced by Producer.");
		productIsReady = false;
		notify();
	}
	
	public synchronized void Consume() {
		while (productIsReady != false) {
			try {
				wait();
			} catch (InterruptedException e) {
				System.out.println(e);
			}
		}
		System.out.println("Consumer consumed Product " + productNumber + " .\n");
		productIsReady = true;
		notify();
	}
}

class Producer extends Thread {
	Product pro;
	Producer(Product p) {
		pro = p;
	}
	public void run() {
		int pro_number = 1;
		while (true) {
			pro.Produce(pro_number++);
		}
	}
}

class Consumer extends Thread {
	Product pro;
	int noOfConsumer = 0;
	Consumer(Product p) {
		pro = p;
	}
	public void run() {
		while(true)
		{
			pro.Consume();
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				System.out.println(e);
			}
		}
	}
}

public class Program_7 {
	public static void main(String args[]) {
		Product product = new Product();
		Producer producers = new Producer(product);
		Consumer consumers = new Consumer(product);
		producers.start();
		consumers.start();
	}
}
