#include<bits/stdtr1c++.h>
using namespace std;

int bSearch(vector<int>q,int k){
    int l=0,h=q.size(),mid,idx=-1;

    while(l<=h){
        mid=(l+h)/2;

        if(q[mid]==k){
            idx=mid;
            h=mid-1;
        }
        else if(q[mid]<k)l=mid+1;
        else h=mid-1;
    }
    return idx;
}

int main(){

    int n,q,c=1;
    while(cin>>n>>q){
        if(n==0&&q==0)break;

        cout<<"CASE# "<<c<<":"<<endl;
        c++;
        int t,s;
        vector<int>v;
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end());

        while(q--){
            cin>>s;
            
            int idx=bSearch(v,s);
            if(idx==-1)cout<<s<<" not found"<<endl;
            else cout<<s<<" found at "<<idx+1<<endl;
        }
    }
    
    return 0;
}