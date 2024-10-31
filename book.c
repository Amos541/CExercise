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

//例2-1 输出Hello World!
// int main(void){
//     printf("Hello World!");
//     return 0;
// }

//例2-2 显示“Programming is fun.”和“And programming in C is even more fun!”，每行显示一句
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

//例2-3 求华氏温度100℉对应的摄氏温度，计算公式为c=5*(f-32)/9
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

//例2-4 计算水费
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

//例2-5 坚持的力量（幂函数）：第一天的能力值为基数，用initial表示，能力值相比前一天提高的值factor就是努力参数，坚持天数为day。根据公式 result=initial(1+factor)^day 计算出能力值，输出时保留两位小数。
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

//例2-6 输入两个整数lower和upper，输出一张华氏摄氏温度转换表，取值范围是[lower,upper]，每次增加一华氏度
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

//例2-7 输入一个正整数n，累加求和
// int main(void){
//     int i, n, sum;
//     printf("输入一个正整数n:");
//     scanf("%d", &n);
//     sum = 0;
//     for(i=1; i<=n; i++){
//         sum = sum + i;
//     }
//     printf("Sum of numbers from 1 to %d is %d\n", n, sum);
//     return 0;
// }

//例2-8 输入一个正整数n，计算1-1/3+1/5-1/7+...的前n项之和
// int main(void){
//     int denominator, flag, n, i;
//     double item, sum;
//     printf("Enter n:");
//     scanf("%d", &n);
//     denominator = 1;//第i项分母
//     item = 1;
//     sum = 0;
//     flag = 1;//第i项符号
//     for(i=1; i<=n; i++){
//         sum = sum + item;
//         flag = -flag;
//         denominator = denominator + 2;
//         item = flag * 1.0/denominator;
//     }
//     printf("sum=%f\n", sum);
//     return 0;
// }

//例2-9 输入一个正整数n，计算n!
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

//练习2-12 输入两个整数lower和upper，输出一张华氏摄氏温度转换表，取值范围是[lower,upper]，每次增加2华氏度
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

//练习2-13 输入一个正整数n，计算1+1/2+1/3+1/4+...的前n项和
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

//练习2-14 输入一个正整数n，计算1+1/3+1/5+1/7+...的前n项之和
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

//练习2-15 输入一个正整数n，计算1-1/4+1/7-1/10+...的前n项之和
// int main(void){
//     int denominator, flag, n, i;
//     double item, sum;
//     printf("Enter n:");
//     scanf("%d", &n);
//     denominator = 1;//第i项分母
//     item = 1;
//     sum = 0;
//     flag = 1;//第i项符号
//     for(i=1; i<=n; i++){
//         sum = sum + item;
//         flag = -flag;
//         denominator = denominator + 3;
//         item = flag * 1.0/denominator;
//     }
//     printf("sum=%f\n", sum);
//     return 0;
// }

//例2-10 输入一个正整数n，生成一张2的乘方表，输出2^0到2^n的值,可以调用幂函数计算2的乘方
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

//例2-11 输入一个正整数n(n<=16)，生成一张阶乘表输出0！到n！的值。要定义和调用函数fact(n)计算n！，函数类型是double
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

//练习2-17 输入一个正整数n，生成一张3的乘方表，输出3^0到3^n的值，可包含头文件math.h，调用幂函数计算3的乘方
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

//练习2-18 输入两个正整数m和n(m<=n)，计算并输出组合数，组合数公式：C=n!/m!(n-m)!。要求定义和调用函数fact(n)计算n!,函数类型是double
// double fact(int n);
// int main(void){
//     int m, n;
//     double result;
//     printf("Enter m and n:");
//     scanf("%d %d", &m, &n);
//     if(m>n){
//         printf("Invalid Value!\n");
//     } else {
//         result = fact(n)/(fact(m)*fact(n-m));
//         printf("C=%f\n", result);
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

//例3-1 简单的猜数游戏：输入你所猜的整数(假定1~100)，与计算机产生的被猜数相比，如果相等显示猜中；如果不等显示被猜数的大小关系
// int main(void){
//     int mynumber = 38;
//     int yournumber;
//     printf("Input your number:");
//     scanf("%d",&yournumber);
//     if(yournumber==mynumber){
//         printf("Good Guess!\n");
//     } else {
//         if(yournumber>mynumber){
//             printf("Too big!\n");
//         } else {
//             printf("Too small!\n");
//         }
//     }
//     return 0;
// }

//例3-2 奇偶分家：输入一个正整数n，在输入n个非负整数，统计奇数和偶数各有多少个
// int main(void){
//     int count_odd, count_even, n, i, number;
//     count_odd = 0;
//     count_even = 0;
//     printf("Enter n:");
//     scanf("%d", &n);
//     printf("Input %d numbers:\n", n);
//     for(i=1; i<=n; i++){
//         scanf("%d", &number);
//         if(number%2!=0){
//             count_odd++;
//         } else {
//             count_even++;
//         }
//     }
//     printf("odd:%d,even:%d\n", count_odd, count_even);
//     return 0;
// }

//例3-3 统计指定数量学生的平均成绩与不及格人数：输入一个非负整数n，再输入n个学生的成绩，计算平均分，并统计不及格成绩的学生人数
// int main(void){
//     int count, i, n;
//     double score, total;
//     printf("Enter n:");
//     scanf("%d", &n);
//     total = 0;
//     count = 0;
//     for(i=1; i<=n; i++){
//         printf("Enter score #%d:", i);
//         scanf("%lf", &score);
//         total = total + score;
//         if(score<60){
//             count++;
//         }
//     }
//     if(n!=0){
//         printf("Average=%.2f\n", total/n);
//     } else {
//         printf("Average=0\n");
//     }
//     printf("Number of failures=%d\n", count);
//     return 0;    
// }

//例3-4 分段计算居民水费：继续讨论例2-4中提出的分段计算水费的问题。虽然实际生活中不会出现月用水量x小于零的情况，但程序运行时如果不慎输入一个负数，水费计算将会出错。当x<0时，y为0。
// int main(void){
//     double x, y;
//     printf("Enter x:\n");
//     scanf("%lf", &x);
//     if(x<0){
//         y = 0;
//     } else if(x<=15){
//         y = 4 * x / 3;
//     } else {
//         y = 2.5 * x - 10.5;
//     }
//     printf("y=f(%f)=%.2f\n", x, y);
//     return 0;
// }

//练习3-2 计算符号函数的值输入一个整数x计算并输出分段函数Signmod(x)的值。
// int main(void){
//     int x, y;
//     printf("Enter x:");
//     scanf("%d", &x);
//     if(x==0){
//         y = 0;
//     } else if(x>0){
//         y = 1;
//     } else {
//         y = -1;
//     }
//     printf("y=%d\n", y);
//     return 0;
// }

//练习3-3 统计学生平均成绩与及格人数：输入一个正整数n，再输入n个学生的成绩，计算平均成绩并统计所有及格学生的人数
// int main(void){
//     int count, i, n;
//     double score, total;
//     printf("Enter n:");
//     scanf("%d", &n);
//     total = 0;
//     count = 0;
//     for(i=1; i<=n; i++){
//         printf("Enter score #%d:", i);
//         scanf("%lf", &score);
//         total = total + score;
//         if(score>=60){   //及格条件修改一下
//             count++;
//         }
//     }
//     if(n!=0){
//         printf("Average=%.2f\n", total/n);
//     } else {
//         printf("Average=0\n");
//     }
//     printf("Number of success=%d\n", count); //提示词修改一下
//     return 0;    
// }

//例3-5 求解简单的四则运算表达式：输入一个形式如“操作数 运算符 操作数”的四则运算表达式，输出运算结果，要求对除数为0的情况做特别处理
// int main(void){
//     double value1, value2;
//     char op;
//     printf("Type in an expression:");
//     scanf("%lf %c %lf", &value1, &op, &value2);//书上的输入没有空格，不符合题意啊
//     if(op=='+'){
//         printf("%.2f\n", value1+value2);
//     } else if(op=='-'){
//         printf("%.2f\n", value1-value2);
//     } else if(op=='*'){
//         printf("%.2f\n", value1*value2);
//     } else if(op=='/'){
//         if(value2!=0){
//             printf("%.2f\n", value1/value2);
//         } else {
//             printf("Divide cannot be 0!\n");
//         }
//     } else {
//         printf("Unknown operator!\n");
//     }
//     return 0;
// }

//例3-6 统计英文字母和数字字符，输入一个正整数n，再输入n个字符，统计其中英文字母、数字字符和其他字符的个数
// int main(void){
//     int digit, i, letter, n, other;
//     char ch;
//     digit = letter = other = 0;
//     printf("Enter n:");
//     scanf("%d", &n);
//     getchar();  //书上说是为了读入并舍弃换行符，但是实测可不加，原因是在下一行的输入语句中加入了换行符，如果没有\n那么此处的getchar()是必需的
//     printf("Enter %d characters:\n", n);
//     for(i=1; i<=n; i++){
//         ch = getchar();
//         if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
//             letter++;
//         } else if(ch>='0'&&ch<='9'){
//             digit++;
//         } else {
//             other++;
//         }
//     }
//     printf("letter=%d,digit=%d,other=%d\n", letter, digit, other);
//     return 0;
// }

//