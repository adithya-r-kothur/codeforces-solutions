#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,m,a,b;

    cin>>n>>m>>a>>b;

    if(m * a > b)
    {
        int remain = (n % m) * a;
        if(remain > b)
            printf("%d\n", n / m * b + b);
        else
            printf("%d\n", n / m * b + remain);
    }
    else
        printf("%d\n", n * a);

    return 0;
}