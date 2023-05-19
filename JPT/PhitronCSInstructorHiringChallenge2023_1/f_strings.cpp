#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

bool isOperator(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/')
        return true;
    else 
        return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s,a="";
    int d,n;
    cin>>s;

    for(int i=0;i<s.length();i++){
        d=(int)s[i];

        if(d>=48&&d<=57)n=d-48;

        else if(isOperator(s[i])){
            a=a+s[i];
        }
        else{
            string t;
            for(;!isOperator(s[i])&&i<s.length();i++){
                t=t+s[i];
            }
            i--;
            //cout<<t<<endl;
            for(int j=0;j<n;j++){
                a=a+t;
            }
        }
    }
    cout<<a<<endl;
    
    return 0;
}