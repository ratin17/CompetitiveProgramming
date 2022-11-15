#include<bits/stdc++.h>
using namespace std;

#define ll long long

int NOD(int n){
    int s=0;
    while(n>0){
        n=n/10;
        s++;
    }
    return s;
}

int pressNum(int n,int sum){
    if(n==1)return sum+1;

    if(NOD(n)==1 && n>1 ){
        sum++;
        n--;
        pressNum(n*1111,sum);
    }

    else{
        sum=sum+NOD(n);
        pressNum(n/10,sum);
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>b;
        a=pressNum(b,0);
        cout<<a<<endl;
    }

    
    return 0;
}