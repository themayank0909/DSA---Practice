#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

// Mathod = 2

// for triangle shap with number

for(int i=1; i<=n; i++){
    for(int j=1; j<n+1-i; j++){
        cout<<"  ";
    }
    for(int j=1; j<=i; j++){
     cout<<"*"<<" ";
     
    }
    cout<<endl;
}
