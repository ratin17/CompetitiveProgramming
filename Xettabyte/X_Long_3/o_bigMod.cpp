#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

ll calc(ll b,ll p,ll m){
    ll r=1;
    while(p--){
        r=r*b%m;
    }
    return r;

}


int main(){
    ll b,p,m;
    while(cin>>b>>p>>m){

        cout<<calc(b,p,m)<<endl;
    }
    
    return 0;
}