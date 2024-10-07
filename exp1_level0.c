#include <stdio.h>
int main() 
{
    int c;
    float f;
    printf("Enter temperature in celsius\n");
    scanf("%d",&c);
    f=((c*9/5)+32);
    printf("The temperature in fahrenheit is%.2f ",f);
    return 0;
}
