#include<bits/stdtr1c++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int q;
    cin>>q;
    while(q--){
        int s=INT_MIN,h,g=INT_MAX;
        cin>>h;
        int i;
        for(i=0;i<n;i++){
            if(a[i]>h){
                g=a[i];
                break;
            }
        }
        i--;
        for(;i>-1;i--){
            if(a[i]<h){
                s=a[i];
                break;
            }
        }   

        if(s==INT_MIN)cout<<"X ";
        else cout<<s<<" ";
        if(g==INT_MAX)cout<<"X"<<endl;
        else cout<<g<<endl;

    }
    
    return 0;
}