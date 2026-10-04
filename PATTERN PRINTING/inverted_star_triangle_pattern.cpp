#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a = n;
for(int i=1; i<=n; i++){
    for(int j=1; j<=a; j++){
     cout<<"*"<<" ";
     
    }
    a--;
    cout<<endl;
}

}
