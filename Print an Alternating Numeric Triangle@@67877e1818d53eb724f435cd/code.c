#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d",&a);
    for (int i = 0; i <=a; i++)
    {int val = i % 2 == 0 ? 0 : 1;
        for (int j = 0; j <i ; j++)
        {
            printf("%d ",val);
            val = 1 - val;
        }
        printf("\n");
        
    }
    
    return 0;
}