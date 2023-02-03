#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x=0,y=0;
        string s,a="NO";
        cin>>n;
        cin>>s;
        for(ll i=0;i<n;i++){
            
            
            if(s[i]=='U')y++;
            else if(s[i]=='R')x++;
            else if(s[i]=='D')y--;
            else if(s[i]=='L')x--;


            if(x==1&&y==1)a="YES";


        }

        cout<<a<<endl;

    }
    
    return 0;
}
