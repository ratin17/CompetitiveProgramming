#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,v;
        cin>>n;
        if(n==0){
            cout<<1<<endl;
        }
        else{
            v=ceil(log2(n));
            cout<<(ll)pow(2,v)<<endl;
        }
        

    }
    
    return 0;
}