
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    int count = 0;
    string word;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            count++;
        }
    }
    if (count)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}