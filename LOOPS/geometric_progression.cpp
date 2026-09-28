#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of terms = ";
    cin>>n;

    int a = 1 , r = 2;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a *= r;
    }
  
}
