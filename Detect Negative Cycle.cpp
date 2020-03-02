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
{  ll v,e;
cin>>v>>e;
ll a[3*e];
f(i,0,3*e)
cin>>a[i];
ve d(v,INT_MAX);
d[0]=0;
ll i=0;
while(i<=v-2)
{   ll j=0;
    while(j<3*e)
    {if(d[a[j+1]]>d[a[j]]+a[j+2])
    {d[a[j+1]]=d[a[j]]+a[j+2];}
     j+=3;
    }
    i++;
}
 ll j=0,tr=0;
    while(j<3*e)
    {if(d[a[j+1]]>d[a[j]]+a[j+2])
    {//d[a[j+1]]=d[a[j]]+a[j+2];}
    tr=1;
    break;
    }j+=3;
    }
    if(tr==0)
        c(0);
    else
        c(1);
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
