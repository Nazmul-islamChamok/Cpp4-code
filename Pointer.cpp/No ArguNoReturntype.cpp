#include<iostream>
#include<conio.h>
using namespace std;
void greatNum(); //function declaration

int main()
{
    greatNum();//function call
    return 0;
}
void greatNum() //function definition
{
    int i,j;
    cout<<"Enter 2 numbers that you want to compare..."<<endl;
    cin>>i>>j;
    if(i>j)
    {
        cout<<"The great Number is= "<<i<<endl;
    }
    else
    {
        cout<<"The great number is= "<<j<<endl;
    }
    getch();
}
