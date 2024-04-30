#include<iostream>
using namespace std;
class calculator{
	int num1,num2;
	double ans;
	public:
		void result()
		{
			cout<<"enter 2 values for addition";
			cin>>num1>>num2;
			ans=num1+num2;
			cout<<"addition of 2 values is "<<ans;
		}
		void result(int x,int y)
		{
			ans=x-y;
			cout<<"subtraction is "<<ans;
		}
		void result(double x,double y)
		{
			ans=x*y;
			cout<<"multiplication is "<<ans;
		}
		void result(double x)
		{
			double y;
			cout<<"enter 2nd value for division of double datatype";
			cin>>y;
			if(y==0)
			{
				cout<<"can't divide by zero";
			}
			else{
				ans=x/y;
				cout<<"division of 2 values is "<<ans;
			}
		}
		void result(int x)
		{
			int y;
			cout<<"enter 2nd value for modulo of int datatype";
			cin>>y;
			ans=x%y;
			cout<<"modulo is "<<ans;
			
		}
		
};
int main()
{
	calculator obj;
	int choice;
	cout<<"1 for + 2 for - 3 for mul 4 for / 5 for %";
	cin>>choice;
	switch(choice)
	{
		case 1:
			obj.result();
			break;
		case 2:
			obj.result(5,2);
			break;
		case 3:
			obj.result(6.5,3.20);
			break;
		case 4:
			obj.result(10.5);
			break;
		case 5:
			obj.result(10);
			break;
		default:
			cout<<"invalid choice";			
				
	}
	
	
	return 0;
}
