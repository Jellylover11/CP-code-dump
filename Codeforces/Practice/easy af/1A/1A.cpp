#include<stdio.h>

int main()
{
    long long a,m,n,k;
    scanf("%I64d %I64d %I64d",&m,&n,&a);
    k=((m+a-1)/a)*((n+a-1)/a);
    printf("%I64d",k);

    return 0;
}
