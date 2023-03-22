#include<stdio.h>
/* write a recrusion function to print reverse of a 
given number ?
*/
   int reverse(int n)
   {
     if(n>=1)
       {
        printf("%d\n",n);
          reverse(n-1);
       }
   }
int main()
{
    int a;
    printf("enter is the number a");
    scanf("%d",&a);
    reverse(a);

    return 0;
}