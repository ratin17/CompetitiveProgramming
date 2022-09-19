#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long t,a;
    cin>>t;
    for(a=1;a<=t;a++){
        long p[3][4],i,j,x=1000000,s[4],r[4],rs=0;

        for(i=0;i<4;i++)s[i]=10000000;
        for(i=0;i<4;i++)r[i]=0;

        for(i=0;i<3;i++){
            for(j=0;j<4;j++){
                cin>>p[i][j];
            }
        }
        for(i=0;i<3;i++){
            if(p[i][0]<s[0])s[0]=p[i][0];
        }
        for(i=0;i<3;i++){
            if(p[i][1]<s[1])s[1]=p[i][1];
        }
        for(i=0;i<3;i++){
            if(p[i][2]<s[2])s[2]=p[i][2];
        }
        for(i=0;i<3;i++){
            if(p[i][3]<s[3])s[3]=p[i][3];
        }
        //cout<<"The smallest: "<<c<<" "<<m<<" "<<y<<" "<<k<<" "<<endl;
        cout<<"Case #"<<a<<": ";
        if((s[0]+s[1]+s[2]+s[3])>=x){
            for(i=0;i<4;i++){
                if((rs+s[i])<x){
                    r[i]=s[i];
                    rs+=s[i];
                }
                else{
                    r[i]=x-rs;
                    break;
                }
            }
            cout<<r[0]<<" "<<r[1]<<" "<<r[2]<<" "<<r[3]<<endl;
        }
        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}

