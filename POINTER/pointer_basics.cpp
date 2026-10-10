#include<iostream>
using namespace std;
int main(){
  int x=1432;
    int* P=&x;
    cout<<x<<endl;
    *P = 8;   
    cout<<x;

}
