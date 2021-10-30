#include <stdio.h>
int main()
{
  int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
int i,k;
for ( i = 0 ; i <= 5 ; i++ )
{
    k=*(num[i]);
printf ( "\naddress = %u ", &num[i] ) ;
printf ( "element = %d %d ", num[i], *( num + i ) ) ;
printf ( "%d %d", k, i[num] ) ;
}
}
