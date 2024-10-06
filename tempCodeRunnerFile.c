#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    double shang = (double)a/b;
    printf("[%d] + [%d] = [%d]\n", a, b, a+b);
    printf("[%d] - [%d] = [%d]\n", a, b, a-b);
    printf("[%d] * [%d] = [%d]\n", a, b, a*b);
    if(shang == (int)shang){
        printf("[%d] / [%d] = [%d]", a, b, (int)shang);
    }else{
        printf("[%d] / [%d] = [%.2f]", a, b, shang);
    }
    return 0;
}