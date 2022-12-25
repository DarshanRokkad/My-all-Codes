package College;

class Stack
{
	private int stk[]=new int[5];
	private int tos ;
	Stack()
	{
		tos=-1;
	}
	void display()
	{
		if(tos==-1)
		{
			System.out.println("No elemens in the stack.");
		}
		else
		{
			for(int i = 0 ;i<=tos;i++)
			{
				System.out.print(stk[i]+" ");
			}System.out.println();
		}
	}
	void push(int ele)
	{
		if(tos==4)
		{
			System.out.println("Stack is full");
		}
		else
		{
			stk[++tos]=ele;
		}
	}
	int pop()
	{
		if(tos==-1)
		{
			System.out.println("Stack is empty");
			return 0;
		}
		else 
		{
			return stk[tos--];
		}
	}
}

public class Stack_implementation {

	public static void main(String[] args) {
		Stack s = new Stack();
		s.push(8);
		s.push(5);
		s.push(23);
		s.push(85);
		s.push(90);
		s.display();
		s.push(0);
		System.out.print(s.pop()+" ");
		System.out.print(s.pop()+" ");
		System.out.print(s.pop()+" ");
		System.out.print(s.pop()+" ");
		System.out.println(s.pop()+" ");
		System.out.println(s.pop());
	}
}
