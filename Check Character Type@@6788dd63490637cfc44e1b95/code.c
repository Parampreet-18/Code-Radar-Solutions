#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a==b){
        printf("Vowel");
    }
    else if(a==a){
        printf("Consonant");
    }
    else if(a>0){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}