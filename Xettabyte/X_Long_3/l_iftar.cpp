#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)



int main(){
    ll t;
    cin>>t;
    rep(c,1,t){
        ll p,d,l;
        cin>>p>>l;
        d=p-l;

        cout<<"Case "<<c<<":"; 

        if(l>=d){
            cout<<" impossible"<<endl;
            continue;
        }
        vector<ll>v;

        for(ll i=1;i*i<=d;i++){
            if(d%i==0){
                if(i>l)v.push_back(i);
                if((i!=(d/i)) && d/i>l)v.push_back(d/i);
            }
        }
        if(v.size()==0){
            //cout<<" hmm ";
            cout<<" impossible"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        ra(i,0,v.size()){
            cout<<" "<<v[i];
        }
        cout<<endl;
    }
    
    return 0;
}