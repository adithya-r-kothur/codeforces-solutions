#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x=0,y=0,z=0;

    for(int i=1;i<7;i++)
    {
      int diffa,diffb;
      diffa=abs(a-i);
      diffb=abs(b-i);
      if(diffa>diffb)
      {
          z++;
      }
      else if(diffa<diffb)
      {
          x++;
      }
      else
      {
          y++;
      }
    }

    cout<<x<<" "<<y<<" "<<z<<"\n";
    return 0;
}