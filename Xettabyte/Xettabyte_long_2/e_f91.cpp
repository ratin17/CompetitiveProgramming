#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll f91(ll n){
    if(n>=101)return n-10;

    f91(f91(n+11));
}

int main(){
    ll n;
    while(cin>>n){
        if(n==0)break;


        cout<<"f91("<<n<<") = "<<f91(n)<<endl;
    }
    
    return 0;
}