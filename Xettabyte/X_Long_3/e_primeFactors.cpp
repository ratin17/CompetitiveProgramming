#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ll n;
    while(cin>>n){
        if(n==0)break;

        ll m=abs(n);
        vector<ll>v;
        
        ll i;
        for(i=2;i*i<=m;i++){
            if(m%i==0){
                v.push_back(i);
                m/=i;
                i=1;
            }
        }
        if(m!=1)v.push_back(m);

        sort(v.begin(),v.end());
        cout<<n<<" =";
        if(n<0)cout<<" -1";
        ra(j,0,v.size()){
            if(n>0 && j==0)cout<<" "<<v[j];
            else cout<<" x "<<v[j];
        }
        cout<<endl;

    }
    
    
    return 0;
}