#include<bits/stdc++.h>
using namespace std;

#define ll long long

void singleDigitPrint(ll n);
void doubleDigitPrint(ll n);
void bangla(ll n);



void singleDigitPrint(ll n){
    if(n==1)cout<<" one";
    else if(n==2)cout<<" two";
    else if(n==3)cout<<" three";
    else if(n==4)cout<<" four";
    else if(n==5)cout<<" five";
    else if(n==6)cout<<" six";
    else if(n==7)cout<<" seven";
    else if(n==8)cout<<" eight";
    else if(n==9)cout<<" nine";
}

void doubleDigitPrint(ll n){
    ll b=n%10;
    ll a=n/10;

    if(a==0)singleDigitPrint(b);
    else if(a==1){
        if(b==0)cout<<"ten";
        if(b==1)cout<<"eleven";
        if(b==2)cout<<"twelve";
        if(b==3)cout<<"thirteen";
        if(b==4)cout<<"fourteen";
        if(b==5)cout<<"fifteen";
        if(b==6)cout<<"sixteen";
        if(b==7)cout<<"seventeen";
        if(b==8)cout<<"eighteen";
        if(b==9)cout<<"nineteen";
    }
    else if(a==2){
        cout<<"twenty";singleDigitPrint(b);
    }
    else if(a==3){
        cout<<"thirty";singleDigitPrint(b);
    }
    else if(a==4){
        cout<<"fourty";singleDigitPrint(b);
    }
    else if(a==5){
        cout<<"fifty";singleDigitPrint(b);
    }
    else if(a==6){
        cout<<"sixty";singleDigitPrint(b);
    }
    else if(a==7){
        cout<<"seventy";singleDigitPrint(b);
    }
    else if(a==8){
        cout<<"eighty";singleDigitPrint(b);
    }
    else if(a==9){
        cout<<"ninety";singleDigitPrint(b);
    }
    
}

void bangla(ll n){

        ll kuti,lakh,hajar,shata;

        kuti=n/10000000;
        if(kuti>0){
            n=n-(kuti*10000000);
            if((kuti/100)>0){
                bangla(kuti);
                (kuti>1)?cout<<" kutis":cout<<" kuti";
            }
            else{
                cout<<" ";
                doubleDigitPrint(kuti);
                (kuti>1)?cout<<" kutis":cout<<" kuti";
            } 
            
        }
        

        lakh=n/100000;
        if(lakh>0){
            n=n-(lakh*100000);
            cout<<" ";
            doubleDigitPrint(lakh);
            (lakh>1)?cout<<" lakhs":cout<<" lakh";
        }

        hajar=n/1000;
        if(hajar>0){
            n=n-(hajar*1000);
            cout<<" ";
            doubleDigitPrint(hajar);
            (hajar>1)?cout<<" thousands":cout<<" thousand";
        }

        shata=n/100;
        if(shata>0){
            n=n-(shata*100);
            cout<<" ";
            doubleDigitPrint(shata);
            (shata>1)?cout<<" hundreds":cout<<" hundred";
        }

        cout<<" ";
        doubleDigitPrint(n);
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