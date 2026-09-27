#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number from 0 to = ";
    cin>>n;
    
    for(int i=1; i<=n; i++  ){
        if(i%2 == 1 && i%3 == 0) cout<<i<<" ";
    }

}
