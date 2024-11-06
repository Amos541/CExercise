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

//例3-7 统计英文字母和数字字符，输入一个正整数n，再输入n个字符，统计其中英文字母、数字字符和其他字符的个数
// int main(void){
//     int digit, i, letter, n, other;
//     char ch;
//     digit = letter = other = 0;
//     printf("Enter n:");
//     scanf("%d", &n);
//     getchar();  //吸收换行符：scanf 只读取一个整数，但用户输入整数后通常会按回车键。这个回车键会被 scanf 读取为一个换行符，并留在输入缓冲区中。如果不处理这个换行符，后续的 getchar(); 会立即读取到这个换行符，而不是用户输入的字符。如果在测试时发现结果并无影响，可能是因为你在测试时没有遇到特定的情况，导致问题没有显现出来。
//     printf("Enter %d characters:", n);
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

//例3-8 查询自动售货机中商品的价格：假设自动售货机出售四种商品：薯片，爆米花，巧克力和可乐，售价分别是每份3.0，2.5，4.0和3.5元。在屏幕上显示以下菜单（编号和选项），用户可以连续查询商品的价格。当查询次数超过五次时，自动退出；不到五次时，用户可以选择退出。当用户输入编号1~4，显示相应商品的价格（保留1位小数）；输入0，退出查询；输入其他编号显示价格为0
// int main(void){
//     int choice, i;
//     double price;
//     printf("[1] Select crisps\n");
//     printf("[2] Select popcorn\n");
//     printf("[3] Select chocolate\n");
//     printf("[4] Select cola\n");
//     for(i=1; i<=5; i++){
//         printf("Enter your choice:");
//         scanf("%d", &choice);
//         if(choice==0){
//             break;  //break跳出for循环
//         }
//         switch(choice){
//             case 1:price = 3.0; break;
//             case 2:price = 2.5; break;
//             case 3:price = 4.0; break;
//             case 4:price = 3.5; break;
//             default:price = 0.0; break;
//         }
//         printf("%0.1f\n", price);
//     }
//     printf("Thanks!\n");
//     return 0;
// }

//例3-9 两个数的简单计算器：编写一个简单计算器程序，可根据输入的运算符，对两个整数进行加、减、乘、除和求余运算，请对除数为0的情况做特别处理要求使用switch语句编写
// int main(void){
//     int value1, value2;
//     char op;
//     printf("Type in an expression:");
//     scanf("%d%c%d", &value1, &op, &value2);
//     switch(op){
//         case '+':
//             printf("%d\n", value1+value2);
//             break;
//         case '-':
//             printf("%d\n", value1-value2);
//             break;
//         case '*':
//             printf("%d\n", value1*value2);
//             break;
//         case '/':
//             if(value2!=0){
//                 printf("%d\n", value1/value2);
//            } else {
//                 printf("Divide cannot be 0!\n");
//            }
//            break;
//         case '%':
//             if(value2!=0){
//                 printf("%d\n", value1%value2);
//             } else {
//                 printf("Divide cannot be 0!\n");
//             }
//             break;
//         default:
//             printf("Unknown operator!\n");
//             break;
//     }
//     return 0;
// }

//例3-10 输入一个正整数n，再输入n个字符，分别统计出其中空格或回车、数字字符和其他字符的个数。要求使用switch语句编写
// int main(void){
//     int blank, digit, i, n, other;
//     char ch;
//     blank = digit = other = 0;
//     printf("Enter n:");
//     scanf("%d", &n);
//     getchar();
//     printf("Enter %d characters:", n);
//     for(i=1; i<=n; i++){
//         ch = getchar();
//         switch(ch){
//             case ' ':
//             case '\n':
//                 blank++;
//                 break;
//             case '0':
//             case '1':
//             case '2':
//             case '3':
//             case '4':
//             case '5':
//             case '6':
//             case '7':
//             case '8':
//             case '9':
//                 digit++;
//                 break;
//             default:
//                 other++;
//                 break;
//         }
//     }
//     printf("blank=%d,digit=%d,other=%d\n", blank, digit, other);
//     return 0;
// }

//练习3-7 成绩转换：输入一个百分制成绩将其转换为五分制成绩，百分制成绩到五分制成绩的转换规则：大于或等于90分为A，小于90分且大于或等于80分为B，小于80分且大于或等于70为C，小于70分且大于或等于60为D，小于60分为E
// int main(void){
//     int score;
//     char res;
//     printf("Input score:");
//     scanf("%d", &score);
//     if(score>=90){
//         res = 'A';
//     } else if(score>=80){
//         res = 'B';
//     } else if(score>=70){
//         res = 'C';
//     } else if(score>=60){
//         res = 'D';
//     } else {
//         res = 'E';
//     }
//     printf("Result:%c\n", res);
//     return 0;
// }

//练习3-8 查询水果的单价：有四种水果，苹果，梨，橘子和葡萄，单价分别是3.0元/千克，2.0元/千克，4.1元/千克和10.2元/千克。在屏幕上显示以下菜单(编号和选项)，用户可以连续查询水果的单价，当查询次数超过5次时，自动退出查询；不到5次时，用户可以选择退出。当用户输入编号1~4，显示相应水果的单价(保留一位小数)，输入0退出查询，输入其他编号显示价格为0
// int main(void){
//     int choice, i;
//     double price;
//     printf("[1] apples\n");
//     printf("[2] pears\n");
//     printf("[3] oranges\n");
//     printf("[4] grapes\n");
//     printf("[0] Exit\n");
//     for(i=1; i<=5; i++){
//         printf("Enter your choice:");
//         scanf("%d", &choice);
//         if(choice==0){
//             break;  //break跳出for循环
//         }
//         switch(choice){
//             case 1:price = 3.0; break;
//             case 2:price = 2.0; break;
//             case 3:price = 4.1; break;
//             case 4:price = 10.2; break;
//             default:price = 0; break;
//         }
//         printf("%.1f\n", price);
//     }
//     printf("Thanks!\n");
//     return 0;
// }

//练习3-9 改写例3-4，使用嵌套if-else语句
// int main(void){
//     double x, y;
//     printf("Enter x:\n");
//     scanf("%lf", &x);
//     if(x<=15){  //将x<=15化为大条件
//         if(x>=0){
//             y = 4 * x / 3;
//         } else {
//             y = 0;
//         }
//     } else {
//         y = 2.5 * x - 10.5;
//     }
//     printf("y=f(%f)=%.2f\n", x, y);
//     return 0;
// }

//例4-1 用格雷戈里公式求给定精度的派值。使用格雷戈里公式求派的近似值，要求精确到最后一项的绝对值小于给定精度eps。
// #include <math.h>
// int main(void){
//     int denominator, i, flag;
//     double eps, pi, item;
//     printf("Enter eps:");
//     scanf("%lf", &eps);
//     i = 1;
//     flag = 1;
//     denominator = 1;
//     item = 1.0;
//     pi = 0;
//     while(fabs(item)>=eps){
//         pi = pi + item;
//         i++;
//         flag = -flag;
//         denominator = denominator + 2;
//         item = flag * 1.0 / denominator;
//     }
//     pi = pi + item;
//     pi = pi * 4;
//     printf("pi=%.4f\n", pi);
//     printf("i=%d\n", i);
//     return 0;
// }

//例4-2 统计一批学生的平均成绩与不及格人数。更改例3-3，从键盘输入一批学生的成绩，计算平均成绩，并统计不及格学生的人数
// int main(void){
//     int count, num;
//     double score, total;
//     num = 0;
//     total = 0;
//     count = 0;
//     printf("Enter scores:");
//     scanf("%lf", &score);
//     while(score>=0){
//         total = total + score;
//         num++;
//         if(score<60){
//             count++;
//         }
//         scanf("%lf", &score);
//     }
//     if(num!=0){
//         printf("Average is %.2f\n", total/num);
//         printf("Number of failures is%d\n", count);
//     } else {
//         printf("Average is 0\n");
//     }
//     return 0;
// }

//练习4-3 序列求和1-1/4+1/7-1/10+1/13+1/16+...输入一个正实数eps，计算序列1-1/4+1/7-1/10+1/13+1/16+...的值，精确到最后一项的绝对值小于eps（保留6位小数）
// #include <math.h>
// int main(void){
//     int i, flag;
//     double eps, sum, item;
//     printf("Enter eps:");
//     scanf("%lf", &eps);
//     i = 1;
//     flag = 1;
//     sum = 0;
//     do {
//         item = 1.0 / ( 3 * i - 2);
//         sum = sum + flag * item;
//         i++;
//         flag = -flag;
//     } while(fabs(item)>=eps);
//     printf("%.6f\n", sum);
//     return 0;
// }

//例4-3 统计一个整数的位数。从键盘读入一个整数，统计该数的位数。例如输入12534输出5，输入-99输出2，输入0输出1
// int main(void){
//     int count, number, t_number;
//     count = 0;
//     printf("Enter a number:");
//     scanf("%d", &number);
//     t_number = number;
//     if(t_number<0){
//         t_number = -t_number;
//     }
//     do{
//         count++;
//         t_number = t_number / 10;
//     } while(t_number!=0);
//     printf("It contains %d digits.\n", count);
//     return 0;
// }

//例4-4 逆序输出一个整数的各位数字。输入一个整数，将其逆序输出，例如输入12345输出54321
// int main(void){
//     int number;
//     printf("Enter a number:");
//     scanf("%d", &number);
//     do{
//         printf("%d", number%10);
//         number = number / 10;
//     } while(number!=0);
//     return 0;
// }

//例4-5 判断一个整数是否为素数。输入一个正整数m，判断它是否为素数。素数就是只能被1和自身整除的正整数，1不是素数，2是素数
// #include <math.h>
// int main(void){
//     int m, i, limit;
//     printf("Enter a number:");
//     scanf("%d", &m);
//     if(m<=1){
//         printf("%d is not a prime number.\n");
//     } else if(m==2){
//         printf("%d is a prime number.\n");
//     } else {
//         limit = sqrt(m) + 1;
//         for(i=2; i<=limit; i++){
//             if(m%i==0){
//                 break;
//             }
//         }
//         if(i>limit){
//             printf("%d is a prime number.\n");
//         } else {
//             printf("%d is not a prime number.\n");
//         }
//     }
//     return 0;
// }

//例4-6 猜数游戏。更改例3-1简单的猜数游戏，输入你所猜的整数（假定为1到100），与计算机产生的被猜数相比，若相等显示猜中；若不等，显示与被猜数的大小关系。最多允许猜七次。
// #include <stdlib.h>
// #include <time.h>
// int main(void){
//     int count = 0, flag, mynumber, yournumber;
//     srand(time(0));
//     mynumber = rand() % 100 + 1;
//     flag = 0;
//     while(count<7){
//         printf("Enter your number:");
//         scanf("%d", &yournumber);
//         count++;
//         if(yournumber==mynumber){
//             printf("Lucky you!\n")
//             flag = 1;
//             break;
//         } else if(yournumber>mynumber){
//             printf("Your guess is too big.\n");
//         } else {
//             printf("Your guess is too small.\n");
//         }
//     }
//     if(flag==0){
//         printf("Game Over.\n");
//     }
//     return 0;
// }

//练习4-6 猜数字游戏：先输入2个不超过100的正整数，分别是被猜数mynumber和允许猜测的最大次数n，再输入你所猜的数yournumber，与被猜数mynumber进行比较，若相等，显示猜中；若不等，显示与被猜数的大小关系，最多允许猜n次。如果1次就猜出该数，显示“Bingo！”；如果3次以内猜到该数，则提示“Lucky You！”；如果超过3次但不超过n次猜到该数，则提示“Good Guess！”；如果超过n次都没有猜到，则提示“Game Over”；如果在到达n次之前，用户输入了一个负数也输出“Game Over”，并结束程序。
// int main(void){
//     int count, flag, mynumber, yournumber, n;
//     printf("Enter two integers:");
//     scanf("%d%d", &mynumber, &n);
//     count = 0;
//     flag = 0;
//     while(count<n){
//         printf("Enter your number:");
//         scanf("%d", &yournumber);
//         count++;
//         if(yournumber<0){
//             break;
//         }
//         if(yournumber==mynumber){
//             flag = 1;
//            if(n==1){
//               printf("Bingo!\n");
//            } else if(n<=3){
//                printf("Lucky You!\n");
//            } else {
//                printf("Good Guess!\n");
//            }
//         }
//     }
//     if(flag==0){
//         printf("Game Over\n");
//     }
//     return 0;
// }

//