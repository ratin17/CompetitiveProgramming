#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,t,j=0;
    cin>>t;
    while(t--){   
        cin>>n;
       ll sq=ceil(sqrt(n));
       ll r=sq*sq-n;
       ll x,y;
       if(r<sq){
           y=r+1;
           x=sq;
       }
       else
       {
           x=2*sq-r-1;
           y=sq;
       }
       if( sq & 1)swap(x,y);

       cout<<"Case "<<++j<<": "<<x<<" "<<y<<endl;

   }
   return 0;
    
    return 0;
}