#include<bits/stdc++.h>
using namespace std;

void LOM(char l,char m,char r,int i,int n);
void ROM(char l,char m,char r,int i,int n);


#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)

void LOM(char l,char m,char r,int i,int n){
    cout<<"."<<l<<"."<<m<<"...."<<r<<endl;
    cout<<".."<<l<<"....."<<r<<endl;
    cout<<"."<<m<<"."<<l<<"...."<<r<<endl;
    cout<<m<<"..."<<l<<"..."<<r<<endl;

    i++;
    if(i<n)ROM(m,l,r,i,n);
}

void ROM(char l,char m,char r,int i,int n){
    cout<<l<<"...."<<m<<"."<<r<<"."<<endl;
    cout<<l<<"....."<<r<<".."<<endl;
    cout<<l<<"...."<<r<<"."<<m<<"."<<endl;
    cout<<l<<"..."<<r<<"..."<<m<<endl;

    i++;
    if(i<n)LOM(l,r,m,i,n);
}


int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string c;
    cin>>c;

    char l=c[0],m=c[1],r=c[2];

    cout<<l<<"..."<<m<<"..."<<r<<endl;

    if(s=="left-over-middle")LOM(l,m,r,0,n);
    else ROM(l,m,r,0,n);

    return 0;
}