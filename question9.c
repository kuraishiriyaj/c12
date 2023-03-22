#include<stdio.h>
/* write a recrusion function to print octal of a given
decimal number ?
*/
void octal(int n)
{
    if(n>=1)
    {
    octal(n/8);
    printf("%d",n);
    }

}
int main()
{
    int a;
    printf("enter is the number");
    scanf("%d",&a);
    octal(a);

    return 0;
}