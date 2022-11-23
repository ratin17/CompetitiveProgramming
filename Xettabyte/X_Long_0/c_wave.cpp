#include<bits/stdtr1c++.h>
using namespace std;


void printWave(int a,int b){
    for(int j=0;j<b;j++){
        for(int i=1;i<=a;i++){
            for(int k=1;k<=i;k++){
                cout<<i;
            }
            cout<<endl;


        }
        for(int i=a-1;i>=1;i--){
            for(int k=i;k>=1;k--){
                cout<<i;
            }
            cout<<endl;
        }
        if(j!=b-1){
             cout<<endl;
        }
    }
}

int main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        printWave(a,b);
        if(i!=t-1){
             cout<<endl;
        }
    }
    return 0;
}