#include<stdio.h>
/* write a recrusion function to print squares of first 
N natural numbers ?
*/
void square(int n)
{
    if(n>=1)
    {
        square(n-1);
        printf("%d square of the number is:%d\n\n",n,n*n);
    }
}
int main()
{
    int a;
    printf("enter is the number");
    scanf("%d",&a);
    square(a);

    return 0;
}