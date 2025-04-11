#include<iostream>
using namespace std;

int main(){
    int num;
    int digit = 0;

    cout<<"Enter a Number: ";
    cin>>num;
    
    while(num>0){
        digit++;
        num = num/10;
    }

    cout<<"Total number of digits = "<<digit;
    
    return 0;
}