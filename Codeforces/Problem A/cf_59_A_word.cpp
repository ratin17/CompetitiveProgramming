#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     char d;
//     int u=0,l=0;
//     for(int i=0;i<s.length();i++){
//         if((int)s[i]>64&&(int)s[i]<91)u++;
//         else l++;
//     }
//     if(u>l)d='u';
//     else d='l';
//     for(int i=0;i<s.length();i++){
//         if(d=='u')s[i]=toupper(s[i]);
//         else s[i]=tolower(s[i]);
//     }

//     cout<<s<<endl;

//     return 0;
// }

int main(){
    string s;
    cin>>s;
    int d;
    int u=0,l=0;
    for(int i=0;i<s.length();i++){
        if((int)s[i]>64&&(int)s[i]<91)u++;
        else l++;
    }
    if(u>l)d=-32;
    else d=32;
    for(int i=0;i<s.length();i++){
        s[i]= char(int(s[i]+d));
    }

    cout<<s<<endl;

    return 0;
}