#include<stdio.h>
/* write a recrusion function to print first N natural numbers
  in reverse order ?
*/
void natural(int n)
{
    if(n>=1)
 {

      printf("%d\n",n);
       natural(n-1);
 }
}
int main()
{
    int n;
    printf("enter is the n");
    scanf("%d",&n);
    natural(n);

    return 0;
}