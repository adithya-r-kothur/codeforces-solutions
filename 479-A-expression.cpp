#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int maxi=INT_MIN;

    maxi=max(maxi,(a+b+c));
    maxi=max(maxi,(a*b*c));
    maxi=max(maxi,(a+b*c));
    maxi=max(maxi,(a*b+c));
    maxi=max(maxi,(a*(b+c)));
    maxi=max(maxi,((a+b)*c));
    maxi=max(maxi,(a+(b*c)));
    maxi=max(maxi,((a*b)+c));
   
    


    cout<<maxi<<"\n";

    return 0;
}