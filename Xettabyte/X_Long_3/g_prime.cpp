#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,s,e) for(ll i=s;i<=e;i++)
#define ra(i,s,e) for(ll i=s;i<e;i++)


bool prime(int n){
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

// void setPrime(ll h,bool isPrime[]){
//     isPrime[0]=isPrime[1]=false;
//     for(ll i=4;i<=h;i+=2)isPrime[i]=false;

//     for(ll i=3;i*i<=h;i+=2){
//         if(isPrime[i]){
//             for(ll j=i*i;j<=h;j+=2*i){
//                 isPrime[j]=false;
//             }
//         }
//     }
// }

int main(){
    // bool isPrime[200];
    // memset(isPrime,true,sizeof(isPrime)+1);
    // setPrime(200,isPrime);

    // ra(i,0,2001){
    //     cout<<i<<" "<<isPrime[i]<<endl;
    // }


    ll t;
    cin>>t;

    rep(c,1,t){
        string s;
        vector<int>v;
        cin>>s;

        ll freq[150];
        memset(freq,0,sizeof(freq));
        

        ra(i,0,s.length()){
            freq[(int)s[i]]++;
        }

        rep(i,47,149){
            if(prime(freq[i]))v.push_back(i);
        }
        sort(v.begin(), v.end());

        cout<<"Case "<<c<<": ";

        if(v.size()==0){
            cout<<"empty"<<endl;
            continue;
        }

        ra(i,0,v.size()){
            cout<<(char)v[i];
        }
        cout<<endl;
    }
    
    return 0;
}