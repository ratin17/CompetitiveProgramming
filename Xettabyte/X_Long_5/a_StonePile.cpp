
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

ll bruteForce(ll stones[],ll N) {
       
        int LIMIT = 1 << N-1;
       int diff = INT_MAX;
       
       for (ll i=0; i<=LIMIT; i++) {
           ll sum1=0, sum2=0;
           ll k=i;
           for (int j=0; j<N; j++) {
               if ((k & 0x1) == 0) sum1+=stones[j];
               else sum2+=stones[j];
               k = k>>1;
           }
           ll d = (sum1>=sum2) ? sum1-sum2 : sum2-sum1;
           if (d<diff) diff = d;
       }
       return diff;
   }

int main(){

    ll n;
    cin>>n;

    ll stones[n];

    ra(i,0,n)cin>>stones[i];

    cout<<bruteForce(stones,n)<<endl;

    return 0;
}