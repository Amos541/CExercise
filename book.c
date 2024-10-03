#include<stdio.h>

//1~100所有偶数的和
// int main(){
//     int sum, i;
//     for(i=1; i<=100;i++){
//         if(i%2==0){
//             sum = sum + i;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }

//1~100所有能被6整除的整数的和
// int main(){
//     int sum ,i;
//     for(i=1; i<=100; i++){
//         if (i%6==0){
//             sum = sum + i;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }

//输入一个数判断是不是素数
//素数定义：一个大于 1 的整数 n 如果不能被 2 到 sqrt(n) 之间的任何整数整除，那么它就是素数。
int main(){
    int n, i;
    scanf("请输入一个不小于2的整数：%d",&n);
    for(i=2;i * i<n;i++){
        if(n%i==0){
            printf("%d不是素数",n);
            break;
        }
    };
    printf("%d是素数",n);
    return 0;
}

//