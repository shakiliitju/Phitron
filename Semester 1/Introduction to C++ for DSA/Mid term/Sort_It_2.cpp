#include <bits/stdc++.h>
using namespace std;

int *sort_it(int s)
{
    int *arr = new int[s];

    for (int i = 0; i < s; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, arr + s, greater<int>());

    return arr;
}

int main()
{
    int N;
    cin >> N;
    int *sortedArray = sort_it(N);

    for (int i = 0; i < N; ++i)
    {
        cout << sortedArray[i] << " ";
    }
    delete[] sortedArray;

    return 0;
}
