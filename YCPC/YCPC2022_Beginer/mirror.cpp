#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ll n;
    cin>>n;
    ll s=n-2;

    for(ll i=1;i<=n;i++){
        if(i==1){
            for(ll j=1;j<=n;j++){
                cout<<j;
            }
            cout<<endl;
        }

        else if(i!=1 && i!=n){
            cout<<i;
            for(ll j=0;j<s;j++)cout<<" ";
            cout<<n-i+1<<endl;
        }

        else{
            for(ll j=n;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }
    
    return 0;
}