#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,q,i,j,t;
        cin>>n>>q;
        vector<long>a;
        vector<long>b;

        for(i=0;i<n;i++){
            cin>>t;
            a.push_back(t);
        }

        for(i=0;i<q;i++){
            cin>>t;
            b.push_back(t);
        }

        sort(a.begin(), a.end(),greater<int>());

        for(i=0;i<q;i++){
            long x=b[i],p=0;
            for(j=0;j<n;j++){
                p=p+a[j];
                if(p>=x)break;
            }
            if(p>=x)cout<<j+1<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}
