#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve(){
    int num;
    cin >> num;

    vector<pair<int, int>> calc(num);
    int ones = 0, oths = 0;
    for(int i=0; i<num; i++){
        int t;
        cin >> t;
        calc[i] = {t, i+1};
        if(t==1) 
            ones++;
        else 
            oths++;
    }

    if(ones && oths)
    {
        cout << "-1" << endl;
        return;
    } 
    else if(ones || num==1)
    {
        cout << "0" << endl;
        return;
    }

    
  
}


int main()
{


int t;
cin>>t;


while(t--)
{
  //solve();

      int num;
    cin >> num;

    vector<pair<int, int>> calc(num);
    int ones = 0, oths = 0;
    for(int i=0; i<num; i++){
        int t;
        cin >> t;
        calc[i] = {t, i+1};
        if(t==1) 
            ones++;
        else 
            oths++;
    }

    if(ones && oths)
    {
        cout << "-1" << endl;
        
    } 
    else if(ones || num==1)
    {
        cout << "0" << endl;
        
    }
    else
    {
        sort(calc.begin(), calc.end());

    if(calc[0].first == calc.back().first)
    {
        cout << "0" << endl;
    }
    else
    {
        vector<pair<int, int>> a;
        set<pair<int, int>> s;
        for(auto &i: calc) s.insert(i);

        while(s.begin()->first!=prev(s.end())->first){
            auto it = *prev(s.end());
            s.erase(it);
            auto at = *s.begin();
            a.push_back({it.second, at.second});
            if(it.first%at.first == 0) it.first/=at.first;
            else it.first = it.first/at.first + 1;
            s.insert(it);
        }
        cout << a.size() << endl;
        for(auto &i: a){
            cout << i.first << " " << i.second << endl;
        }
    }
    }

    


}
return 0;
}