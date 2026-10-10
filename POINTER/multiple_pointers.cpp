#include<iostream>
using namespace std;
int main(){
    int x=7;
    int* p1=&x;
    int* p2=&x;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<&p1<<endl;
    cout<<&p2<<endl;

}
