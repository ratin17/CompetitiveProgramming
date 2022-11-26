#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    string s;
    while(cin>>s){
        int i=0;
        int j=s.length()-1;
        int c=0;

        for(;i<j;i++,j--){
            if(s[i]!=s[j])c++;
        }

        cout<<c<<endl;


    }
    
    return 0;
}