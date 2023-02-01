#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n,sum=0;
        cin>>n;
        int a[n];
        bool f=false,s=false,r=false;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        for(ll i=0;i<n;i++){
            if(a[i]==-1){
               if(f){
                r=true;
                break;
               }
               else{
                f=true;
                s=true;
               }
            }
            else{
                f=false;
            }
        }

        if(r)cout<<sum+4<<endl;
        else if(s) cout<<sum<<endl;
        else cout<<sum-4<<endl;

    }

    return 0;
}
