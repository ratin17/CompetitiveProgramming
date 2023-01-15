
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){

    int q,max=INT_MIN,p,v,pos;
    vector <int>r;
    vector<int>::iterator it;
    cin>>q;
    while(q--){
        cin>>p;
        if(p==1){
            cin>>v;
            r.push_back(v);
        }
        else{
            sort(r.begin(), r.end(), greater<int>());
            cout<<r[0]<<endl;
            it = r.begin();
            r.erase(it);
        }
    }
    
    return 0;
}