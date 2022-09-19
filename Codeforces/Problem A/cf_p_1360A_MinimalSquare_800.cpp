#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,l,s;
        cin>>a>>b;
        if(a<b){
            s=a;
            l=b;
        }
        else{
            s=b;
            l=a;
        }
        s=s*2;
        if(s>=l)cout<<s*s<<endl;
        else cout<<l*l<<endl;
    }

    return 0;
}

