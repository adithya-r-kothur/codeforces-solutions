#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;

    int a = sqrt((a1*a3)/a2);
    int b  = sqrt((a2*a3)/a1);
    int c = sqrt((a1*a2)/a3);

    int ans = 4*(a+b+c);
    cout<<ans<<"\n";
    return 0;
}