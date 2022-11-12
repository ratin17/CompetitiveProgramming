#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        ll l,n,a=0;
        cin>>l>>n;
        ll sum=0,d;
        char D;
        while(n--){
            cin>>d>>D;
            if(D=='C')sum+=d;
            else sum-=d;

            if(sum>=l || sum<1){

                a=a+sum/l;
                sum=sum%l;
            }

        }
        cout<<"Case #"<<i<<": "<<a<<endl;
    }
    
    return 0;
}