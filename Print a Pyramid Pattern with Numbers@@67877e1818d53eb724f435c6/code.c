
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = 0; j <a-i ; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <2*i-1; k++)
        {
            printf("%d",k+1);    
        }
        printf("\n");
    }
    return 0;
}