#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>& v){   // Pass by refrance
    v[3]=69;
}
int main(){
    vector<int> v = {4,6,2,5,8,9};
    change (v);
    cout<<v[3]<<endl;
}
