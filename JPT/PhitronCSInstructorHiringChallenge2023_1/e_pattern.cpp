#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;char c;
    cin>>n>>c;
    

    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            cout<<" ";
        }
        for(int j=0;j<n;j++){
            cout<<c;
        }
        cout<<endl;
    }
    
    return 0;
}