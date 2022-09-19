#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],r[n][2];

        for(int z=0;z<n;z++){
            scanf("%d",&a[z]);
        }
        for(int y=0;y<n;y++){
            for(int z=0;z<2;z++){
                r[y][z]=0;
            }
        }

        int i,j,k=0;
        for(i=0;i<n;i++){
            int f=0;
            for(j=0;j<k;j++){
                if(a[i]==r[j][0]){
                    f=1;
                    break;
                }
            }
            if(f){
               r[j][1]++;
            }
            else{
                r[j][0]=a[i];
                r[j][1]++;
                k++;
            }
        }
        int g=0;
        for(int m=0;m<k;m++){
            //printf("%d : %d\n",r[m][0],r[m][1]);
            if(r[m][1]>2){
                printf("%d",r[m][0]);
                g=1;
                break;
            }
        }
        if(!g)printf("-1");
        printf("\n");
    }
    return 0;
}
