#include<bits/stdc++.h>
using namespace std;

bool isPossible(int p,int m){
    if(m==1)return true;
    if(m==0)return false;
    

    isPossible(p,p%m);

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int p,m;
        cin>>p>>m;
        if(isPossible(p,m))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}