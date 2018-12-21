//implementation of stack

#include<iostream>
using namespace std;
int n;
static int top = 0;
template <class type>
class stack
{
	type data[10];
	public :
	void push()
	{
		type b;
		if(top<n)
		{
			cout<<"enter the element to push"<<endl;
			cin >>b;
			data[top++]=b;
			cout<<"element "<<b<<" push in to stack successfully"<<endl;;
		}
		else
		{
			cout<<"stack is overflow please delete the element from stack"<<endl;
		}
	}
	void pop()
	{
		if(top==0)
		{
			cout<<"stack is empty please insert the element into stack"<<endl;
		}
		else
		{
			cout<<"element "<<data[top-1]<<" pop in to stack successfully"<<endl;
			data[--top]=0;
		}
	}
	void display()
	{
		int i;
		if(top==0)
			cout<<"stack is empty"<<endl;
		else
		{
			cout<<"stack element are :  ";
			for(i=0;i<top;i++)
				cout<<data[i]<<"   ";
			cout<<endl;
		}
	}
};
int main()
{
	cout<<"enter the size of stack"<<endl;
	cin>>n;
	int format;
	int option;
	int k=3;
	while(1)
	{
		int j=3;
		cout<<"select option for working format on stack"<<endl;
		cout<<"1.integer \t 2.character \t 3.float \t 4.double \t 5.exit"<<endl;
		cin>>format;
		switch(format)
		{
			case 1 : stack <int>obj1;
				 while(1)
				 {
					 cout<<"enter the option for operation on stack"<<endl;
					 cout<<"1.push \t 2.pop \t 3.display \t 4.exit"<<endl;
					 cin>>option;
					 switch(option)
					 {
						 case 1 : obj1.push();
							  break;
						 case 2 : obj1.pop();
							  break;
						 case 3 : obj1.display();
							  break;
						 case 4 : cout<<"thank you"<<endl;
							  return 0;
						 default : cout<<"wrong option selection for stack operation"<<endl;
							   if(j!=1)
								   cout<<"please try again : try remaining - "<<--j<<endl;
							   else
							   {
								   cout<<"thank you"<<endl;
								   return 0;
							   }
					 }
				 }
				 break;
			case 2 : stack <char>obj2;
				 while(1)
				 {
					 cout<<"enter the option for operation on stack"<<endl;
					 cout<<"1.push \t 2.pop \t 3.display \t 4.exit"<<endl;
					 cin>>option;
					 switch(option)
					 {
						 case 1 : obj2.push();
							  break;
						 case 2 : obj2.pop();
							  break;
						 case 3 : obj2.display();
							  break;
						 case 4 : cout<<"thank you"<<endl;
							  return 0;
						 default : cout<<"wrong option selection for stack operation"<<endl;
							   if(j!=1)
								   cout<<"please try again : try remaining - "<<--j<<endl;
							   else
							   {
								   cout<<"thank you"<<endl;
								   return 0;
							   }
					 }
				 }
				 break;
			case 3 : stack <float>obj3;
				 while(1)
				 {
					 cout<<"enter the option for operation on stack"<<endl;
					 cout<<"1.push \t 2.pop \t 3.display \t 4.exit"<<endl;
					 cin>>option;
					 switch(option)
					 {
						 case 1 : obj3.push();
							  break;
						 case 2 : obj3.pop();
							  break;
						 case 3 : obj3.display();
							  break;
						 case 4 : cout<<"thank you"<<endl;
							  return 0;
						 default : cout<<"wrong option selection for stack operation"<<endl;
							   if(j!=1)
								   cout<<"please try again : try remaining - "<<--j<<endl;
							   else
							   {
								   cout<<"thank you"<<endl;
								   return 0;
							   }
					 }
				 }
				 break;
			case 4 : stack <double>obj4;
				 while(1)
				 {
					 cout<<"enter the option for operation on stack"<<endl;
					 cout<<"1.push \t 2.pop \t 3.display \t 4.exit"<<endl;
					 cin>>option;
					 switch(option)
					 {
						 case 1 : obj4.push();
							  break;
						 case 2 : obj4.pop();
							  break;
						 case 3 : obj4.display();
							  break;
						 case 4 : cout<<"thank you"<<endl;
							  return 0;
						 default : cout<<"wrong option selection for stack operation"<<endl;
							   if(j!=1)
								   cout<<"please try again : try remaining - "<<--j<<endl;
							   else
							   {
								   cout<<"thank you"<<endl;
								   return 0;
							   }
					 }
				 }
				 break;
			default:cout<<"selection of type of stack is wrong"<<endl;
				if(k!=1)
					cout<<"please try again : try remaining - "<<--k<<endl;
				else
				{
					cout<<"thank you"<<endl;
					return 0;
				}
		}
	}
}
