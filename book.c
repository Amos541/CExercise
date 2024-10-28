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
// int main(){
//     int n, i;
//     scanf("请输入一个不小于2的整数：%d",&n);
//     for(i=2;i * i<n;i++){
//         if(n%i==0){
//             printf("%d不是素数",n);
//             break;
//         }
//     };
//     printf("%d是素数",n);
//     return 0;
// }

//2-1 输出Hello World!
// int main(void){
//     printf("Hello World!");
//     return 0;
// }

//2-2 显示“Programming is fun.”和“And programming in C is even more fun!”，每行显示一句
// int main(void){
//     printf("Programming is fun.\n");
//     printf("And programming in C is even more fun!\n");
//     return 0;
// }

//练习2-1 输出短句“Programming in C is fun!”
// int main(void){
//     printf("Programming in C is fun!");
//     return 0;
// }
//练习2-3 输出倒三角
// int main(void){
//     printf("* * * *\n");
//     printf(" * * * \n");
//     printf("  * *  \n");
//     printf("   *   \n");
//     return 0;
// }

//2-3 求华氏温度100℉对应的摄氏温度，计算公式为c=5*(f-32)/9
// int main(void){
//     int celsius, fahr;
//     fahr = 100;
//     celsius = 5*(fahr-32)/9;
//     printf("fahr = %d, celsius = %d\n", fahr, celsius);
//     return 0;
// }

//练习2-4 求华氏温度150℉对应的摄氏温度
// int main(void){
//     int celsius, fahr;
//     fahr = 150;
//     celsius = 5*(fahr-32)/9;
//     printf("fahr = %d, celsius = %d\n", fahr, celsius);
//     return 0;
// }

//练习2-6 计算物体自由下落的距离：一个物体从100米的高空自由落下，求它在前三秒内下落的垂直距离。设g=10m/s^2
//l=1/2*g*t^2
// int main(void){
//     float g = 10, t = 3, l;
//     l = 0.5 * g * t * t;
//     printf("物体在前三秒内下落的距离是%.2f米。\n", l);
//     return 0;
// }

//2-4 计算水费
// int main(void){
//     double x, y;
//     printf("Enter x(x>=0):\n");
//     scanf("%lf", &x);
//     if(x<=15){
//         y = 4 * x / 3;
//     } else {
//         y = 2.5 * x - 10.5;
//     }
//     printf("y=f(%f)=%.2f\n", x, y);
//     return 0;
// }

//2-5 坚持的力量（幂函数）：第一天的能力值为基数，用initial表示，能力值相比前一天提高的值factor就是努力参数，坚持天数为day。根据公式 result=initial(1+factor)^day 计算出能力值，输出时保留两位小数。
// #include <math.h>
// int main(void){
//     int day;
//     double factor, initial, result;
//     printf("Enter initial:");
//     scanf("%lf",&initial);//三次scanf可以一次性完成
//     printf("Enter factor:");
//     scanf("%lf",&factor);
//     printf("Enter day:");
//     scanf("%d",&day);
//     result = initial * pow(1+factor,day);//幂函数pow()
//     printf("result=%.2f\n",result);
//     return 0;
// }

//练习2-8 输入华氏温度，计算对应的摄氏温度
// int main(void){
//     int celsius, fahr;
//     printf("Enter fahr:");
//     scanf("%d",&fahr);
//     celsius = 5*(fahr-32)/9;
//     printf("fahr = %d, celsius = %d\n", fahr, celsius);
//     return 0;
// }

//练习2-9 输入2个正整数，计算和差积商
// int main(void){
//     int a, b;
//     printf("输入a、b(a、b均为正整数):");
//     scanf("%d %d", &a, &b);
//     int sum, sub, mul, div;
//     sum = a + b;
//     sub = a - b;
//     mul = a * b;
//     div = a /b;
//     printf("sum=%d, sub=%d, mul=%d, div=%d\n", sum, sub, mul, div);
//     return 0;
// }

//练习2-10 计算分段函数，结果保留一位小数
// int main(void){
//     double x, y;
//     printf("Enter x:\n");
//     scanf("%lf", &x);
//     if(x==0){
//         y = 0;
//     } else {
//         y = 1/x;
//     }
//     printf("y=f(%f)=%.1f\n", x, y);
//     return 0;
// }

//练习2-11 计算分段函数，pow()函数求幂，sqrt()函数求平方根，结果保留两位小数
// #include <math.h>
// int main(void){
//     double x, y;
//     printf("Enter x:\n");
//     scanf("%lf", &x);
//     if(x>=0){
//         y = sqrt(x);
//     } else {
//         y = pow(x+1,2) + 2 * x + 1/x;
//     }
//     printf("y=f(%f)=%.2f\n", x, y);
//     return 0;
// }

//2-6 输入两个整数lower和upper，输出一张华氏摄氏温度转换表，取值范围是[lower,upper]，每次增加一华氏度
int main(void){
    int fahr, lower, upper;
    double celsius;
    printf("Enter lower and upper:\n");
    scanf("%d %d", &lower, &upper);
    if(lower < upper){
        printf("fahr celsius\n");
        for(fahr=lower; fahr<=upper; fahr++){
            celsius = (5.0/9.0)*(fahr-32);
            printf("%4d%6.1f\n", fahr, celsius);
        }
    } else {
        printf("Invalid Value!\n");
    }
    return 0;
}