
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i==1)for(int j=1;j<=n;j++)printf("%d",j);
        else if(i==n&&i!=1)for(int j=1;j<=n;j++)printf("%d",i);
        else{
            printf("%d",i);
            for(int j=1;j<=n-2;j++)printf(" ");
            printf("%d",n);
        }

        printf("\n");
    }

    return 0;
}