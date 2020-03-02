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
ll dp(ll a[],ll n)
{
    ll m[n][n];
    f(i,0,n)
    f(j,0,n)
     m[i][j]=INT_MAX;
    f(i,1,n)
    m[i][i]=0;
    f(l,2,n)
    {
        f(i,1,n-l+2)
        {
            ll j=i+l-1;
            f(k,i,j)
            {   if(m[i][j]>m[i][k]+m[k+1][j]+a[i-1]*a[k]*a[j])
                  m[i][j]=m[i][k]+m[k+1][j]+a[i-1]*a[k]*a[j];
            }
        }
    }
    return m[1][n-1];
}
void solve()
{  ll n;
cin>>n;
ll a[n];
f(i,0,n)
cin>>a[i];
c(dp(a,n));
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
