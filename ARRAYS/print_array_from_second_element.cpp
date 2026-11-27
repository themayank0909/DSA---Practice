#include <iostream>
using namespace std;
int main()
{
    int arr[] = {32, 66, 75, 76, 34, 5, 6};
    int n = sizeof(arr) / 4;
    for (int i = 1; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
