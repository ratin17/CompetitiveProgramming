#include<bits/stdc++.h>
using namespace std;

void toggle(int *x){
    if(*x==0)*x=1;
    else *x=0;
}

int main(){
    int n=3;
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=1;
        }
    }

    int b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[i][j]&1){
                toggle(&a[i][j]);
                if((i-1)>-1)toggle(&a[i-1][j]);
                if((i+1)<n)toggle(&a[i+1][j]);
                if((j-1)>-1)toggle(&a[i][j-1]);
                if((j+1)<n)toggle(&a[i][j+1]);
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}