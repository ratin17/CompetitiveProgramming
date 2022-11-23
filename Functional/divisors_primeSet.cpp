#include<bits/stdc++.h>
using namespace std;

#define ll long long



void setPrime(ll h,bool isPrime[]){
    isPrime[0]=isPrime[1]=false;
    for(ll i=4;i<=h;i+=2)isPrime[i]=false;

    for(ll i=3;i*i<=h;i+=2){
        if(isPrime[i]){
            for(ll j=i*i;j<=h;j+=2*i){
                isPrime[j]=false;
            }
        }
    }
}

ll NODv(ll n){
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
    ll n;
    cin>>n;
    ll h=0;
    ll a[n][2];

    for(ll i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        h=max(h,a[i][1]);
    }

    bool isPrime[h];
    memset(isPrime, true, sizeof(isPrime)+1);
    setPrime(h,isPrime);


    for(ll i=0;i<n;i++){
        ll mDvs=2,mNmb=a[i][0];
        for(ll j=a[i][0];j<=a[i][1];j++){
            ll cDvs=2;
            if(!isPrime[j])cDvs=NODv(j);
            if(cDvs>mDvs){
                mDvs=cDvs;
                mNmb=j;
            }
        }
        
        cout<<"Between "<<a[i][0]<<" and "<<a[i][1]<<", "<<mNmb<<" has a maximum of "<<mDvs<<" divisors."<<endl;
    }

    return 0;
}