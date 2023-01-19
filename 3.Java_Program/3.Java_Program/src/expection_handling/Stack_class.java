package expection_handling;

class FullException extends Exception
{
	public String toString()
	{
		return "Overflow condition.";
	}
}
class EmptyException extends Exception
{
	public String toString()
	{
		return "Underflow condition.";
	}
}

class MyStack
{
	private int capacity;
	private int top;
	private int arr[];
	public MyStack(int n)
	{
		top = -1 ;
		capacity = n ;
		arr = new int[n];
	}
	void push(int x) throws FullException
	{
		if(top==capacity-1)
		{
			throw new FullException();
		}
		System.out.println(x+" is pushed to stack.");
		arr[++top]=x;
		display();
	}
	void pop() throws EmptyException
	{
		if(top==-1)
		{
			throw new EmptyException();
		}
		System.out.println(arr[top--]+" is poped from stack.");
		display();
	}
	void display()
	{
		System.out.print("Array : ");
		for(int i= 0 ;i<=top ;i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
		System.out.println();
	}
}

public class Stack_class {
	public static void main(String args[])
	{
		MyStack s = new MyStack(5);
		try 
		{
			s.push(3);
			s.push(8);
			s.push(3);
			s.push(6);
			s.pop();
			s.pop();
			s.pop();
			s.pop();
			s.pop();
			s.pop();
		}		
		catch(FullException e)
		{
			System.out.println(e);
		}		
		catch(EmptyException e)
		{
			System.out.println(e);
		}
	}
}
