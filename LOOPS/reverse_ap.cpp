 #include<iostream>
using namespace std;
int main(){

  int l;
  cout<<"enter last term = ";
  cin>>l;

  int d;
  cout<<"enter common diffrance = ";
  cin>>d;


 for(int i=l; i>=0; i-=d ){
    cout<<i<<" ";
 }
}
