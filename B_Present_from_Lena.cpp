// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int ch,z;

//     for(int i=0;i<=n*2;i++)
//     {   
//         if(i<=n)
//         {
//             for(int j=0;j<n-i;j++)
//             {
//                 cout<<"  ";
//             }
//             for(int k=0;k<=2*i;k++)
//             {
//                 if(k<=i)
//                 {
//                     if(k==0)
//                         cout<<k;
//                     else
//                         cout<<k<<" "; 

//                 }
//                 else
//                 {
//                     ch = k+((i-k)*2);
//                     if(ch==0)
//                         cout<<ch;
//                     else    
//                         cout<<ch<<" ";
//                 }
//             }
//             for(int j=0;j<n-i;j++)
//             {
//                 cout<<"  ";
//             }
//             cout<<"\n";
//         }
//         else
//         {
//             z=i+((n-i)*2);
//             for(int j=0;j<n-z;j++)
//             {
//                 cout<<"  ";
//             }
//             for(int k=0;k<=2*z;k++)
//             {
//                 if(k<=z)
//                 {
//                     if(k==0)
//                         cout<<k;
//                     else
//                         cout<<k<<" ";
//                 }
//                 else
//                 {
//                     ch = k+((z-k)*2);
//                     if(ch==0)
//                         cout<<ch;
//                     else    
//                         cout<<ch<<" ";
//                 }
//             }
//             for(int j=0;j<n-z;j++)
//             {
//                 cout<<"  ";
//             }
//             cout<<"\n";
//         }
//     }

//     return 0;
// }


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
        {
            cout << "  ";
        }
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
    return 0;
}