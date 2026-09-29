#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter number = ";
    cin>>n;
   int factor = 0;
 for (int i=1; i<=n; i++){
     if (n%i == 0) //facto milgya 
     factor++;
    
 }
 if(factor==1) cout<<"naither prime nor composite";
 else if (factor>=3) cout<<"it's composite number";
 else cout<<"it's prime number";


}
