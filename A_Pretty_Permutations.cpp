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

        int a[n]={0};

        if(n%2==0)
        {
            a[0]=1;
            for(int i=1;i<n;i++)
            {
                a[i]=i+1;
            }

            for(int i=0;i<n-1;i=i+2)
            {
                swap(a[i],a[i+1]);
            }


        }
        else
        {
            a[0]=3;
            a[1]=1;
            a[2]=2;
            for(int i=3;i<n;i++)
            {
                a[i]=i+1;
            }

            for(int i=3;i<n-1;i=i+2)
            {
                swap(a[i],a[i+1]);
            }
        }


        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}