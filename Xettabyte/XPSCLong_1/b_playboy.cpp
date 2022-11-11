#include<bits/stdtr1c++.h>
using namespace std;

int lowerBound(vector<int>q,int k){
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
    return l;
}

int upperBound(vector<int>q,int k){
    int l=0,h=q.size(),mid,idx=-1;

    while(l<=h){
        mid=(l+h)/2;

        if(q[mid]==k){
            idx=mid;
            l=mid+1;
        }
        else if(q[mid]<k)l=mid+1;
        else h=mid-1;
    }
    return h;
}

int main(){
    int n,t;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    int q;
    cin>>q;
    while(q--){
        int h;
        cin>>h;
        
        int s=lowerBound(a,h)-1;
        int g=upperBound(a,h)+1;
        //cout<<"s g : "<<s<<" "<<g<<endl;
        if(s<0 || s>n-1)cout<<"X ";
        else cout<<a[s]<<" ";
        if(g<0 || g>n-1)cout<<"X"<<endl;
        else cout<<a[g]<<endl;

    }
    
    return 0;
}