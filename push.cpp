#include<iostream>
#define MAXSIZE 6
int top=-1;
using namespace std;
class Stack
{
	public:
	int arr[MAXSIZE],i;
	public:
	int Isempty()
	{	
		if(top==-1)
		return 1;
		else
		return 0;
	}
	void Push(int num)
	{
		if(Isfull())
		{
			cout<<"\nStack is full\n";
		}
		else
		{
			++top;
			arr[top]=num;
			cout<<num<<"\ninserted\n";
		}
	}
	int Isfull()
	{
		if(top==MAXSIZE-1)
		return 1;
		else
		return 0;
	}
	void Pop()
	{
		int temp;
		if(Isempty())
		{
			cout<<"\nStack is empty\n";
		}
		else
		{
			temp=arr[top];
			top--;
			cout<<temp<<"\nhas been poped\n";
		}
	}	
	void Display()
	{
		int i;
		if(Isempty())
		{
			cout<<"\nStack is empty\n";
			return;
		}
		for(i=top;i>=0;i--)
		{
			cout<<"\n"<<arr[i]<<" ";
		}
	}
};
main()
{
	Stack st;
	int choice;
	int num;
	int ch;
	do
	{
		cout<<"\npress 1 to push\n press 2 to pop\n press 3 to display and ctrl+z to exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"\nEnter vthe number :\n";
			cin>>num;
			st.Push(num);
			break;
			case 2:
			st.Pop();
			break;
			case 3:
			st.Display();
			break;
			default:
			cout<<"Wrong choice";
			break;
		}
		cout<<"\nWant to continue press 8\n";
		cin>>ch;	
	}while(ch==8);
}
