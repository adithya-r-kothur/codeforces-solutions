#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    bool flag=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else
            {
                if(flag)
                {
                    cout<<"#";
                    for(int k=0;k<m-1;k++)
                    {
                        cout<<".";
                    }
                    flag=0;
                    break;
                }
                else
                {
                    for(int k=0;k<m-1;k++)
                    {
                        cout<<".";
                    }
                    cout<<"#";
                    flag=1;
                    break;
                }
            }
        }
        cout<<"\n";
    }


    return 0;
}