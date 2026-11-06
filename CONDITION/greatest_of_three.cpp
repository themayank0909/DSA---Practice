#include<iostream>
using namespace std;
int main(){
int x,y,z;

cout<<"enter 1st numer = ";
cin>>x;

cout<<"enter 2nd numer = ";
cin>>y;

cout<<"enter 3rd numer = ";
cin>>z;

if (x>y && x>z) cout<<x<<"is grater number";
else if (y>x && y>z) cout<<y<<"is greater number";
else cout<<z<<"is grater number";


}
