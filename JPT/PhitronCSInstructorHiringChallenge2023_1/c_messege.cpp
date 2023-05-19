#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    string s,t;

    while(cin>>s>>t){
        if(s.length()<t.length()){
            cout<<"Impossible"<<endl;
            continue;
        }
        bool pos=false;
        for(int i=0,j=0;i<s.length();i++){
            if(s[i]==t[j]){
                j++;
                if(j==t.length()){
                    pos=true;
                    break;
                }
            }
        }
        if(pos)cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }

    return 0;
}