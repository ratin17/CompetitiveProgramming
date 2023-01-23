#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    string a="Alice",b="Bob",c="Cindy";
    bool A=true,B=true,C=true;

    string s;
    cin>>s;
    ll l=s.length();

    if(l!=3 && l!=5){
        cout<<"SOMETHING'S WRONG"<<endl;
        return 0;
    }

    ra(i,0,l){
        if(s[i]!=a[i] && s[i]!='.')A=false;
        if(s[i]!=c[i] && s[i]!='.')C=false;

        if(s[i]!=b[i] && s[i]!='.')B=false;
    }

    if(l!=3)B=false;
    if(l!=5)A=false;
    if(l!=5)C=false;


    if(A&&B)cout<<"CAN'T TELL"<<endl;

    else if(A)cout<<"Alice"<<endl;

    else if(C)cout<<"Cindy"<<endl;

    else if(B)cout<<"Bob"<<endl;

    else cout<<"SOMETHING'S WRONG"<<endl;

    return 0;
}