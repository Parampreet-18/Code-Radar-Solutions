#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a==a){
        printf("Vowel");
    }
    else if(a==1){
        printf("Consonant");
    }
    else if(a==a){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}