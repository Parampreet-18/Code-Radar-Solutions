// #include <stdbool.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void printPrimesInRange(int a, int b) {
    int flag=0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);

            flag=1;
        }
        if(!flag){
            printf("No prime number");
        }
    }
    printf("\n");
}
