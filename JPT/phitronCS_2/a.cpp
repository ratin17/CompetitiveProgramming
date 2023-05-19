#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            if(i%2==0)cout<<">";
            else cout<<"<";
        }
        cout<<endl;
    }

    for(int i=n-2,k=1;i>=0;i--,k++){
        for(int j=0;j<k;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            if(i%2==0)cout<<">";
            else cout<<"<";
        }
        cout<<endl;
    }

    
    return 0;
}