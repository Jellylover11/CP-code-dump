#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int len, i, t, k=1;
    char n[210];
    long long sum, b;
    scanf("%d", &t);
    while(t--) {
      scanf("%s%lld", n, &b);
      len=strlen(n);
      sum=0;
      if(b<0)
         b= -b;
      for(i=0; i<len; i++) {
            if(n[i]=='-') continue;
            sum=sum+(n[i]-'0');
            if(sum>=b)
                sum=sum%b;
            if(sum<b)
                sum=sum*10;
        }
        if(sum==0)     printf("Case %d: divisible\n", k++);
        else printf("Case %d: not divisible\n", k++);
    }
    return 0;
}
