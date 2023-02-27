#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,esc,m,a,s1,s2;
        cin>>n>>m;
        set<int>s;
        int mem[n+1];
        for(int i=1,j=n;i<=m;i++){
            cin>>a;
            s1=s.size();
            s.insert(a);
            s2=s.size();
            if(s2>s1){
                mem[j]=i;
                j--;
            }
        }
        esc=n-s.size();
        for(int i=1;i<=n;i++){
            if(i<=esc)cout<<"-1 ";
            else cout<<mem[i]<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}
