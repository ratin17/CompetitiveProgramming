#include<bits/stdc++.h>
using namespace std;

#define ll long long

void bangla(ll n){

        ll kuti,lakh,hajar,shata,khuchra;


        

        kuti=n/10000000;
        if(kuti>0){
            n=n-(kuti*10000000);
            if((kuti/100)>0){
                bangla(kuti);
                cout<<" kuti";
            }
            else cout<<" "<<kuti<<" kuti";
        }
        

        lakh=n/100000;
        if(lakh>0){
            n=n-(lakh*100000);
            cout<<" "<<lakh<<" lakh";
        }

        hajar=n/1000;
        if(hajar>0){
            n=n-(hajar*1000);
            cout<<" "<<hajar<<" hajar";
        }

        shata=n/100;
        if(shata>0){
            n=n-(shata*100);
            cout<<" "<<shata<<" shata";
        }

        khuchra=n;
        cout<<" "<<n;
}

int main(){
    ll n,t=1;
    while(cin>>n){
        if(n<0)break;

        cout<<t<<".";
        
        bangla(n);

        cout<<endl;

        t++;

    }
    return 0;
}