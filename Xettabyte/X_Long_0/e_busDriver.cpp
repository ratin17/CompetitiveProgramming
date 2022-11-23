#include<bits/stdtr1c++.h>
using namespace std;



int main(){
    int n,d,r;
    while(cin>>n>>d>>r){
        int j,t,ans=0,c;
        if(n==0&&d==0&&r==0)break;
        vector<int>morn;
        vector<int>ev;

        
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            morn.push_back(t);
        }
        for(int i=0;i<n;i++){
            int t;
            cin>>t;
            ev.push_back(t);
        }

        sort(morn.begin(),morn.end(),greater<int>());
        sort(ev.begin(),ev.end());

        for(int i=0;i<n;i++){
            c=((morn[i]+ev[i])-d);
            if(c>0)ans+=c;
        }
        cout<<ans*r<<endl;

    }
    return 0;
}
