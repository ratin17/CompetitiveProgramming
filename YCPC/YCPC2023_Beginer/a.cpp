#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,d1,d2;
        cin>>x>>d1>>d2;
        double ans=((double)x*(double)d1)/(double)d2;
        ans=ceil(ans);
        cout<<ans<<endl;

    }
    return 0;
}
