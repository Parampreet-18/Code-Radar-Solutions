#include <stdio.h>
#include<math.h>
int main() {
    int a,n,b=0;
    scanf("%d",&n);
    for(int i=0;n>0;i++){
        a=n%2;
        n=n/2;
        b=b+(pow(10,i)*a);

    }
    printf("%d",b);
    return 0;
}