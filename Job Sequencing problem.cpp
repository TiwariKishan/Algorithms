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
bool bo(pa a,pa b)
{
    return a.fi>b.fi;
}
void solve()
{  ll n;
cin>>n;
ll d[n],p[n],j=0,k=0;
f(i,0,3*n)
{ ll h;
    cin>>h;
    if(i%3==1)
    {d[j]=h;
     j++;
    }
    if(i%3==2)
    {
        p[k]=h;
        k++;
    }
}
vep a;
f(i,0,n)
{
    a.pb(mp(p[i],d[i]));
}
sort(a.begin(),a.end(),bo);
ve used(n,false);
ll pro=0,lo=0;
f(i,0,n)
{
    for(j=min(n,a[i].se)-1;j>=0;j--)
    {
        if(used[j]==false)
        {
            used[j]=true;
            pro+=a[i].fi;
            lo++;
            break;
        }
    }
}
cout<<lo<<" "<<pro<<"\n";
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
