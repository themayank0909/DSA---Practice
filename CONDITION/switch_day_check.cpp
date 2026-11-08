#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"enter a number = ";
    cin>>n;


    switch (n)
    {
    case 1 : cout<<"monday"; break;
    case 2 : cout<<"tusday"; break;
    case 3 : cout<<"wednesday"; break;
    case 4 : cout<<"thusday"; break;
    case 5 : cout<<"friday"; break;
    case 6 : cout<<"satuday"; break;
    case 7 : cout<<"sunday"; break;
    default: cout<<"invalid day";
    }

    
}
