#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long n,d,i,x,a,b;
        cin>>n>>d;
        i=n;
        vector<int> r;
        vector<int> s;
        while(i--){
            cin>>x;
            if(x>=80||x<=9)r.push_back(x);
            else s.push_back(x);
        }
        a=r.size();
        b=n-a;
        cout<<ceil((double)a/(double)d)+ceil((double)b/(double)d)<<endl;
    }
    return 0;
}


