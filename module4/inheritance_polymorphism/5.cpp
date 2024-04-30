#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
};
class test:public student{
    protected:
    int sub1,sub2;


};
class result:public test{
    int total_marks;
    public:
    void get()
    {
        cout<<"\nEnter roll_no:";
        cin>>roll_no;
        cout<<"\nEnter marks in sub1:";
        cin>>sub1;
        cout<<"\nEnter marks in sub2:";
        cin>>sub2;
        total_marks=sub1+sub2;

    }
    void display()
    {
        cout<<"\nroll_no is:"<<roll_no<<"\nsubject 1 marks is:"<<sub1<<"\nsubject 2 marks is:"<<sub2<<"\ntotal marks is:"<<total_marks;
    }

};

int main()
{
    result obj;
    obj.get();
    obj.display();
    return 0;

}