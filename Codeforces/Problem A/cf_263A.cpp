#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,n,p=0,r,c,ans=0;
    while(true){
        p++;
        cin>>v;
        if(v==1){
            n=p;
        }
        if(p==25)break;
    }
    r=ceil(n/5.0);
    c=n%5;
    if(c==0)c=5;
    ans=ans+abs(3-r)+abs(3-c);
    cout<<ans<<endl;
}