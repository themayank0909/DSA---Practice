#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int star=1, nsp = n-1;
for(int i=1; i<=n; i++){

  for (int j=1; j<=nsp; j++){
    cout<<"  ";
  }
  for(int j=1; j<=star; j++){
    cout<<"* ";
  }
  nsp -= 1;
  star +=2;
  cout<<endl;
}


}


