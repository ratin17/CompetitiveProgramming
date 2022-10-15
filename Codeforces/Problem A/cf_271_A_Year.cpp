#include<bits/stdc++.h>
using namespace std;

bool isDistinct(int y){
    int a=y%10;
    y/=10;
    int b=y%10;
    y/=10;
    int c=y%10;
    y/=10;
    int d=y%10;
    
    if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)return true;
    else return false;

}

int main(){
    int year;
    cin>>year;
    for(int i=year+1;;i++){
        if(isDistinct(i)){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}