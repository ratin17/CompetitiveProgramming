#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

void tb(){
    string a,b;
    cin>>a;
    cin>>b;

    int x=0,y=0;

    for(int i=0;i<5;i++){
        if(a[i]=='1')x++;
        if(b[i]=='1')y++;
    }

    if(x>y)cout<<"Argentina"<<endl;
    else if(x<y)cout<<"Brazil"<<endl;

    else tb();

}

int main(){
    
    ll a,b;
    cin>>a>>b;
    if(a>b)cout<<"Argentina"<<endl;
    else if(a<b)cout<<"Brazil"<<endl;
    else tb();
    return 0;
}