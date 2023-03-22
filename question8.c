
#include<stdio.h>
/* write a recrusion function to print binary of a 
given decimal number ?
*/
void rev(int n)
{
    if(n>=1)
    {
        rev(n/2);
        if(n%2==0)
            printf("0");
            else
            printf("1");

    }


}
int main()
{
    int a;
    printf("enter is the number");
    scanf("%d",&a);
    rev(a);

    return 0;
}
