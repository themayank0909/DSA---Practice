#include<iostream>
using namespace std;
void change(int x[]){
    x[0] =20;
}
int main(){
    int x[] = {6,9,76};
    change(x);   // x = &x[0]
    cout<<x[0]<<endl;
}
