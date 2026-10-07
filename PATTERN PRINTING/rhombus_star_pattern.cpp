#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

// for triangle shap with number

for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){ // space triangle
        cout<<"  ";
    }
    for(int j=1; j<=n; j++){
     cout<<"* ";
     
    }
    cout<<endl;
}

}
