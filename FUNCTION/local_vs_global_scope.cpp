#include<iostream>
using namespace std;
int x=7; // Global veriable
void change() {
    x = 34;
}
int main(){
    int x=4;
 cout<<x<<endl;
 change();
 cout<<x<<endl;

}
