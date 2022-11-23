#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

#define gama 0.57721566490

int main(){
    ll N=8000000;
    double H[N];
    H[0]=0;
    ra(i,1,N){
        H[i]=H[i-1]+(1.0/i);
    }


    ll t,n;
    cin>>t;
    rep(c,1,t){
        cin>>n;

        double r=0.0;
        if(n<N)r=H[n];
        else r=log(n+.5)+gama;

        printf("Case %d: %.10lf\n",c,r);
    }
    
    return 0;
}