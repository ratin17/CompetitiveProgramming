#include<bits/stdtr1c++.h>
using namespace std;


int main(){
   int  i, j, m, n;
    while(cin>>n>>m){
        int a[n];
        int l, r; l = r = 0;
        for(i = 1; i <= n; i++){
            cin>>a[i];
            l = max(l, a[i]);
            r += a[i];
        }
        int k, now, md;
        while(l <= r)
        {
            k = 1; now = 0;
            md = (l + r)/2;
            for(j = 1; j <= n; j++)
            {
                if(now + a[j] > md) k++, now = a[j];
                else now += a[j];
            }
            if(k <= m) r = md - 1;
            else l = md + 1;
        }
        cout<<l<<endl;
    }
    return 0;
}