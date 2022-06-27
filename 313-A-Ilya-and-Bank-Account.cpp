#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long  n;

    cin>>n;


    int last,secondlast;

    if(n>0)
    {
        cout<<n<<"\n";
    }
    else
    {     if(n<=99 && n>=-99)
        {
            last=n%10;
        n=n/10;
        secondlast=n%10;
        n=n/10;

        cout<<max(last,secondlast)<<"\n";

        }
        else
       {
            last=n%10;
        n=n/10;
        secondlast=n%10;
        n=n/10;

        if(abs(secondlast)>abs(last))
        {
            cout<<n<<abs(last)<<"\n";
        }
        else
        {
            cout<<n<<abs(secondlast)<<"\n";
        }
        }

    }



    return 0;
}