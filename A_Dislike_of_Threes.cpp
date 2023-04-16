#include<bits/stdc++.h>

using namespace std;

int a[10000];
void giveele()
{   
    int z=1;
    a[0]=1;
    for(long long i=1;i<10000;i++)
    {
        if(i%3!=0 && i%10!=3)
        {
            a[z++] =i;
        }
    }

    
}

int main()
{
    int t;
    cin>>t;

    giveele();


    while(t--)
    {
        int k;
        cin>>k;

        cout<<a[k]<<"\n";
    }
    return 0;
}
