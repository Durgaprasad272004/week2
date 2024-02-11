#include<iostream>
#include<string>
using namespace std;
void oddoreven(int a)
{
    if(a%2==0)
    {
        cout<<"The value "<<a<<" is "<<"Even"<<endl;
    }
    else{
        cout<<"The value "<<a<<" is "<<"Odd"<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter a number to check weather it is even or odd : ";
    cin>>a;
    oddoreven(a);
}