
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c=0,i=2;
        cin>>n;
        for(;i*i<=n;i++){
            // cout<<n<<" "<<i<<endl;
            if(n%i==0){
                // cout<<i<<endl;
                c++;
                n=n/i;
                i=1;
                if(n<2)break;
            }
        }
        if(i>1)c++;
        cout<<c<<endl;
    }
    return 0;
}