#include <stdio.h>
int main()
{
    int i,n;
    printf("enter the integer\n");
    scanf("%d",&n);

    for ( i = 0; i <=10; i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    
    return 0;
}
