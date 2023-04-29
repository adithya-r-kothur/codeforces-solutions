#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a,b;
        cin>>a>>b;

        long long g  =abs(a-b);

        if(a==b)
        {
            cout<<"0 0\n";
        }
        else
        {
            long long ans = min(a%g , g-a % g);

            cout<<g<<" "<<ans<<"\n";

        }



        

        


    }
    return 0;
}