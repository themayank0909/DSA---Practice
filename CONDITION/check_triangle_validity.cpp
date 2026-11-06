#include<iostream>
using namespace std;
int main(){
int x,y,z;
 cout<<"enter side 1 = ";
 cin>>x;

 cout<<"enter side 2 = ";
 cin>>y;

 cout<<"enter side 3 = ";
 cin>>z;
 
 if (x+y>z && y+z>x && z+x>y) cout<<"it's triangle";
 else cout<<"it's not a triangle";

}
