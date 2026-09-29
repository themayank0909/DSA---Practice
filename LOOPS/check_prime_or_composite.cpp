#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter number = ";
    cin>>n;
    bool flag = false; //means its prime

 for (int i=2; i<=n-1; i++){
     if (n%i == 0) 
     flag = true; // it's composite
     break;
    
 }
 if (n==1) cout<<"naither composite nor prime";
 else if(flag == true) cout<<"it's composite";
 else cout<<"it's prime";
}
