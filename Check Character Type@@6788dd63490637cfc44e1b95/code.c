#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'){
        printf("Vowel");
    }
    else if(a=='g'){
        printf("Consonant");
    }
    else if(a>=0){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}