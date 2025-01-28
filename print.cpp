#include<iostream>
using namespace std;
int main()
{
 int n1=0,n2=1,n3,num;
 cout<<"Enter how many terms u want : ";
 cin>>num;
 cout<<"Fibonacci Seiers: "<<endl;
 for(int i=0;i<num;i++)
 {
     cout<<n1<<endl;
     n3=n1+n2;
     n1=n2;
     n2=n3;
     
     
 }
 return 0;
}