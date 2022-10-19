#include<bits/stdtr1c++.h>
using namespace std;


int main(){
    int n;
    string s;
    cin>>n>>s;
    int a[150];
    for(int i=0,j=97;i<s.length();i++,j++){
        a[j]=(int)s[i];
        a[j-32]=(int)s[i]-32;
    }
    while(n--){
        string m;
        cin>>m;
        for(int i=0;i<m.length();i++){
            if((m[i]>64&&m[i]<91) || (m[i]>96&&m[i]<123)){
            cout<<(char)(a[(int)m[i]]);
            }
            else if(m[i]=='_')cout<<" ";
            else cout<<m[i];
        }
        cout<<endl;

    }
    return 0;
}