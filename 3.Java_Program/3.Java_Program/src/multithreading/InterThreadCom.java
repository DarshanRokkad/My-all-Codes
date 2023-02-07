package multithreading;

class Mydata {
	int value;
	boolean flag = true;

	synchronized public void set(int v) {
		while (flag != true) {
			try {
				wait();
			} catch (Exception e) {
			}
		}
		value = v;
		flag = false;
		notify();
	}

	synchronized public int get() {
		while (flag != false) {
			try {
				wait();
			} catch (Exception e) {
			}
		}
		int x = value;
		flag = true;
		notify();
		return x;
	}
}

class Producer extends Thread {
	Mydata d;

	Producer(Mydata da) {
		d = da;
	}

	public void run() {
		int i = 1;
		while (true) {
			System.out.println("Producer " + i);
			d.set(i);
			i++;
			try {
				Thread.sleep(1000);
			} catch (Exception e) {
			}
		}
	}
}

class Consumer extends Thread {
	Mydata d;

	Consumer(Mydata da) {
		d = da;
	}

	public void run() {
		while (true) {
			int value = d.get();
			System.out.println("Consumer " + value);
			try {
				Thread.sleep(1000);
			} catch (Exception e) {
			}
			System.out.println();
		}
	}
}

public class InterThreadCom {
	public static void main(String args[]) {
		Mydata md = new Mydata();
		Producer p = new Producer(md);
		Consumer c = new Consumer(md);
		p.start();
		c.start();
	}
}
