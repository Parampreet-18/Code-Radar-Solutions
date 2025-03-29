int fibonacciSeries(int n){
    int a=0,b=1,c;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    for(int i=2;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");

}