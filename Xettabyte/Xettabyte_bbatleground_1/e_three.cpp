#include<bits/stdc++.h>

using namespace std;
#define ll long long


int main(){
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]+a[1]>=a[2]){
  	    cout<<a[2]<<endl;
    }
    else{
  	    cout<<"-1"<<endl;
    }
    return 0;
}