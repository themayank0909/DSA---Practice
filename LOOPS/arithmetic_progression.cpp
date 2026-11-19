 #include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"enter first term = ";
  cin>>a;

  int d;
  cout<<"enter common diffrance = ";
  cin>>d;

    int n;
 cout<<"write number of term = ";
 cin>>n; 

 for(int i=a; i<=a+(n-1)*d; i+=d ){
    cout<<i<<" ";
 }
}
