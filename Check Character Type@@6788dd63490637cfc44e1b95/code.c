#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'){
        printf("Vowel");
    }
    else if(a=='z'){
        printf("Consonant");
    }
    else if(a>=0 && a<= 9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}