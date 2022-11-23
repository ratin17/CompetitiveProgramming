#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    
    long long n,t,q,i,j;
    cin>>n;
    long long a[n+1];

    a[0]=0;
    
    for(long long i=1;i<n+1;i++){
        cin>>t;
        a[i]=a[i-1]+t;
    }

    cin>>q;
    while(q--){
        cin>>i>>j;
        cout<<a[j+1]-a[i]<<endl;
    }

    return 0;
}