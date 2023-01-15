#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    ll n,q,l,r;
    scanf("%lld",&n);
    bool a[n];
    int t;

    for(int i=0;i<n;i++){
        scanf("%d",&t);
        if(t==0)a[i]=false;
        else a[i]=true;


    }

    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld",&l,&r);

        // if(a[l-1] && a[r-1])printf("1\n");
        // else printf("0\n");
        printf("%d\n",a[l-1]*a[r-1]);
    }

    return 0;
}