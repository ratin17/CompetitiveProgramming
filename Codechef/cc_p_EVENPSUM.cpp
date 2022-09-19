#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long t,a,b,ao,ae,bo,be;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a&1){
            ao=ceil((double)a/2.0);
            ae=a/2;
        }
        else{
            ao=a/2;
            ae=ceil((double)a/2.0);
        }

        if(b&1){
            bo=ceil((double)b/2.0);
            be=b/2;
        }
        else{
            bo=b/2;
            be=ceil((double)b/2.0);
        }
        //printf("%d : %d %d    %d : %d %d\n",a,ao,ae,b,bo,be);

        cout<<ao*bo+ae*be<<endl;;
    }
    return 0;
}
