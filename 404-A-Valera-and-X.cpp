#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    set<char> x, y;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < n; j++)
            if (i == j or i + j == n - 1)
                x.insert(s[j]);
            else
                y.insert(s[j]);
    }

    if (x.size() == 1 and y.size() == 1 and *x.begin() != *y.begin())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}



// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n,dia=0,dia2=0,norm=0;
//     cin>>n;
//     bool flag=0;

//     char a[n][n];

//     for(int i=0;i<n;i++)
//     {
//       for(int j=0;j<n;j++)
//       {
//         cin>>a[i][j];
//       }
//     }

//     for(int i=0;i<n;i++)
//     {
//       for(int j=0;j<n;j++)
//       {
//         if(i+j==n-1)
//         {
//             if(a[i][n-1-i]==a[0][n-1] && a[i][j]!=a[0][1])
//             {
//                dia2++; 
//             }
//             else
//             {
//                 flag=1;
//                 cout<<"NO\n";
//                 break;
                
//             }
//         }
//         else if(i==j)
//         {
//             if(a[i][j]==a[0][0] && a[i][j]!=a[0][1])
//             {
//                 dia++;
//             }
//             else
//             {
//                 flag=1;
//                 cout<<"NO\n";
//                 break;
                
//             }
//         }
//         else
//         {
//             if(a[i][j]==a[0][1] && a[i][j]!=a[0][0] && a[i][j]!=a[0][n-1])
//             {
//                 norm++;
//             }
//             else
//             {
//                 flag=1;
//                 cout<<"NO\n";
//                 break;
                
//             }
//         }
//       }
//       if(flag)
//       {
//           break;
//       }
//     }

//     if(flag==0 && dia==n && dia2==n && norm==((n*n)-((n*2)-1)))
//     {
//         cout<<"YES\n";
//     }
//     cout<<dia<<" "<<dia2<<" "<<norm<<"\n";
    
    
//     return 0;
// }