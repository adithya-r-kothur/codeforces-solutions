#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    set <int> ans;
    int p;
    cin>>p;
    int x[p];

    for(int i=0;i<p;i++)
    {
       cin>>x[i];
    }
    int q;
    cin>>q;

    int y[q];

    for(int i=0;i<q;i++)
    {
       cin>>y[i];
    }

    for(int i=0;i<p;i++)
    {
      ans.insert(x[i]);
    }

    for(int i=0;i<q;i++)
    {
      ans.insert(y[i]);
    }
 
    //cout<<ans.size();
    if(ans.size()==n)
    {
        cout<<"I become the guy.\n";
    }
    else
    {
        cout<<"Oh, my keyboard!\n";
    }
    return 0;
}