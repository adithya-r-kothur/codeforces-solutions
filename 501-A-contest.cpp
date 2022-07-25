#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int mas,vay;
    mas=max(((3*a)/10),(a-((a/250)*c)));
    vay=max(((3*b)/10),(b-((b/250)*d)));
   // (mas>vay)?(cout<<"Misha"):(cout<<"Vasya");
   if(mas>vay)
   {
    cout<<"Misha";
   }
   else if(mas<vay)
   {
    cout<<"Vasya";
   }
   else
   {
    cout<<"Tie";    
   }

    return 0;
}