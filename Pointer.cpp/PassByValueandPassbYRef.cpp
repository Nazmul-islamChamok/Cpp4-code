#include<iostream>
using namespace std;
void swap(string *x,string *y);
int main()
{
    string x="Kool-Aid";
    string y="Water";

    cout<<"Before swap X "<<x <<endl;
    cout<<"Before swap Y "<<y <<endl;
    swap(&x,&y);



    return 0;
}
void swap(string *x,string *y)
{
    string temp;
    temp=*x;
    *x=*y;
    *y=temp;

    cout<<"After swap X "<<*x <<endl;
    cout<<"After swap Y "<<*y <<endl;
}
