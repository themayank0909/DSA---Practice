#include<iostream>
using namespace std;
int main(){
 float l;
 float b;
 
 cout<<"enter langth = ";
 cin>>l;

 cout<<"enter breath = ";
 cin>>b;
 
 if (l*b > 2*(l+b)) cout<<"area is grater then perimiter";
 else cout<<"area is lesser then perimiter ";
}
