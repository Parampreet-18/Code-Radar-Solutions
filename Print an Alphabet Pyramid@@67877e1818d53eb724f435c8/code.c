// Your code here...
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 1; i <=a; i++){
    
        for (int k = 1; k <=i; k++)
        {
            printf("%c ",65+k);    
        }
        printf("\n");
    }
    return 0;
    }
