#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<num1<<" "<<num2<<" "<<num3<<endl;
    if(num1>num2&&num1>num3)
    {
        cout<<"the large number is="<<num1;
    }
    else if(num2>num1&&num2>num3)
    {
        cout<<"the large number is="<<num2;
    }
    else if(num3>num2&&num3>num1)
    {
        cout<<"the large number is="<<num3;
    }
    return 0;
}
