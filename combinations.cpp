/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"Type 4 numbers - a,b,c and d and if any of them are identical, i'll give you all the possible combinations";
    cin>>a>>b>>c>>d;
    if(a==b){
        cout<<a<<b<<c<<d;
        cout<<a<<b<<d<<c;
        cout<<a<<c<<b<<d;
        cout<<a<<c<<d<<b;
        cout<<a<<d<<b<<c;
        cout<<a<<d<<c<<b;
        cout<<b<<a<<c<<d;
        cout<<b<<a<<d<<c;
        cout<<b<<d<<a<<c;
        cout<<b<<d<<c<<a;
        cout<<b<<c<<d<<a;
        cout<<b<<c<<a<<d;
        cout<<c<<a<<b<<d;
        cout<<c<<a<<d<<b;
        cout<<c<<b<<a<<d;
        cout<<c<<b<<d<<a;
        cout<<c<<d<<a<<b;
        cout<<c<<d<<b<<a;
    }else if(a==c){
        cout<<a<<b<<c<<d;
        cout<<a<<b<<d<<c;
        cout<<a<<c<<b<<d;
        cout<<a<<c<<d<<b;
        cout<<a<<d<<b<<c;
        cout<<a<<d<<c<<b;
        cout<<b<<a<<c<<d;
        cout<<b<<a<<d<<c;
        cout<<b<<d<<a<<c;
        cout<<b<<d<<c<<a;
        cout<<b<<c<<d<<a;
        cout<<b<<c<<a<<d;
        cout<<c<<a<<b<<d;
        cout<<c<<a<<d<<b;
        cout<<c<<b<<a<<d;
        cout<<c<<b<<d<<a;
        cout<<c<<d<<a<<b;
        cout<<c<<d<<b<<a;
    }else if(a==d){
        cout<<a<<b<<c<<d;
        cout<<a<<b<<d<<c;
        cout<<a<<c<<b<<d;
        cout<<a<<c<<d<<b;
        cout<<a<<d<<b<<c;
        cout<<a<<d<<c<<b;
        cout<<b<<a<<c<<d;
        cout<<b<<a<<d<<c;
        cout<<b<<d<<a<<c;
        cout<<b<<d<<c<<a;
        cout<<b<<c<<d<<a;
        cout<<b<<c<<a<<d;
        cout<<c<<a<<b<<d;
        cout<<c<<a<<d<<b;
        cout<<c<<b<<a<<d;
        cout<<c<<b<<d<<a;
        cout<<c<<d<<a<<b;
        cout<<c<<d<<b<<a;
    }else if(b==c){
        cout<<a<<b<<c<<d;
        cout<<a<<b<<d<<c;
        cout<<a<<c<<b<<d;
        cout<<a<<c<<d<<b;
        cout<<a<<d<<b<<c;
        cout<<a<<d<<c<<b;
        cout<<b<<a<<c<<d;
        cout<<b<<a<<d<<c;
        cout<<b<<d<<a<<c;
        cout<<b<<d<<c<<a;
        cout<<b<<c<<d<<a;
        cout<<b<<c<<a<<d;
        cout<<c<<a<<b<<d;
        cout<<c<<a<<d<<b;
        cout<<c<<b<<a<<d;
        cout<<c<<b<<d<<a;
        cout<<c<<d<<a<<b;
        cout<<c<<d<<b<<a;
    }else if(b==d){
        cout<<a<<b<<c<<d;
        cout<<a<<b<<d<<c;
        cout<<a<<c<<b<<d;
        cout<<a<<c<<d<<b;
        cout<<a<<d<<b<<c;
        cout<<a<<d<<c<<b;
        cout<<b<<a<<c<<d;
        cout<<b<<a<<d<<c;
        cout<<b<<d<<a<<c;
        cout<<b<<d<<c<<a;
        cout<<b<<c<<d<<a;
        cout<<b<<c<<a<<d;
        cout<<c<<a<<b<<d;
        cout<<c<<a<<d<<b;
        cout<<c<<b<<a<<d;
        cout<<c<<b<<d<<a;
        cout<<c<<d<<a<<b;
        cout<<c<<d<<b<<a;
    }else if(c==d){
        cout<<a<<b<<c<<d;
        cout<<a<<b<<d<<c;
        cout<<a<<c<<b<<d;
        cout<<a<<c<<d<<b;
        cout<<a<<d<<b<<c;
        cout<<a<<d<<c<<b;
        cout<<b<<a<<c<<d;
        cout<<b<<a<<d<<c;
        cout<<b<<d<<a<<c;
        cout<<b<<d<<c<<a;
        cout<<b<<c<<d<<a;
        cout<<b<<c<<a<<d;
        cout<<c<<a<<b<<d;
        cout<<c<<a<<d<<b;
        cout<<c<<b<<a<<d;
        cout<<c<<b<<d<<a;
        cout<<c<<d<<a<<b;
        cout<<c<<d<<b<<a;
    }else{
        cout<<"Numbers a,b,c or d are not identical";
    }
    return 0;
}

