#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string S, X;
        cin >> S >> X;
        
        while(S.find(X)!=-1){
            S.replace(S.find(X),X.size(),"#");
        }
        cout <<S<< endl;
    }
    return 0;
}