#include<iostream>
using namespace std;
int x=7; // Global veriable
void moj() {
    x = 34;
}
int main(){
 cout<<x<<endl;
 moj();
 cout<<x<<endl;

}
