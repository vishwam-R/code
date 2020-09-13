#include<iostream>
using namespace std;

int main(){

    int n,i,j,temp;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    cout<<"sorted array by applying bubble sort"<<endl;
         for(i=0;i<n-1;i++)  //passes//
         {
             for(j=0;j<n-1;j++)
             {
                if(a[j]>a[j+1])     //a[j]=6 a[j+1]=5//
                    {
                        temp=a[j];  //temp =6
                        a[j]=a[j+1]; //a[j]=5
                        a[j+1]=temp; //a[j+1]=6

                    }
             }

         }


        for(i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }

        return 0;

}

