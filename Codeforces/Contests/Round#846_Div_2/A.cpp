#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        vector<ll>ev;
        vector<ll>evi;
        vector<ll>od;
        vector<ll>odi;
        ra(p,0,n){
            cin>>a[p];
            if(a[p]%2==0){
                ev.push_back(a[p]);
                evi.push_back(p);
            }
            else{
                od.push_back(a[p]);
                odi.push_back(p);
            }
        }

        if(od.size()>=3){
            cout<<"YES"<<endl;
            cout<<odi[0]+1<<" "<<odi[1]+1<<" "<<odi[2]+1<<endl;
        }
        else if(od.size()>=1 && ev.size()>=2){
            cout<<"YES"<<endl;
            cout<<odi[0]+1<<" "<<evi[0]+1<<" "<<evi[1]+1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}