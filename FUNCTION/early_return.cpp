#include<iostream>
using namespace std;
void name(int n) {
    cout<<n<<endl;
    if(n>20) return;
    cout<<n*n;
    
}
int main(){
 name(22);

}
