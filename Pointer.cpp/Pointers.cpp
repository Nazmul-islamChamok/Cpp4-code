#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  //pointers
    //& address of operator
    //*derefarence operator
    string name="Nazmul";
    int age=100;
    string food="pizza";

    string *pName=&name;
    int *pAge=&age;
    string *pFood=&food;
    cout<<pName<<endl;
    cout<<pAge<<endl;
    cout<<pFood<<endl;
    cout<<*pName<<endl;
    cout<<*pAge<<endl;
    cout<<*pFood<<endl;




    return 0;
}
