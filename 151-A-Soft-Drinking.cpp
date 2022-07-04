#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int ans=0;
    int slices=c*d;
    int totaldrink=k*l;
    int salttoone=p/np;
    int drinktoone=totaldrink/nl;

    ans=min(drinktoone,min(slices,salttoone));

    cout<<ans/n<<"\n";
    return 0;
}