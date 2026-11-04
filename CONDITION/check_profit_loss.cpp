#include<iostream>
using namespace std;
int main(){
float x;
float y ;
 cout<<"enter cost =";
 cin>>x;

 cout<<"enter selling price =";
 cin>>y;

 if (x>y) cout<<"they are in loss of = "<<y-x;
 
 else if (y>x) cout<<"they are in profit of = "<<y-x;
 
 else cout<<"no profit, no loss";


}
