
#include<iostream>
using namespace std;
class calc{
	int n1,n2,choice;
	public:
		calc()
		{
			
			cout<<"\nEnter 1 for addtion";
            cout<<"\nEnter 2 for substracton";
            cout<<"\nEnter 3 for division";
            cout<<"\nEnter 4 for multiplication";
            cout<<"\nEnter your choice";
			cin>>choice;
            cout<<"\nenter n1 and n2";
			cin>>n1>>n2;
			cout<<"result is:";
			
			switch(choice)
			{
				case 1:
					cout<<n1+n2;
					break;
                case 2:
					cout<<n1-n2;
					break;
                case 3:
					cout<<n1/n2;
					break;
                case 4:
					cout<<n1*n2;
					break;            
				default:
					cout<<"invalid";	
			}
		}
};
int main()
{
	calc obj;
	return 0;
}
