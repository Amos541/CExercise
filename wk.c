#include <stdio.h>

//第一个C程序
// int main(){
//     printf("Hello World!\n");
//     return 0;
// }

//0不是o
// int main(){
//     int cm = 0;
//     scanf("%d", &cm);
//     int foot = cm / 30.48;
//     int inch = ((cm /30.48) - foot)*12;
//     return 0;
// }、

//做点计算
// int main(){
//     printf("23+34=%d\n",23+34);
//     return 0;
// }
//找零钱
// int main(){
//     int price = 0;
//     printf("请输入金额（元）：");
//     scanf("%d", &price);
//     int change = 100 - price;
//     printf("找钱%d元。\n", change);
//     return 0;
// }

//加法
// int main(){
//     int a;
//     int b;
//     printf("请输入两个整数：");
//     scanf("%d %d", &a, &b);
//     printf("%d + %d = %d\n",a,b,a+b);
//     return 0;
// }
//找零钱2
// int main(){
//     const int AMOUNT = 100;
//     int price = 0;
//     printf("请输入金额（元）：");
//     scanf("%d",&price);
//     int change = AMOUNT - price;
//     printf("找钱%d元。\n",change);
//     return 0;
// }
//算身高
// int main(){
//     printf("请分别输入身高的英尺和英寸，如输入\"5 7\"表示5英尺7英寸：");
//     double foot;
//     double inch;
//     scanf("%lf %lf",&foot,&inch);
//     printf("身高是%f米。\n",((foot + inch /12)* 0.3048));
//     return 0;
// }

//算平均值
// int main(){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     double c = (a+b)/2.0;
//     printf("%d和%d的平均值是%f\n",a,b,c);
//     return 0;
// }

//判断年龄
// int main(){
//     const  int MINOR = 35;
//     int age = 0;
//     printf("请输入你的年龄：");
//     scanf("%d",&age);
//     printf("你的年龄是%d岁。\n",age);
//     if (age<MINOR){
//         printf("年轻是美好的，");
//     }
//     printf("年龄决定了你的精神世界，好好珍惜吧。\n");
//     return 0;
// }
//找零3
// int main(){
//     int price = 0;
//     int bill = 0;
//     printf("请输入金额：");
//     scanf("%d",&price);
//     printf("请输入面值：");
//     scanf("%d",&bill);
//     printf("找零%d元。\n",bill-price);
//     return 0;
// }
//找零4
// int main(){
//     int price = 0, bill = 0;
//     printf("请输入金额：");
//     scanf("%d",&price);
//     printf("请输入面值：");
//     scanf("%d",&bill);
//     if (bill>=price){
//         printf("找零%d元。\n",bill-price);
//     }
//     return 0;
// }
// 找零5
// int main(){
//     int price = 0, bill = 0;
//     printf("请输入金额：");
//     scanf("%d",&price);
//     printf("请输入面值：");
//     scanf("%d",&bill);
//     if (bill>=price){
//         printf("找零%d元。\n",bill-price);
//     } else{
//         printf("你的钱不够。\n");
//     }
//     return 0;
// }
//算时间差
// int main(){
//     int hour1, minute1;
//     int hour2, minute2;
//     scanf("%d %d", &hour1, &minute1);
//     scanf("%d %d", &hour2, &minute2);
//     int ih = hour2 - hour1;
//     int im = minute2 - minute1;
//     if (im<0){
//         ih--;
//         im+=60;
//     }
//     printf("时间差是%d小时%d分。\n",ih,im);
//     return 0;
// }
//比大小
// int main(){
//     int a, b;
//     printf("请输入两个整数：");
//     scanf("%d %d", &a, &b);
//     int max = b;
//     if (a>b){
//         max = a;
//     }
//     printf("大的那个数是%d\n",max);
//     return 0;
// }
//比大小3
// int main(){
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     int max = 0;
//     if (a>b){
//         if (a>c){
//             max = a;
//         } else{
//             max = c;
//         }
//     } else{
//         if (b>c){
//             max = b;
//         } else{
//             max = c;
//         }
//     }
//     printf("大的那个数是%d\n",max);
//     return 0;
// }
//算工资
// int main(){
//     const double RATE = 8.25;
//     const int STANDARD = 40;
//     double pay = 0.0;
//     int hours;
//     printf("请输入你的工作小时数：");
//     scanf("%d",&hours);
//     if (hours>STANDARD){
//         pay = STANDARD*RATE + (hours-STANDARD)*1.5*RATE;
//     } else{
//         pay = hours*RATE;
//     }
//     printf("你的工资是%f。\n",pay);
//     return 0;
// }
//算成绩
int main(){
    const int PASS = 60;
    int score;
    printf("请输入你的成绩：");
    scanf("%d",&score);
    printf("你输入的成绩是%d。\n",score);
    if (score>=PASS){
        printf("及格哩！\n");
        printf("再见！\n");
    } else{
        printf("没及格。\n");
    }
    return 0;
}
//评论区
// int main(){
//     printf("%d",10+9*((8+7)%6)+5*4%3*2+3);
//     return 0;
// }