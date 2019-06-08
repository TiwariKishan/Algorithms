#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
#define ll long long
#define f(i,a,b) for(ll i=a;i<b;i++)
#define mod 1000000007
#define fi first
#define se second
#define pa pair <ll,ll>
#define mp make_pair
#define pb push_back
#define ve vector<ll>
#define vep vector< pa >
#define c(t) cout<<t<<"\n"
using namespace std;
//By recursion
// This is so bad method
ll rec(ll n)
{   if(n<0)
    return 0;
    if (n==0)
    return 1;
    return rec(n-1)+rec(n-2)+rec(n-3);
}
// By Top Down DP == Recursion + Memoization
// This is optimized for time complexity
ll tdp(ll n,ll a[])
{
    if(n<0)
    return 0;
    if (n==0)
    {   a[n]=1;
        return 1;}
    if(a[n]!=-1)
        return a[n];
    else
      {a[n]=tdp(n-1,a)+tdp(n-2,a)+tdp(n-3,a);
          return a[n];}
}
//By Bottom UP Approach == Iterative Method
// This is optimized for the space and time complexity as well
ll bdp(ll n)
{
    //ll dp[n];
    ll a=1,b=1,c=2,d;
    if(n==0)
        return a;
    if(n==1)
        return b;
    if(n==2)
        return c;
    f(i,3,n+1)
    {d=a+b+c;
     a=b;
     b=c;
     c=d;
    }
    return d;
}
void solve()
{  ll n;
cin>>n;
c(bdp(n));
ll a[n];
f(i,0,n+1)
a[i]=-1;
tdp(n,a);
c(a[n]);
c(rec(n));
}
int main()
{
    ios::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--)
    {

        solve();
    }
return 0;
}
