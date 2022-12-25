package practise;

class cell_phone
{
	private String phone ;
	private long ime ;
	public cell_phone()
	{
		phone = "sumsun";
		ime = 45651231;
	}
	public cell_phone(String phone , long ime )
	{
		this.phone = phone ;
		this.ime = ime ;
	}
	void call()
	{
		System.out.println("Calling ");
	}
	void savecontact()
	{
		System.out.println("Save sms");
	}
	void deletecontact()
	{
		System.out.println("Delete contact");
	}
}

class smart_phone extends cell_phone
{
	private String mac;
	public smart_phone()
	{
		mac = "900";
	}
	public smart_phone(String n)
	{
		mac = n ;
	}
	void play()
	{
		System.out.println("Play the song ");
	}
	void capture()
	{
		System.out.println("Take photo");
	}
}

public class Example {
	public static void main(String[] args) {
		

	}
}
