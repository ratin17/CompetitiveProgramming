#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    long t,a;
    cin>>t;
    for(a=1;a<=t;a++){
        long i,j,n,r=0,x;
        bool abs=false;
        cin>>n;
        vector<long> m;
        vector<long> p;
        vector<long> ir;
        for(i=0;i<n;i++){
            cin>>x;
            m.push_back(x);
        }
        for(i=0;i<n;i++){
            cin>>x;
            p.push_back(x);
        }

        for(i=1;i<=n;i++){
            abs=false;
            for(j=0;j<n;j++){
                if(i==p[j]){
                   abs=true;
                    break;
                }
            }
            if(!abs)ir.push_back(i);
        }

        for(i=0;i<ir.size();i++){

        }

        cout<<"Case #"<<a<<": "<<r<<endl;;

    }
    return 0;
}



