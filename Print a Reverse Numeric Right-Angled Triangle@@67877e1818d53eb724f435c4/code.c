#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("r");
        for(int j=0;j<a-i;j++){
            // printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;

}