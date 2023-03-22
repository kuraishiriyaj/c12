#include<stdio.h>
/* write a recrusion function to print first N odd natural numbers ?
*/
void sum(int n)
{
    if(n>=1)
       {
       
        sum(n-1);
         printf("%d\n",2*n-1);
       }
}
int main()
{
    int a;
    printf("enter is the a");
    scanf("%d",&a);
    sum(a);

    return 0;
}