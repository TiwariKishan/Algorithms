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
void solve()
{  ll n;
cin>>n;
ll g[n][n];
f(i,0,n)
{f(j,0,n)
{cin>>g[i][j];}}
f(k,0,n)
{
    f(i,0,n)
    {
        f(j,0,n)
        {
            if(g[i][j]>g[i][k]+g[k][j])
                g[i][j]=g[i][k]+g[k][j];
        }
    }
}
f(i,0,n)
{f(j,0,n)
{if(g[i][j]<INT_MAX)
     cout<<g[i][j]<<" ";
     else
        cout<<"INF ";

}
cout<<"\n";
}
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
