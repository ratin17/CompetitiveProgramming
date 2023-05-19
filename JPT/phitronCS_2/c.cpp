#include <bits/stdc++.h>
using namespace std;


long long sumTo(long long n){
    return (n * (n + 1)) / 2;
}

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    long t;
    cin>>t;
    while(t--){
        long long l,r,a,b,z;
        cin>>l>>r;

        b=max(l,r);
        a=min(l,r);
        z=sumTo(b)-sumTo(a-1);
        cout<<z<<endl;
    }
    
    return 0;
}