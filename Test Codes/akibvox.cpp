#include<stdio.h>
int main()
{
    int i, j, lens;
    char n;
    char a[]= "qwertyuiopasdfghjkl;zxcvbnm,./";
    char s[120];
    scanf("%c", &n);
    scanf("%s", s);
    lens= strlen(s);
    if(n == 'R')
    {
        for(i=0; i<lens; i++)
        {
            for(j=0; j<30; j++)
            {
                if(s[i]==a[j])
                {
                    s[i]=a[j-1];
                    break;
                }
            }
        }
        printf("%s", s);
    }
    else if(n == 'L')
    {
        for(i=0; i<lens; i++)
        {
            for(j=0; j<30; j++)
            {
                if(s[i]==a[j])
                {
                    s[i]=a[j+1];
                    break;
                }
            }
        }
        printf("%s", s);
    }
}
