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

if (x<y && x<z) cout<<x<<"is least number";
else if (y<x && y<3z) cout<<y<<"is least number";
else cout<<z<<"is least number";


}
