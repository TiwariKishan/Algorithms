/*
  Author - KISHAN TIWARI
  Dream bigger. Do bigger.
  Wake up with determination. Go to bed with satisfaction.
*/
//Sometimes later becomes never. Do it now.
#include<bits/stdc++.h>
using namespace std;
#define ll           long long
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define mod          1000000007
#define fi           first
#define se           second
#define pa           pair <ll,ll>
#define mp           make_pair
#define pb           push_back
#define ve           vector<ll>
#define vep          vector< pa >
#define all(a)       a.begin(), a.end()
#define sz(x)        (ll)x.size()
#define c(t)         cout<<t<<"\n"
using namespace std;
ll fu(ll va[],ll wt[],ll n,ll w)
{
    ll dp[n][w+1];
    f(i,0,n)
     dp[i][0]=0;
    f(i,0,w+1)
     {if(i>=wt[0])
     dp[0][i]=va[0];
     else
     dp[0][i]=0;
     }
    f(i,1,n)
    {
        f(j,1,w+1)
        {   if(j>=wt[i])
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i]]+va[i]);
             else
             dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n-1][w];
}
void solve()
{  ll n,w;
cin>>n>>w;
ll va[n],wt[n];
f(i,0,n)
cin>>va[i];
f(i,0,n)
cin>>wt[i];
c(fu(va,wt,n,w));
}
int main()
{
    ios::sync_with_stdio(true);
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {

        solve();
    }
return 0;
}
