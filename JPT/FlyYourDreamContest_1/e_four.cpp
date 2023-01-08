#include<bits/stdc++.h>
using namespace std;


int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        bool z=false;
        long long px,pn,sx,sn,x=INT_MIN,y=INT_MAX;

        for(long long i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>x)x=a[i];
            if(a[i]<y)y=a[i];
            if(a[i]==0)z=true;

        }

        if(abs(x)>abs(y)){
            px=x*x;
            pn=y*y;
        }
        else{
            px=y*y;
            pn=x*x;
        }

        if((x*y)<pn)pn=x*y;

        if(z)pn=0;


        sx=x*2;

        sn=y*2;

        cout<<px<<" "<<pn<<" "<<sx<<" "<<sn<<endl;

    }
    return 0;
}