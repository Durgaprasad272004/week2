#include<iostream>
#include<string>
using namespace std;
int main(){
    float number1,number2;
    int choice;
    cout<<"Enter number1:";
    cin>>number1;
    cout<<"Enter number2:";
    cin>>number2;
    cout<<"choose the operation to perform"<<endl;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
    cout<<"choose a no. from 1 to 4 :";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Addition of "<<number1<<" and "<<number2<<" is "<<(number1+number2)<<endl;
        break;
    case 2:
        cout<<"Subtraction of "<<number1<<" and "<<number2<<" is "<<(number1-number2)<<endl;
        break;
    case 3:
        cout<<"Multiplication of "<<number1<<" and "<<number2<<" is "<<(number1*number2)<<endl;
        break;
    case 4:
        cout<<"Division of "<<number1<<" and "<<number2<<" is "<<(number1/number2)<<endl;
        break;
    default:
        cout<<"Enter a valid input"<<endl;
        break;
    }


}