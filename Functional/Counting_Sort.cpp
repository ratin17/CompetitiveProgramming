#include <bits/stdc++.h>

using namespace std;

int main() {
    int n=8;
    //cout<<"Enter the size of the array";
    //cin>>n;
    int a[n]={7,2,9,2,7,4,5,1};
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
    int m=*max_element(a,a+n);
    int count[m+1]={0};
    for(int i=0;i<n;i++)count[a[i]]++;

    for(int i=0;i<=m;i++)cout<<count[i]<<" ";
    cout<<endl;

    for(int i=1;i<=m;i++)count[i]+=count[i-1];

    for(int i=0;i<=m;i++)cout<<count[i]<<" ";
    cout<<endl;

    int final[n];
    for(int i=n-1;i>=0;i--){
        int z=--count[a[i]];
        final[z]=a[i];
    }
    for(int i=0;i<n;i++)cout<<final[i]<<" ";
    cout<<endl;
    return 0;
}

