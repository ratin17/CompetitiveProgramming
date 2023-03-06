#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],s[n],w[n];
        cin>>a[0];
        s[0]=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            s[i]=a[i]+a[i-1];
        }
        w[0]=s[k-1];
        int i;
        for(int i=1;i<n-k;i++){
            w[i]=s[i+k-1]-s[i-1];
        }
        for(;i<n;i++){
            w[i]=s[n]-s[i-1];
        }
        int max=0;
        for(int j=0;j<n;j++){
            if(w[i]>max)max=w[i];
        }
        cout<<max<<endl;
    }
    return 0;
}
