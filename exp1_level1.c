#include <stdio.h>
int main() 
{
    int n,octnum;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    octnum=(3*n*n)-(2*n);
    printf("The octogonal number of %d is %d",n,octnum);
    return 0;
}
