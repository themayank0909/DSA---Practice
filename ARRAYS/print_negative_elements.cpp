#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number = ";
    cin>>n;
    int arr[n];
    cout<<"Enter arry elemant = ";
    for(int i=1;i<=n-1;i++){
        cin>>arr[i];
    }
    //print nagative elemant of arry

    for(int i=1;i<=n-1;i++){
       if(arr[i]<0) cout<<arr[i];
    }
    
}
