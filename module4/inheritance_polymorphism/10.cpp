#include<iostream>
#include<string.h>
using namespace std;

class addstring{
    private:

    char s1[100],s2[100];

    public:
    addstring(char str1[],char str2[])
    {
        strcpy(this->s1,str1);
        strcpy(this->s2,str2);
    }
    addstring operator+()
    {
        cout<<"\nconcatenation :"<<strcat(s1,s2);
    }

};

int main()
{
    addstring obj1("girish","bhunatar");
    +obj1;
    return 0;
}