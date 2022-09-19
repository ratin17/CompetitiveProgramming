#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll n;
    cin>>n;
    if(n&1)cout<<-1*((n/2)+1)<<endl;
    else cout<<n/2<<endl;
    return 0;
}



