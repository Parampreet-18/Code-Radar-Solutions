 #include<stdio.h>
int main()
{
    for (int i = 1; i <=a; i++)
    {
        for (int j = 0; j <a-i ; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <2*i-1; k++)
        {
            printf("*");    
        }
        printf("\n");

    }
    for (int i = 0; i <=a; i++)
    {
        for (int j = 0; j <i ; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <2*(a-i)-1; k++)
        {
            printf("*");    
        }
        printf("\n");
    }

    
    return 0;
}