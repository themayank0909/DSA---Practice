#include <iostream>
using namespace std;
int fact (int x)
{
    int fact=1;
    for (int m = 1; m <= x; m++){
    fact *= m;
    }
    return fact;
}
int main(){
    int n;
    cout<<"enter number = ";
    cin>>n;
  for(int i=0; i<=n; i++ ){
    for(int j=0;j<=n-i;j++){
        cout<<" ";
    }
   
    for(int j=0; j<=i;j++){
         int ncr = fact(i) / (fact(j) * fact(i - j));
         cout <<ncr<<" ";
    }
    cout<<endl;
  }

}
