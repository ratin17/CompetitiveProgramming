#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll sumOfDigits(ll n){
    ll sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    ll n,s;
    cin>>n>>s;
    ll h=n,l=0,mid,starter=-1;

    while(l<=h){

        mid=(l+h)/2;

        if((mid-sumOfDigits(mid))>=s){
            starter = mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }

    }

    if(starter==-1)cout<<0<<endl;
    else cout<<n-starter+1;

    return 0;
}
