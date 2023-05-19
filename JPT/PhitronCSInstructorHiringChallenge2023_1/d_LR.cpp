#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    int a[n],s[n];

    cin>>a[0];
    s[0]=a[0];
    ra(i,1,n){
        cin>>a[i];
        s[i]=a[i]+s[i-1];
    }

    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--,r--;
        int t;
        if(l-1>=0)t=s[r]-s[l-1];
        else t=s[r];

        if(t==(r-l+1))printf("1\n");
        else printf("0\n");
    }
    
    return 0;
}