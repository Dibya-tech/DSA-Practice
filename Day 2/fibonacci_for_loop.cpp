#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements - ";
    cin >> n;

    int i = 1, j = 1, sum;

    cout << "The fibonacci series is - " << i << "," << j << ",";
    for (int iter = 0; iter < n - 2; iter++)
    {
        sum = i + j;
        j = i;
        i = sum;
        cout << i << ",";
    }

    return 0;
}