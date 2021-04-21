#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"Type 4 numbers - a,b,c and d and if any of them are identical, i'll give you all the possible combinations";
    cin>>a>>b>>c>>d;
    if(a==b){
        cout<<a<<b<<c<<d<<endl;
        cout<<a<<b<<d<<c<<endl;
        cout<<a<<c<<b<<d<<endl;
        cout<<a<<c<<d<<b<<endl;
        cout<<a<<d<<b<<c<<endl;
        cout<<a<<d<<c<<b<<endl;
        cout<<b<<a<<c<<d<<endl;
        cout<<b<<a<<d<<c<<endl;
        cout<<b<<d<<a<<c<<endl;
        cout<<b<<d<<c<<a<<endl;
        cout<<b<<c<<d<<a<<endl;
        cout<<b<<c<<a<<d<<endl;
        cout<<c<<a<<b<<d<<endl;
        cout<<c<<a<<d<<b<<endl;
        cout<<c<<b<<a<<d<<endl;
        cout<<c<<b<<d<<a<<endl;
        cout<<c<<d<<a<<b<<endl;
        cout<<c<<d<<b<<a;
    }else if(a==c){
        cout<<a<<b<<c<<d<<endl;
        cout<<a<<b<<d<<c<<endl;
        cout<<a<<c<<b<<d<<endl;
        cout<<a<<c<<d<<b<<endl;
        cout<<a<<d<<b<<c<<endl;
        cout<<a<<d<<c<<b<<endl;
        cout<<b<<a<<c<<d<<endl;
        cout<<b<<a<<d<<c<<endl;
        cout<<b<<d<<a<<c<<endl;
        cout<<b<<d<<c<<a<<endl;
        cout<<b<<c<<d<<a<<endl;
        cout<<b<<c<<a<<d<<endl;
        cout<<c<<a<<b<<d<<endl;
        cout<<c<<a<<d<<b<<endl;
        cout<<c<<b<<a<<d<<endl;
        cout<<c<<b<<d<<a<<endl;
        cout<<c<<d<<a<<b<<endl;
        cout<<c<<d<<b<<a;
    }else if(a==d){
        cout<<a<<b<<c<<d<<endl;
        cout<<a<<b<<d<<c<<endl;
        cout<<a<<c<<b<<d<<endl;
        cout<<a<<c<<d<<b<<endl;
        cout<<a<<d<<b<<c<<endl;
        cout<<a<<d<<c<<b<<endl;
        cout<<b<<a<<c<<d<<endl;
        cout<<b<<a<<d<<c<<endl;
        cout<<b<<d<<a<<c<<endl;
        cout<<b<<d<<c<<a<<endl;
        cout<<b<<c<<d<<a<<endl;
        cout<<b<<c<<a<<d<<endl;
        cout<<c<<a<<b<<d<<endl;
        cout<<c<<a<<d<<b<<endl;
        cout<<c<<b<<a<<d<<endl;
        cout<<c<<b<<d<<a<<endl;
        cout<<c<<d<<a<<b<<endl;
        cout<<c<<d<<b<<a;
    }else if(b==c){
        cout<<a<<b<<c<<d<<endl;
        cout<<a<<b<<d<<c<<endl;
        cout<<a<<c<<b<<d<<endl;
        cout<<a<<c<<d<<b<<endl;
        cout<<a<<d<<b<<c<<endl;
        cout<<a<<d<<c<<b<<endl;
        cout<<b<<a<<c<<d<<endl;
        cout<<b<<a<<d<<c<<endl;
        cout<<b<<d<<a<<c<<endl;
        cout<<b<<d<<c<<a<<endl;
        cout<<b<<c<<d<<a<<endl;
        cout<<b<<c<<a<<d<<endl;
        cout<<c<<a<<b<<d<<endl;
        cout<<c<<a<<d<<b<<endl;
        cout<<c<<b<<a<<d<<endl;
        cout<<c<<b<<d<<a<<endl;
        cout<<c<<d<<a<<b<<endl;
        cout<<c<<d<<b<<a;
    }else if(b==d){
        cout<<a<<b<<c<<d<<endl;
        cout<<a<<b<<d<<c<<endl;
        cout<<a<<c<<b<<d<<endl;
        cout<<a<<c<<d<<b<<endl;
        cout<<a<<d<<b<<c<<endl;
        cout<<a<<d<<c<<b<<endl;
        cout<<b<<a<<c<<d<<endl;
        cout<<b<<a<<d<<c<<endl;
        cout<<b<<d<<a<<c<<endl;
        cout<<b<<d<<c<<a<<endl;
        cout<<b<<c<<d<<a<<endl;
        cout<<b<<c<<a<<d<<endl;
        cout<<c<<a<<b<<d<<endl;
        cout<<c<<a<<d<<b<<endl;
        cout<<c<<b<<a<<d<<endl;
        cout<<c<<b<<d<<a<<endl;
        cout<<c<<d<<a<<b<<endl;
        cout<<c<<d<<b<<a;
    }else if(c==d){
        cout<<a<<b<<c<<d<<endl;
        cout<<a<<b<<d<<c<<endl;
        cout<<a<<c<<b<<d<<endl;
        cout<<a<<c<<d<<b<<endl;
        cout<<a<<d<<b<<c<<endl;
        cout<<a<<d<<c<<b<<endl;
        cout<<b<<a<<c<<d<<endl;
        cout<<b<<a<<d<<c<<endl;
        cout<<b<<d<<a<<c<<endl;
        cout<<b<<d<<c<<a<<endl;
        cout<<b<<c<<d<<a<<endl;
        cout<<b<<c<<a<<d<<endl;
        cout<<c<<a<<b<<d<<endl;
        cout<<c<<a<<d<<b<<endl;
        cout<<c<<b<<a<<d<<endl;
        cout<<c<<b<<d<<a<<endl;
        cout<<c<<d<<a<<b<<endl;
        cout<<c<<d<<b<<a;
    }else{
        cout<<"Numbers a,b,c or d are not identical";
    }
    return 0;
}

