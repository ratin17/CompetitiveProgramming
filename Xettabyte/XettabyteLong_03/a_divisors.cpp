#include<bits/stdc++.h>
using namespace std;

#define ll long long



ll NODv(ll n){
    if(n==1)return 1;
    ll cnt=2;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n)cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}



int main(){
    ll n,l,r;
    cin>>n;
    

    for(ll i=0;i<n;i++){
        cin>>l>>r;

    
        ll mDvs=0,mNmb=0;
        for(ll j=l;j<=r;j++){
            ll cDvs;
            cDvs=NODv(j);
            if(cDvs>mDvs){
                mDvs=cDvs;
                mNmb=j;
            }
        }
        
        cout<<"Between "<<l<<" and "<<r<<", "<<mNmb<<" has a maximum of "<<mDvs<<" divisors."<<endl;
    }
        

    return 0;
}