#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a&(1<<31)){
        printf("set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}