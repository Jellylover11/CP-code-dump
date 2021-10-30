#include<string.h>
#include<stdio.h>
int main()
{
    char a[]="qwertyuiop[]",b[]="asdfghjkl;'",c[]="zxcvbnm,./",d[100],x;
    int i,j,n;
    scanf("%c",&x);
    scanf(" %s",d);
    if(x=='R')
    {
        for(i=0;i<strlen(d);i++)
        {
            for(j=0;j<12;j++)
            {
                if(d[i]==a[j])
                    d[i]=a[j-1];
                else if(d[i]==b[j])
                    d[i]=b[j-1];
                else if(d[i]==c[j])
                    d[i]=c[j-1];
            }
        }
    }
    else if(x=='L')
    {
        for(i=0;i<strlen(d);i++)
        {
            for(j=0;j<12;j++)
            {
                if(d[i]==a[j])
                    d[i]=a[j+1];
                else if(d[i]==b[j])
                    d[i]=b[j+1];
                else if(d[i]==c[j])
                    d[i]=c[j+1];
            }
        }
    }
    printf("%s",d);

}
