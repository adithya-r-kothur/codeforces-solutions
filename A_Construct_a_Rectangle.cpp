#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a[3];
        for(int &i:a)
        {
            cin>>i;
        }

        sort(a,a+3,greater<int>());

        if(a[0]!=a[1])
        {
            if(a[1]==a[2] && a[0]%2==0)
            {
                cout<<"YES\n";
            }
            else
            {
                if(a[0] == a[1]+a[2])
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
        }
        else
        {
            if(a[2]%2==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }

    }
    return 0;
}

// better approch using bitwise or
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     vector<int> l(3);
//     for (int i = 0; i < 3; ++i)
//       cin >> l[i];
//     bool ok = false;
//     for (int i = 0; i < 3; ++i)
//       ok |= l[i] == l[(i + 1) % 3] + l[(i + 2) % 3];
//     for (int i = 0; i < 3; ++i) if (l[i] % 2 == 0)
//       ok |= l[(i + 1) % 3] == l[(i + 2) % 3];
//     cout << (ok ? "YES\n" : "NO\n");
//   }
// } 