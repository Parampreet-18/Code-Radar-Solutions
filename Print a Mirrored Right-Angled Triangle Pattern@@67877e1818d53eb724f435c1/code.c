#include<stdio.h>
in main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        for (int j=0;j<=5-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}