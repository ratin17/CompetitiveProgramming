#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    long t,a;
    cin>>t;
    for(a=1;a<=t;a++){
        long n,i,j,r=1,x;
        cin>>n;
        vector<long> s;
        for(i=0;i<n;i++){
            cin>>x;
            s.push_back(x);
        }
        sort(s.begin(), s.end());
        for(i=0;i<s.size();i++){
            //cout<<s[i]<<" ";
            if(s[i]>=r)r++;
        }
        cout<<"Case #"<<a<<": "<<r-1<<endl;;
        //cout<<r-1<<endl;
    }
    return 0;
}


