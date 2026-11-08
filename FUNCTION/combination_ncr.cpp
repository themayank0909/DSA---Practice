#include <iostream>
using namespace std;
int fact (int x)
{
    int fact=1;
    for (int j = 1; j <= x; j++){
    fact *= j;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n ";
    cin>>n;
    cout<<"enter r ";
    cin>>r;

 int ncr = fact(n) / (fact(r) * fact(n - r));
 cout << ncr;
}
