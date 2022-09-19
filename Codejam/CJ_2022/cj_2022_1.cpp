#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a;
    cin>>t;
    for(a=1;a<=t;a++){
        int r,c,i,j;
        cin>>r>>c;
        cout<<"Case #"<<a<<":"<<endl;
        r=2*r+1;
        c=2*c+1;
        for(i=1;i<=r;i++){
            if(i%2==0){
                for(j=1;j<=c;j++){
                    if(i==2&j==1)cout<<".";
                    else if(j%2==0)cout<<".";
                    else cout<<"|";
                }
            }
            else{
                for(j=1;j<=c;j++){
                    if((i==1&j==1)||(i==1&j==2))cout<<".";
                    else if(j%2==0)cout<<"-";
                    else cout<<"+";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
