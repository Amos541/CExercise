#include <stdio.h>

//for循环
int ForLoop(int n){
    int sum = 0;
    for (int n = 1; n <= 10; n++){
        sum += n;
    }
    return sum;
}

int main(){
    int res = ForLoop(1);
    printf("%d\n", res);
    return 0;
}