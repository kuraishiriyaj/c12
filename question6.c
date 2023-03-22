#include<stdio.h>
/* write a recrusion function to print first N even natural 
numbers in reverse order ?
*/
void even(int n)
{
    if(n>=1)
    {
          printf("%d\n",2*n);
          even(n-1);
    }

}
int main()
{
    int a;
    printf("enter is the a");
    scanf("%d",&a);
    even(a);


}
