#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int s;
        cin>>s;

        int curr=0,i=1,cnt=0;


        while(curr<s)
        {
            cnt++;
            curr+=i;
            i=i+2;
        }

        cout<<cnt<<"\n";





    }
}