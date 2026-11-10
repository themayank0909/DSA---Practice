#include<iostream>
#include<cmath> // for mathamatic term
using namespace std;

int max2(int a, int b,int c) {
    if(a>=b && a>=c) return a;
    else if (b>=c && b>=a) return b;
     return c;
    
}
int main(){      
cout<<max2(4,45,76);

}
