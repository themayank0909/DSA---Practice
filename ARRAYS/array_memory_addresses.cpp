#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,4,5,7,65,78,45};
    int n = sizeof(arr)/4 ;
    for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";}
    cout<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
}
