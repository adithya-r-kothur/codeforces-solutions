#include<bits/stdc++.h>
 using namespace std;
 int main()
{

    int t;
    cin>>t;

    while(t--)
    {

         long long  n;
    cin >> n;
    string str;
    cin >> str;
    set<char> s;
    vector<int> prefix(n, 0), suffix(n, 0);
    for (int i = 0; i < n; i++)
    {
        s.insert(str[i]);
        prefix[i] = s.size();
    }
    s.clear();
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(str[i]);
        suffix[i] = s.size();
    }
    int cnt = 0, var = 0;
    for (int i = 0; i < n - 1; i++)
    {
        var = prefix[i] + suffix[i + 1];
        cnt = max(cnt, var);
    }
    cout << cnt << endl;
        


    }    
}