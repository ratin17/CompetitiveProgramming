#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;

        int i=0,j=s.length()-1;
        for(;i<j;i++,j--){
            if(s[i]==s[j])break;
        }

        cout<<n-2*i<<endl;
    }
    
    return 0;
}
