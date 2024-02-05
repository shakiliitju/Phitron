#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id;
    string name;
    char sec;
    int M;
};

bool cs(const Student &a, const Student &b)
{
    if (a.M == b.M)
    {
        return a.id < b.id;
    }
    return a.M > b.M;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        Student s[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> s[j].id >> s[j].name >> s[j].sec >> s[j].M;
        }
        sort(s, s + 3, cs);
        cout << s[0].id << " " << s[0].name << " " << s[0].sec << " " << s[0].M << endl;
    }

    return 0;
}
