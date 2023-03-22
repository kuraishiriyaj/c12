#include<stdio.h>
/* write a recrusion function to print first N natural
numbers ?
*/
void sum(int n)
{
    if(n>=1)
    {
        sum(n-1);
        printf("%d\n",n);

    }
    
}
int main()
{
    int a;
    printf("enter is the number");
    scanf("%d",&a);
     sum(a);
     return 0;
}