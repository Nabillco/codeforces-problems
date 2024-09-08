#include<bits/stdc++.h>
#define M_M ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define all(a) a.begin(),a.end()
#define rall(v) (v).begin(),(v).end(),greater<>()
#define en "\n"
#define __ ll _; cin>>_; while(_--)
using namespace std;
const ll maxx=3e5+5;
ll arr[maxx];
void solve()
{
ll n,m;
cin>>n>>m;
set<ll>s;
for(int i=1;i<=n;i++)s.insert(i);
while(m--)
{
    ll l,r,x;
    cin>>l>>r>>x;
    vector<ll>v;
    auto a=s.lower_bound(l);
    auto b=s.upper_bound(r);
    for(auto i=a;i!=b;i++)(*i!=x)?v.push_back(*i),arr[*i]=x:x=x;
    for(int i=0;i<v.size();i++)s.erase(v[i]);
}
for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
}
int main() {
M_M
//__
{
solve();
}
return 0;
}
