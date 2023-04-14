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

        int i=0,num,sign; 
        while(1)
        {
            if((n-i)%3==0 || (n+i)%3==0)
            {
                if((n+i)%3==0)
                {
                    num=i;
                    sign=1;
                    break;
                }
                else
                {
                    num=-i;
                    sign=0;
                    break;
                }
            }
            i++;
        }

        // cout<<num<<" "<<sign;
        int x,y;
        y=(n+num)/3;
        x=-num+y;

        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}