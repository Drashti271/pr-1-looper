#include<iostream>
using namespace std;

int main(){

    char ch = 'a';

    cout<<"Enter a Character: ";
    cin>>ch;

    do{
        cout<<ch<<endl;
        ch += 4;
    }while(ch<='z');

    return 0;
}

