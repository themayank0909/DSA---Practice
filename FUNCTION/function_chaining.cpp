#include<iostream>
using namespace std;
void mayank() {
    cout<<"hiii i'm mayank "<<endl;
}
void rishab(){
  cout<<"hii i'm rishab"<<endl;
  mayank();
}
void priyank(){
 cout<<"hii i'm priyank "<<endl;
 rishab();
}
int main(){
cout<<"intro"<<endl;
priyank();

}
