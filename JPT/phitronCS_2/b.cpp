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
        int a[n],s[n];

        cin>>a[0];
        s[0]=a[0];

        ra(i,1,n){
            cin>>a[i];
            s[i]=s[i-1]+a[i];
        }

        bool pos=false;

        if(s[n-1]-s[0]==0){
            cout<<0<<endl;
            pos=true;
        }

        else{
            for(int i=1;i<n;i++){
                if(s[i-1]==(s[n-1]-s[i])){
                    cout<<i<<endl;
                    pos=true;
                    break;
                }
            }
        }

        if(!pos)cout<<-1<<endl;
        
    }
    
    return 0;
}