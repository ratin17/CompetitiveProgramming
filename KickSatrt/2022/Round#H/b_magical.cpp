#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main(){
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++){
        
        ll l;
        cin>>l;
        
        if(l<=14){
            cout<<"Case #"<<i<<": "<<l<<endl;
        }

        else if(l>=15 && l<=17){
            cout<<"Case #"<<i<<": "<<13+(l-15)<<endl;
        }

        else if(l>=18 && l<=19){
            cout<<"Case #"<<i<<": "<<14+(l-18)<<endl;
        }
        
        else if(l==20)cout<<"Case #"<<i<<": "<<15<<endl;
        
        
    }
    
    return 0;
}