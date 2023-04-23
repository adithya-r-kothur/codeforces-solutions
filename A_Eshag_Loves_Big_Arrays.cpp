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

        int a[n],mini = INT_MAX,cnt=0;



        for(int &i:a)
        {
            cin>>i;
            if(i<mini)
            {
                mini = i;
            }
        }


        sort(a,a+n);

        for(int i=0;i<n;i++)
        {
            if(mini==a[i])
                cnt++;
            else
                break;    
        }


        cout<<n-cnt<<"\n";


    }
    return 0;
}