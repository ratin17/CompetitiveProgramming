
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

int main(){
    int t;
    cin>>t;
    while(t--){
        int w,d,h;
        cin>>w>>d>>h;
        int a,b,f,g;
        cin>>a>>b>>f>>g;

        int a1,a2,a3,a4;

        a1=g+h+b+abs(a-f);
        a2=(d-g)+h+(d-b)+abs(a-f);
        a3=f+h+a+abs(b-g);
        a4=(w-f)+h+(w-a)+abs(b-g);

        cout<<min({a1,a2,a3,a4})<<endl;

    }
    
    return 0;
}