#include<stdio.h>
/* write a recrusion function to print first N odd natural
numbers in reverse order ?
*/
void odd(int n)
{
    if(n>=1)
    {
        printf("%d\n",2*n-1);
        odd(n-1);

    }


}
int main()
{
    int n;
    printf("enter is the number");
    scanf("%d",&n);
      odd(n);

    return 0;
}
