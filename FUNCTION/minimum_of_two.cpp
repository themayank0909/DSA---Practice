#include<iostream>
using namespace std;
void minOfTwo(int a, int b) {
  if (a<b) cout<<a<<" is minimum";
  else if (a==b) cout<<"both are equal";
  else cout<<b<<" is minimum";    
}
int main(){
    minOfTwo(200,50);
}
