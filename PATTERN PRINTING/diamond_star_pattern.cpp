// for dimond

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

// for upper triangle 

int nst=1;
int nsp = n-1;
for(int i=1; i<=n; i++){

  for (int j=1; j<=nsp; j++){
    cout<<"  ";
  }
  for(int j=1; j<=nst; j++){
    cout<<"* ";
  }
  nsp -= 1;
  nst +=2;
  cout<<endl;
}

// for lower triangle 

nst=2*n-3;
nsp = 1;
for(int i=1; i<=n; i++){

  for (int j=1; j<=nsp; j++){
    cout<<"  ";
  }
  for(int j=1; j<=nst; j++){
    cout<<"* ";
  }
  nsp += 1;
  nst -=2;
  cout<<endl;
}


}
