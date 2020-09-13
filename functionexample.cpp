#include<iostream>
using namespace std;

int add (int a_output ,int b_output)
{
    return a_output + b_output;
}

int main()
{

    int a,b,ans;
    cout<<"enter 1st number"<<endl;
    cin>>a;
    cout<<"enter 2nd number"<<endl;
    cin>>b;
    ans=add(a,b);

    cout<<"number 1: "<<a<<" + "<<" number 2: "<<b<<" = "<<ans;
    return 0;




}
