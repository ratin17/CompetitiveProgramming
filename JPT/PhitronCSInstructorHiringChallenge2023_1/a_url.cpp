#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

bool isAlph(char c){
    int n=(int)c;
    if((n>64&&n<91)||(n>96&&n<123))return true;
    else return false;
}

int main(){
    string tmp="https://www.com",inp;
    cin>>inp;
    int l=inp.length(),m=tmp.length();

    rep(i,0,11){
        if(inp[i]!=tmp[i]){
            cout<<"Invalid";
            return 0;
        }
    }

    for(int i=l-1,j=m-1,k=0;k<4;i--,j--,k++){
        if(inp[i]!=tmp[j]){
            cout<<"Invalid";
            return 0;
        }
    }

    vector<char>dom;

    ra(i,12,l-4){
        int a=(int)inp[i];
        if(!isAlph(inp[i])){
            cout<<"Invalid";
            return 0;
        }
        dom.push_back(inp[i]);
    }

    if(dom.size()==0){
        cout<<"Invalid";
        return 0;
    }

    cout<<"Protocol: https://"<<endl;
    cout<<"Subdomain: www"<<endl;

    cout<<"Domain: ";
    for(auto a:dom)cout<<a;
    cout<<endl;

    cout<<"TLD: com"<<endl;



    return 0;
}