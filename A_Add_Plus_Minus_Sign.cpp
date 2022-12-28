#include<iostream>

using namespace std;

void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s,t="";
        cin>>s;
        bool flag;
        if(s[0]=='1')
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1' && flag)
            {
                t+='-';
                flag=false;
            }
            else if(s[i]=='1' && !flag)
            {
                t+='+';
                flag=true;
            }
            else
            {
                t+='+';
            }
        }
        cout<<t<<'\n';
    }
return 0;
}