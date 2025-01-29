#include <stdio.h>
int main() {
    int a,b,c,formul,formula;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a+b>c&&a+c>b&&b+c>a){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}