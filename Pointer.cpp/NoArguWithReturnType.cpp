#include<iostream>
#include<conio.h>
using namespace std;

int greatNum();

int main()
{
    int result;
    result=greatNum();
    cout<<"The greatNum is: "<<result<<endl;
    return 0;
}

int greatNum()
{
    int i,j,greatNum;
    cout<<"Enter 2 numbers that you want to compare..."<<endl;
    cin>>i>>j;
    if(i>j)
    {
        greatNum=i;
    }
    else
    {
        greatNum=j;
    }
    //returnung the result
    return greatNum;
}
