#include<stdio.h>

//1~100����ż���ĺ�
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

//1~100�����ܱ�6�����������ĺ�
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

//����һ�����ж��ǲ�������
//�������壺һ������ 1 ������ n ������ܱ� 2 �� sqrt(n) ֮����κ�������������ô������������
// int main(){
//     int n, i;
//     scanf("������һ����С��2��������%d",&n);
//     for(i=2;i * i<n;i++){
//         if(n%i==0){
//             printf("%d��������",n);
//             break;
//         }
//     };
//     printf("%d������",n);
//     return 0;
// }

//2-1 ���Hello World!
// int main(void){
//     printf("Hello World!");
//     return 0;
// }

//2-2 ��ʾ��Programming is fun.���͡�And programming in C is even more fun!����ÿ����ʾһ��
// int main(void){
//     printf("Programming is fun.\n");
//     printf("And programming in C is even more fun!\n");
//     return 0;
// }

//��ϰ2-1 ����̾䡰Programming in C is fun!��
// int main(void){
//     printf("Programming in C is fun!");
//     return 0;
// }
//��ϰ2-3 ���������
// int main(void){
//     printf("* * * *\n");
//     printf(" * * * \n");
//     printf("  * *  \n");
//     printf("   *   \n");
//     return 0;
// }

//2-3 �����¶�100�H��Ӧ�������¶ȣ����㹫ʽΪc=5*(f-32)/9
// int main(void){
//     int celsius, fahr;
//     fahr = 100;
//     celsius = 5*(fahr-32)/9;
//     printf("fahr = %d, celsius = %d\n", fahr, celsius);
//     return 0;
// }

//��ϰ2-4 �����¶�150�H��Ӧ�������¶�
// int main(void){
//     int celsius, fahr;
//     fahr = 150;
//     celsius = 5*(fahr-32)/9;
//     printf("fahr = %d, celsius = %d\n", fahr, celsius);
//     return 0;
// }

//��ϰ2-6 ����������������ľ��룺һ�������100�׵ĸ߿��������£�������ǰ����������Ĵ�ֱ���롣��g=10m/s^2
//l=1/2*g*t^2
// int main(void){
//     float g = 10, t = 3, l;
//     l = 0.5 * g * t * t;
//     printf("������ǰ����������ľ�����%.2f�ס�\n", l);
//     return 0;
// }

//2-4 ����ˮ��
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

//2-5 ��ֵ��������ݺ���������һ�������ֵΪ��������initial��ʾ������ֵ���ǰһ����ߵ�ֵfactor����Ŭ���������������Ϊday�����ݹ�ʽ result=initial(1+factor)^day ���������ֵ�����ʱ������λС����
// #include <math.h>
// int main(void){
//     int day;
//     double factor, initial, result;
//     printf("Enter initial:");
//     scanf("%lf",&initial);//����scanf����һ�������
//     printf("Enter factor:");
//     scanf("%lf",&factor);
//     printf("Enter day:");
//     scanf("%d",&day);
//     result = initial * pow(1+factor,day);//�ݺ���pow()
//     printf("result=%.2f\n",result);
//     return 0;
// }

//��ϰ2-8 ���뻪���¶ȣ������Ӧ�������¶�
// int main(void){
//     int celsius, fahr;
//     printf("Enter fahr:");
//     scanf("%d",&fahr);
//     celsius = 5*(fahr-32)/9;
//     printf("fahr = %d, celsius = %d\n", fahr, celsius);
//     return 0;
// }

//��ϰ2-9 ����2��������������Ͳ����
// int main(void){
//     int a, b;
//     printf("����a��b(a��b��Ϊ������):");
//     scanf("%d %d", &a, &b);
//     int sum, sub, mul, div;
//     sum = a + b;
//     sub = a - b;
//     mul = a * b;
//     div = a /b;
//     printf("sum=%d, sub=%d, mul=%d, div=%d\n", sum, sub, mul, div);
//     return 0;
// }

//��ϰ2-10 ����ֶκ������������һλС��
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

//��ϰ2-11 ����ֶκ�����pow()�������ݣ�sqrt()������ƽ���������������λС��
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

//2-6 ������������lower��upper�����һ�Ż��������¶�ת����ȡֵ��Χ��[lower,upper]��ÿ������һ���϶�
// int main(void){
//     int fahr, lower, upper;
//     double celsius;
//     printf("Enter lower and upper:\n");
//     scanf("%d %d", &lower, &upper);
//     if(lower < upper){
//         printf("fahr celsius\n");
//         for(fahr=lower; fahr<=upper; fahr++){
//             celsius = (5.0/9.0)*(fahr-32);
//             printf("%4d%6.1f\n", fahr, celsius);
//         }
//     } else {
//         printf("Invalid Value!\n");
//     }
//     return 0;
// }

//2-7 ����һ��������n���ۼ����
// int main(void){
//     int i, n, sum;
//     printf("����һ��������n:");
//     scanf("%d", &n);
//     sum = 0;
//     for(i=1; i<=n; i++){
//         sum = sum + i;
//     }
//     printf("Sum of numbers from 1 to %d is %d\n", n, sum);
//     return 0;
// }

//2-8 ����һ��������n������1-1/3+1/5-1/7+...��ǰn��֮��
// int main(void){
//     int denominator, flag, n, i;
//     double item, sum;
//     printf("Enter n:");
//     scanf("%d", &n);
//     denominator = 1;//��i���ĸ
//     item = 1;
//     sum = 0;
//     flag = 1;//��i�����
//     for(i=1; i<=n; i++){
//         sum = sum + item;
//         flag = -flag;
//         denominator = denominator + 2;
//         item = flag * 1.0/denominator;
//     }
//     printf("sum=%f\n", sum);
//     return 0;
// }

//2-9 ����һ��������n������n!
// int main(void){
//     int n, i;
//     double product;
//     printf("Enter n:");
//     scanf("%d", &n);
//     product = 1;
//     for(i=1; i<=n; i++){
//         product = product * i;
//     }
//     printf("product=%.0f\n", product);
//     return 0;
// }

//��ϰ2-12 ������������lower��upper�����һ�Ż��������¶�ת����ȡֵ��Χ��[lower,upper]��ÿ������2���϶�
// int main(void){
//     int fahr, lower, upper;
//     double celsius;
//     printf("Enter lower and upper:\n");
//     scanf("%d %d", &lower, &upper);
//     if(lower < upper){
//         printf("fahr celsius\n");
//         for(fahr=lower; fahr<=upper; fahr=fahr+2){
//             celsius = (5.0/9.0)*(fahr-32);
//             printf("%4d%6.1f\n", fahr, celsius);
//         }
//     } else {
//         printf("Invalid Value!\n");
//     }
//     return 0;
// }

//��ϰ2-13 ����һ��������n������1+1/2+1/3+1/4+...��ǰn���
// int main(void){
//     int n, i;
//     double sum = 0;
//     printf("Enter n:");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         sum = sum + 1.0/i;
//     }
//     printf("sum=%f\n", sum);
//     return 0;
// }

//��ϰ2-14 ����һ��������n������1+1/3+1/5+1/7+...��ǰn��֮��
// int main(void){
//     int n, i;
//     double sum = 0;
//     printf("Enter n:");
//     scanf("%d", &n);
//     for(i=1; i<=2*n-1; i=i+2){
//         sum = sum + 1.0/i;
//     }
//     printf("sum=%f\n", sum);
//     return 0;
// }

//��ϰ2-15 ����һ��������n������1-1/4+1/7-1/10+...��ǰn��֮��
// int main(void){
//     int denominator, flag, n, i;
//     double item, sum;
//     printf("Enter n:");
//     scanf("%d", &n);
//     denominator = 1;//��i���ĸ
//     item = 1;
//     sum = 0;
//     flag = 1;//��i�����
//     for(i=1; i<=n; i++){
//         sum = sum + item;
//         flag = -flag;
//         denominator = denominator + 3;
//         item = flag * 1.0/denominator;
//     }
//     printf("sum=%f\n", sum);
//     return 0;
// }

//2-10 ����һ��������n������һ��2�ĳ˷������2^0��2^n��ֵ,���Ե����ݺ�������2�ĳ˷�
// #include <math.h>
// int main(void){
//     int i, n;
//     double power;
//     printf("Enter n:");
//     scanf("%d", &n);
//     for(i=0; i<=n; i++){
//         power = pow(2, i);
//         printf("pow(2, %d)=%.0f\n", i, power);
//     }
//     return 0;
// }

//2-11 ����һ��������n(n<=16)������һ�Ž׳˱����0����n����ֵ��Ҫ����͵��ú���fact(n)����n��������������double
// double fact(int n);
// int main(void){
//     int i, n;
//     double result;
//     printf("Enter n:");
//     scanf("%d", &n);
//     for(i=0; i<=n; i++){
//         result = fact(i);
//         printf("%d!=%.0f\n", i, result);
//     }
//     return 0;
// }
// double fact(int n){
//     int i;
//     double product;
//     product = 1;
//     for(i=1; i<=n; i++){
//         product = product * i;
//     }
//     return product;
// }

//��ϰ2-17 ����һ��������n������һ��3�ĳ˷������3^0��3^n��ֵ���ɰ���ͷ�ļ�math.h�������ݺ�������3�ĳ˷�
// #include <math.h>
// int main(void){
//     int n, i, res;
//     printf("Enter n:");
//     scanf("%d", &n);
//     for(i=0; i<=n; i++){
//         res = pow(3, i);
//         printf("pow(3, %d)=%d\n", i, res);
//     }
//     return 0;
// }

//��ϰ2-18 ��������������m��n(m<=n)�����㲢�����������������ʽ��C=n!/m!(n-m)!��Ҫ����͵��ú���fact(n)����n!,����������double
double fact(int n);
int main(void){
    int m, n;
    double result;
    printf("Enter m and n:");
    scanf("%d %d", &m, &n);
    if(m>n){
        printf("Invalid Value!\n");
    } else {
        result = fact(n)/(fact(m)*fact(n-m));
        printf("C=%f\n", result);
    }
    return 0;
}
double fact(int n){
    int i;
    double product;
    product = 1;
    for(i=1; i<=n; i++){
        product = product * i;
    }
    return product;
}