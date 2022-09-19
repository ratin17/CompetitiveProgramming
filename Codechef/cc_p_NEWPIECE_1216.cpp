#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long a,b,p,q;
        bool ab,pq;
        cin>>a>>b>>p>>q;
        if(a==p&&b==q)cout<<0<<endl;
        else{
            if((a+b)&1) ab=false;
            else  ab=true;

            if((p+q)&1) pq=false;
            else pq=true;
            cout<<ab<<" "<<pq<<endl;
            if(ab==pq)cout<<2<<endl;
            else cout<<1<<endl;
        }
    }
    return 0;
}



