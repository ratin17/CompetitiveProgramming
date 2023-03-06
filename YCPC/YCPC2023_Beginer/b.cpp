#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main(){
    char s[1000];
    gets(s);
    int w=strlen(s);
    //cout<<w<<endl;
    bool f=true;
    for(int i=0;i<w;i++){
        //cout<<i<<endl;
        if(s[i]=='R'){
            //cout<<"R found"<<endl;
            if(s[i+1]=='a'){
                //cout<<"a found"<<endl;
                if(s[i+2]=='t'){
                    if(s[i+3]=='u'){
                        if(s[i+4]=='l'){
                            cout<<"YES"<<endl;
                            f=false;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(f)cout<<"NO"<<endl;


    
    return 0;
}
