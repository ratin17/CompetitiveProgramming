#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        int v;
        for(int i=0;i<n;i++){
            cin>>v;
            a.push_back(v);
        }
        sort(a.begin(), a.end(), greater<int>());
        bool p=false;
        bool e;
        if(a[0]%2==0)e=true;
        else e=false;
        for(int i=1;i<n;i++){
            if(a[i]%2==0){
                if(!e){
                    p=true;
                    //cout<<i<<endl;
                    break;
                }
                e=true;
            }
            else{
                if(e){
                    p=true;
                    //cout<<i<<endl;
                    break;
                }
                e=false;
            }
        }
        // int e=0,o=0;
        // for(int i=1;i<n;i++){
        //     if(a[i]%2==0)e++;
        //     else o++;
        //     if(e>0&&e>0){
        //         p=true;
        //         break;
        //     }
        // }
        if(p)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
