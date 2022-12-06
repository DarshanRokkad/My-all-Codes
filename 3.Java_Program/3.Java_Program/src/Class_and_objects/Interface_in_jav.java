package Class_and_objects;

class Phone
{
	public void call()
	{
		System.out.println("Calling...");
	}
	public void sms()
	{
		System.out.println("Sending sms...");		
	}
}

interface Camera
{
	void click();
	void record();
}

interface Musicplayer
{
	void play();
	void stop();
}

class Smartphonep extends Phone implements Camera,Musicplayer
{
	public void click()
	{
		System.out.println("Click the photo");
	}
	public void record()
	{
		System.out.println("Record the vedio");
	}
	public void play()
	{
		System.out.println("Play the vedio");
	}
	public void stop()
	{
		System.out.println("Stop the vedio");
	}
}

public class Interface_in_jav {
	public static void main(String args[])
	{
		Phone p = new Smartphonep();
		Camera c = new Smartphonep();
		Musicplayer m = new Smartphonep();
		p.call();
		p.sms();
		c.click();
		c.record();
		m.play();
		m.stop();
	}
}
