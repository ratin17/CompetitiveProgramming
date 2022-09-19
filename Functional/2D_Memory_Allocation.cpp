#include <bits/stdc++.h>

using namespace std;

int main() {
    int m=70,n=65,p=0,q=0,base=1230,x=3,y=18,r=0,s=0,w=4;
    //cout<<"Enter Size of the 2D array:";
    //cin>>m>>n;
    //cout<<"Enter any Index( [0,0] --> ["<<m-1<<","<<n-1<<"] )and Address of that Index:";
    //cin>>p>>q>>a;
    //again:
    //cout<<endl<<"Enter any Index ([0,0] --> ["<<m-1<<","<<n-1<<"] ) Address of which you want to know:";
    //cin>>x>>y;

    r=base + w*(n*(x-p)+(y-q) );
    //cout<<endl<<"-------------------------------------------------------"<<endl;
    cout<<"In Row Major Ordering, address of ["<<x<<","<<y<<"]: "<<r<<endl;

    s=base + w*(m*(y-q)+(x-p) );
    cout<<"In Column Major Ordering, address of ["<<x<<","<<y<<"]: "<<s<<endl;
    //cout<<"-------------------------------------------------------------"<<endl<<endl;
    //goto again;
    return 0;
}
