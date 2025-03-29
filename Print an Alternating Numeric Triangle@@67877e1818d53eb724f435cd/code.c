#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    for (int i = 0; i <=a; i++)
    {
        for (int j = 0; j <i ; j++)
        {
            printf("%c ",97+j);
        }
        printf("\n");
        
    }
    
    return 0;
}