#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    int even=0,odd=0;
    vector<int>eve;
    vector<int>od;

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
       if(a[i]%2==0)
       {
           even++;
           eve.push_back(i);
           
       }
       else
       {
           odd++;
           od.push_back(i);
            
       }
    }

int neve=eve.size();
int nod=od.size();

// cout<<neve<<" "<<nod<<"\n";

if(neve>nod)
{
    cout<<od[0]+1;
}
else
{
    cout<<eve[0]+1;
}




    return 0;
}