int main(void){
    int n, i;
    double sum = 0;
    printf("Enter n:");
    scanf("%d", &n);
    for(i=1; i<=n; i=i+2){
        sum = sum + 1.0/i;
    }
    printf("sum=%f\n", sum);
    return 0;
}