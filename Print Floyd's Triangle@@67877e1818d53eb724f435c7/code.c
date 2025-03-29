
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int k=1,a;
    scanf("%d",&a);
    for (int i = 0; i <=a; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
        
    }

    
    return 0;
}