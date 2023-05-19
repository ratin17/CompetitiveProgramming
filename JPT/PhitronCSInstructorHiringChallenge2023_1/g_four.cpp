#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mx=INT_MIN,mn=INT_MAX,t,mxp,mnp,mxs,mns;
        ra(i,0,n){
            cin>>t;
            if(t>mx)mx=t;
            if(t<mn)mn=t;
        }

        int MX=max({abs(mx),abs(mn)});
        int MN=min(abs(mx),abs(mn));

        mxp=MX*MX;
        mxs=mx*2;
        mns=mn*2;

        if((mx>=0&&mn>=0)||(mn<0&&mx<0))mnp=MN*MN;
        else mnp=mn*mx;

        printf("%d %d %d %d\n",mxp,mnp,mxs,mns);
    }

    
    return 0;
}