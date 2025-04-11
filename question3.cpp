#include<iostream>
using namespace std;

int main(){

    int num,sum = 0,i = 1,lastDigit,firstDigit;

    cout<<"Enter a Number: ";
    cin>>num;

    lastDigit = num % 10;

    while(num > 0)
    {
        firstDigit = num % 10;
        num /= 10;
    }

    cout<<"Sum of first and last Digits: "<<firstDigit+lastDigit;

    return 0;
}