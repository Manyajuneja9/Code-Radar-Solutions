#include <stdio.h>

int main() {
    int a,b,c;
    float average;
    printf("Enter three integers:");
    scanf("%d,%d,%d",&a,&b,&c);

    average=(a+b+c)/3.00;
    printf("Average: %.2f\n",a,b,c,average);
    return 0;
}