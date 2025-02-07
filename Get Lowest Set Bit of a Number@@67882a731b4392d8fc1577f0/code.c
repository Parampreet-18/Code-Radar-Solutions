#include <stdio.h>


int main() {
    int a,b=1;
    scanf("%d",&a);
    if(a==0){
        printf("");
    }
    while((a&1)==1){
        a=a>>1;
        b++;
    }

    return 0;
}