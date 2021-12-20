//  Write a program for swapping of two numbers using call by value.
#include<iostream>
using namespace std;

void swap (int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping value of a and b is : "<<a<<" and "<<b<<endl;

}

int main ()
{
    int a,b;

    cout << "Enter a and b \n";
    cin >> a >> b;

    cout<<"Before swapping value of a and b is : "<<a<<" and "<<b<<endl;

     swap(a,b);

     return 0;

}