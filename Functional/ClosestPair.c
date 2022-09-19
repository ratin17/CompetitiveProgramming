#include <stdio.h>
#include <stdbool.h>

int main()
{
    long t;
    scanf("%d",&t);
    while(t--)
    {
        long n;
        scanf("%d",&n);
        long a[n];
        for(long i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(long i=0; i<n-1; i++)
        {
            for(long j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    long temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }

        long d=99999999;
        for(long i=0,j=n-1;i<j;)
        {
            //printf("i:%d j:%d\n",i,j);
            if(a[j]-a[i]<d)d=a[j]-a[i];

            if(a[j]-a[i+1]<a[j-1]-a[i])i++;
            else j--;
        }
        printf("%d\n",d);
    }
        return 0;
    }
