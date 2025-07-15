#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *pointer=nullptr;
    int x=123;

    pointer=&x;

    if(pointer==nullptr)
    {
        cout<<"Address was not assigned! "<<endl;
    }
    else{
        cout<<"Address was assigned "<<endl;
        cout<<*pointer;
    }

    return 0;
}
