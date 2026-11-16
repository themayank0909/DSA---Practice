#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a and b = ";
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    
    // For swap

    int c;
    c=b;
    b=a;
    a=c;
    cout<<a<<" "<<b<<endl;
}
