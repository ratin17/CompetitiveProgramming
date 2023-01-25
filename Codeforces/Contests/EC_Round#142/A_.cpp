#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll tmp,ones=0,ans=0;
        ra(i,0,n){
            cin>>tmp;
            if(tmp==1)ones++;
        }
        if(ones%2==0)ans=ones/2;
        else ans=(ones/2)+1;

        cout<<ans+(n-ones)<<endl;
    }
    return 0;
}