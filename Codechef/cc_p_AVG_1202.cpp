#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long t,n,k,v,a,s,x,i,y;
    cin>>t;
    while(t--){
        s=0;
        cin>>n>>k>>v;
        i=n;
        while(i--){
            cin>>x;
            s+=x;
        }
        y=((v*(n+k))-s);
        if((y%k==0)&&((y/k)>0))a=y/k;
        else a=-1;
        cout<<a<<endl;
    }
    return 0;
}

