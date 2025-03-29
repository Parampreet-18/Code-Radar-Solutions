
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int k=1;
    for (int i = 0; i <=5; i++)
    {
        for (int j = 0; j <=i ; j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
        
    }

    
    return 0;
}