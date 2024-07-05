#include<bits/stdc++.h>
#define M_M ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define all(a) a.begin(),a.end()
#define rall(v) (v).begin(),(v).end(),greater<>()
#define en "\n"
#define __ ll _; cin>>_; while(_--)
using namespace std;
const ll maxx=1e5+5;
vector<ll>g[maxx];
vector<ll>v;
ll arr[maxx],brr[maxx];
bool vis[maxx];
ll DFS(ll n,ll cntr,ll o,ll e)
{
    vis[n]=true;
    if(cntr&1)
    {
        if(o)if(arr[n]==brr[n])v.push_back(n),o=false;
        if(!o)if(arr[n]!=brr[n])v.push_back(n),o=true;
    }
    else
    {
        if(e)if(arr[n]==brr[n])v.push_back(n),e=false;
        if(!e)if(arr[n]!=brr[n])v.push_back(n),e=true;
    }
    for(int i:g[n])
    {
        if(!vis[i])DFS(i,cntr+1,o,e);
    }
}
void solve()
{
ll n;
cin>>n;
for(int i=0;i<n-1;i++)
{
    ll u,v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
}
for(int i=1;i<=n;i++)cin>>arr[i];
for(int i=1;i<=n;i++)cin>>brr[i];
DFS(1,1,0,0);
cout<<v.size()<<endl;
for(int i:v)cout<<i<<endl;
}
int main() {
M_M
//__
{
solve();
}
return 0;
}
