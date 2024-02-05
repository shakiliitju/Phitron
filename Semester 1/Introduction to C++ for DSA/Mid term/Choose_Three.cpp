#include <bits/stdc++.h>
using namespace std;

bool isSumPossible(int arr[], int n, int Sum)
{

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == Sum)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, S;
        cin >> N >> S;
        int A[N];

        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }

        if (isSumPossible(A, N, S))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
