#include<Stdio.h>
#include <string.h>
#define max(i,j) i > j ? i : j

void print(char **y) {
    int i;
    char *x=*y;
    *(x+4)=x[3];
    x+=strlen(x);
    for(i=0;i<=5;i++) {
            printf("%s\n",x);
       --x;
    }

}

int main()
{
// printf("%d ", max(100 && 0,1));
int i;
char *y,a[]="Apple";
y=a;
print(&y);
}
