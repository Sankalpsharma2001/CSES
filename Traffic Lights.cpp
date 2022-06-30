#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll, ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define sz(x) ((int)(x).size())
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define  uniq(a) a.resize(unique(a.begin(), a.end()) - a.begin());
#define all(x)      (x).begin(), (x).end()
#define inp(x) for(ll&i:x) cin>>i;
void IOS()
{
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
   #ifndef ONLINE_JUDGE 
  #endif
}
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
 
ll mypow(ll a, ll b) {
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll mypow(ll a, ll b, ll m) {
a %= m;
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a % m;
a = a * a % m;
b >>= 1;
}
return res;
}
const  ll mod = 1e9 + 7;
const  ll  inf = 1e16;
const  ll N = 2e5 + 10;
 
int main()
{
IOS();
FAST;
ll t=1;
// cin>>t;
while(t--)
{
ll x;
cin>>x;
ll n;
cin>>n;
set<ll> s;
s.insert(0);
s.insert(x);
multiset<ll> dis;
dis.insert(x);
for(int i=0;i<n;i++)
{ ll ele;
cin>>ele;
 auto it=s.upper_bound(ele);
 auto it1=it;
 it1--;
 auto del=dis.find(*it-*it1);
 dis.erase(del);
 dis.insert(*it-ele);
 dis.insert(ele-*it1);
 s.insert(ele);
auto ans=dis.end();
 --ans;
 cout<<*ans<<" ";
   /*  s.insert(ele);
    auto it=s.end();
    --it;
    ll ans=x-(*it),pre=0;
    // cout<<ans<<" ";
    for(auto p=s.begin();p!=s.end();p++)
    {
       ans=max(ans,*p-pre);
       pre=*p;
    } 
     cout<<ans<<" ";*/
}
}
return 0;
}