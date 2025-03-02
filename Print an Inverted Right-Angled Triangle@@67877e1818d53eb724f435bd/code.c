#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i;i<a;i++){
        printf("* ");
        for(int j;j<i;j++){
            printf("\n* ");
        }
    }
    return 0;
}