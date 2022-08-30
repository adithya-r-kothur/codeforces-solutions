#include<bits/stdc++.h>

using namespace std;

int main()
{
    string input,ref;
    cin>>input>>ref;
    int n,m,j=0,pos;
    n=input.size();
    m=ref.size();

    for(int i=0;i<m;i++)
    {
        if(ref[i]==input[j])
        {
            j++;
        }
    }
    cout<<j+1<<"\n";
    return 0;
}