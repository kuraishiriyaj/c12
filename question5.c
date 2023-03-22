#include<stdio.h>
/* write a recrusion function to print first N even natural
numbers ?
*/
void even(int n)
{
    if(n>=1)
    {
    
      even(n-1);
      printf("%d\n",2*n);
     
    }
}
int main()
{
    int a;
    printf("enter is the a");
    scanf("%d",&a);
    even(a);

    return 0;
}