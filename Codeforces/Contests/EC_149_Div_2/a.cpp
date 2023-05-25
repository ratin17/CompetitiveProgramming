#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll x,k,e,f,d;
        cin>>x>>k;


        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }


        else{
            d=x/k;
            d--;
            e=(d*k)+1;
            f=(((d+1)*k)-x);

            cout<<2<<endl;
            if(e<=f){
                cout<<e<<" ";
                
            }
        }

    }
    
    return 0;
}
