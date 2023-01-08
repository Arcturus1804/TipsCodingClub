#include<iostream>
using namespace std;

int main(){int A{},B{};
cout<<"Enter two non negative integers";
cin>>A>>B;
if(A==0&&B==0)
    cout<<"1";
if(A==0||B==0)
    {
        if(A==1||B==1)
            cout<<"2";
        else if(A==2||B==2)
            cout<<"1";
    }
else
    cout<<"0";
return 0;
}
