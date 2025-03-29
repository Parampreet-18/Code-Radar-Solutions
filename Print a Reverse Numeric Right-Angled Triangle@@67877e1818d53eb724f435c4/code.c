#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
            printf("%d ",i);
        for(int j=0;j<a-i;j++){
        printf(" ");
        }
        printf("\n");
    }
    return 0;

}