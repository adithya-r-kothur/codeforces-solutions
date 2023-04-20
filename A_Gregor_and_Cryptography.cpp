#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long p;

        cin>>p;

        if(p%2==0)
        {
            cout<<"2 "<<p/2<<"\n";
        }
        else
        {
            if(p==5)
                cout<<"2 4\n";
            else
              cout<<"3 "<<(p-(p%3))<<"\n";
        }

    }
    return 0;
}