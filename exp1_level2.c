#include <stdio.h>
int main() 
{
    int x,tot=0;
    int i;
    printf("Enter the number of floors \n");
    scanf("%d",&x);
    for(i=0;i<=x;i++);
    {
        tot+=(2*i-1);
    }
    printf("The total matchsticks required to form pyramid %d",tot);
    return 0;
}
