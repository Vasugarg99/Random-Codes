#include<stdio.h>
int main()
{
    long long int n,arr[n];int i,a,t1,t2,t3,t4,t5;t1=t2=t3=t4=t5=0;
    scanf("%lld\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    if(n>=5)
    {
        for(i=0;i<n;i++)
        {
            if((arr[i]==1)?t1++:a=0||(arr[i]==2)?t2++:a=0||(arr[i]==3)?t3++:a=0||(arr[i]==4)?t4++:a=0||(arr[i]==5)?t5++:a=0)
            {
                printf("%d%d%d%d%d",t1,t2,t3,t4,t5);
            }
        }
    }


}
