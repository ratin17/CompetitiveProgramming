
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int cnt=0;
        //int ans =0;
        for(int i=0;i<s.size();i++)
        {
            if (s[i] == '<')
            {
                st.push('<');
            }
            else if (!st.empty())
            {
                st.pop();
                if(st.empty()) cnt = i+1;
            }
            else break;
        }
        cout << cnt << endl;
    }

    return 0;
}




// #include<bits/stdtr1c++.h>
// using namespace std;

// int main(){
    
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int o=0,c=0,r=0,a=0;
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='<')o++;
//             else{
//                 c++;
//                 if(c>o)break;
//                 else if(c==o)a=r+2;
//                 else r+=2;
//             }
//         }
//         cout<<a<<endl;
//         }
//     return 0;
// }