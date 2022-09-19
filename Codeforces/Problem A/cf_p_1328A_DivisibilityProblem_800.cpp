#include<iostream>
using namespace std;
int main(){
    int t,d,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        d=a%b;
        if(d==0)cout<<d<<endl;
        else cout<<b-d<<endl;
    }
    return 0;
}
