#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ll x,y,z;
    cin>>x>>y>>z;

    if((x>0 && y<0)||(x<0 && y>0)){
        cout<<abs(x)<<endl;
    }
    else{
        ll a=abs(x);
        ll b=abs(y);
        ll c=abs(z);

        if(a<b){
            cout<<abs(x)<<endl;
        }
        else{
            if((y>0 && z<0)||(y<0 && z>0)){
                cout<<abs(x)+abs(z)*2<<endl;
            }
            else{
                if(c<b){
                    cout<<abs(x)<<endl;
                }
                else{
                    cout<<-1<<endl;
                }
            }
        }
    }
    
    return 0;
}