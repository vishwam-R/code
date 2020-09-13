#include <iostream>

using namespace std;

int main()
{
     char mychar;
    cout << "Enter  a character :" << endl;
    cin>>mychar;

        switch(mychar)
        {
            case 'a':
                    cout<<"A for Apple"<<endl;
                    break;
            case 'b':
                    cout<<"B for Ball"<<endl;
                    break;

            case 'c':
                    cout<<"C for Cat"<<endl;
                    break;

            default:

                    cout<<  "Invalid charater"<<endl;
                    break;



        }
    return 0;
}
