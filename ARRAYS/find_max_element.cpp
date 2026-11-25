#include <iostream>
// #include<climits>   //for error
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12};
    int n = sizeof(arr) / 4;
    int max = INT_MIN;    // the smallest intiger 
    for (int i = 0; i <= n - 1; i++)
    {
       if (arr[i]>max) 
       max=arr[i];
   
    }
     cout << max;
}
