#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n],mini=INT_MAX,maxi=INT_MIN,minpos,maxpos;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(mini>a[i])
            {
                mini=a[i];
                minpos=i;
            }

            if(maxi<a[i])
            {
                maxi=a[i];
                maxpos=i;   
            }
        }

        // maxpos++;minpos++;

          cout << min({
            max(maxpos, minpos) + 1,
            (n - 1) - min(maxpos, minpos) + 1,
            (n - 1) - maxpos + minpos + 2,
            (n - 1) - minpos + maxpos + 2
            }) << "\n";

        // if(abs(maxpos-minpos)==1)
        // {

        //     cout<<min(min(maxpos-1,n-maxpos)+1,min(minpos-1,n-minpos)+1)+1<<"\n";
        // }
        // else
        // {
        //     if(minpos-1<=n-minpos && maxpos-1<=n-maxpos)
        //     {
        //         cout<<max(minpos-1,maxpos-1)+1<<"\n";
        //     }
        //     else if(minpos-1>=n-minpos && maxpos-1>=n-maxpos)
        //     {
        //         cout<<min(n-minpos,n-maxpos)+1;
        //     }
        //     else
        //     {
        //         int p1 = min(minpos-1,n-minpos)+1;
        //         int p2 = min(maxpos-1,n-maxpos)+1;

        //         cout<<p1+p2<<"\n";
        //     }
            
        // }

        
    }
    return 0;
}