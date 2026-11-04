#include<iostream>
using namespace std;
int main(){
int x;
cout<<"write a number :-";
cin>>x;
if (x<0) cout<<-x<<endl;
else cout<<x;
} 


#include<iostream>
using namespace std;
int main(){
int x;
cout<<"write a number :-";
cin>>x;
if (x<0) x *=-1;
cout<<x;
}
