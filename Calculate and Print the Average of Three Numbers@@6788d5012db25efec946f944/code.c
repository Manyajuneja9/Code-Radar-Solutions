#include <stdio.h>

int main() {
    int a,b,c;
    float average;
    printf("Enter three integers:");
    scanf("%d,%d,%d",&a,&b,&c);

    result=(a+b+c/3.0);
    printf("Average: %.2f\n",a,b,c,result);
    return 0;
}