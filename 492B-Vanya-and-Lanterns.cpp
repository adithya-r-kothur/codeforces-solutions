#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,l;
    cin>>n>>l;
    int a[n];
    
    int dummy =0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    float currdiff=a[0];
    float maxdiff=-100;
    float sta=max(maxdiff,currdiff);
    //cout<<maxdiff;
    for(int i=0;i<n-1;i++)
    {
        currdiff=a[i+1]-a[i];
        maxdiff=max(maxdiff,currdiff);
    }
    double last = l-a[n-1];
    
    double ans = max(sta,(maxdiff/2));
    ans = max(ans,last);
    cout <<fixed;
    cout <<setprecision(10);
    cout<<ans<<"\n";
    
    



    return 0;
}