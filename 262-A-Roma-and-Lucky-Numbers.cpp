#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int count=0,lucky=0;
    string s;

    while(n--)
    {
        lucky=0;
        cin>>s;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='4'|| s[i]=='7')
            {
                lucky++;
            }
        }
        if(lucky<=k)
        {
            count++;
        }


    }
    cout<<count<<"\n";
    return 0;
}