#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter a number:- ";
cin>>a;
cout<<"enter power:- ";
cin>>b;
int ans=1;
for(int i=1; i<=b; i++){
 ans*=a;
}
if( a == 0 & b == 0) cout<<"invalid";
cout<<ans;

}
