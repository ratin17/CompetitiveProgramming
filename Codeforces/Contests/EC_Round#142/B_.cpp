#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll z,a,b,x;
        cin>>z>>a>>b>>x;

        if((z+a+b+x)==0){
            cout<<0<<endl;
            return 0;
        }
        ll A=0,X=0;

        ll ans=z;


        ll m=min(a,b);
        ans=ans+m*2;


        m=max(a,b)-min(a,b);
        ans=ans+min(z,m);


        if(m>z)A=1;

        if(z>m){
            z=z-m;
            ans=ans+min(z,x);
        }
        if(x>z)X=1;

        if((A+X)>0){
            ans++;
        }

        cout<<ans<<endl;

    }
    
    return 0;
}