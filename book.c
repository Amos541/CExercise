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

//��2-1 ���Hello World!
// int main(void){
//     printf("Hello World!");
//     return 0;
// }

//��2-2 ��ʾ��Programming is fun.���͡�And programming in C is even more fun!����ÿ����ʾһ��
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

//��2-3 �����¶�100�H��Ӧ�������¶ȣ����㹫ʽΪc=5*(f-32)/9
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

//��2-4 ����ˮ��
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

//��2-5 ��ֵ��������ݺ���������һ�������ֵΪ��������initial��ʾ������ֵ���ǰһ����ߵ�ֵfactor����Ŭ���������������Ϊday�����ݹ�ʽ result=initial(1+factor)^day ���������ֵ�����ʱ������λС����
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

//��2-6 ������������lower��upper�����һ�Ż��������¶�ת����ȡֵ��Χ��[lower,upper]��ÿ������һ���϶�
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

//��2-7 ����һ��������n���ۼ����
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

//��2-8 ����һ��������n������1-1/3+1/5-1/7+...��ǰn��֮��
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

//��2-9 ����һ��������n������n!
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

//��2-10 ����һ��������n������һ��2�ĳ˷������2^0��2^n��ֵ,���Ե����ݺ�������2�ĳ˷�
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

//��2-11 ����һ��������n(n<=16)������һ�Ž׳˱����0����n����ֵ��Ҫ����͵��ú���fact(n)����n��������������double
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

//��3-1 �򵥵Ĳ�����Ϸ�����������µ�����(�ٶ�1~100)�������������ı�������ȣ���������ʾ���У����������ʾ�������Ĵ�С��ϵ
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

//��3-2 ��ż�ּң�����һ��������n��������n���Ǹ�������ͳ��������ż�����ж��ٸ�
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

//��3-3 ͳ��ָ������ѧ����ƽ���ɼ��벻��������������һ���Ǹ�����n��������n��ѧ���ĳɼ�������ƽ���֣���ͳ�Ʋ�����ɼ���ѧ������
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

//��3-4 �ֶμ������ˮ�ѣ�����������2-4������ķֶμ���ˮ�ѵ����⡣��Ȼʵ�������в����������ˮ��xС��������������������ʱ�����������һ��������ˮ�Ѽ��㽫�������x<0ʱ��yΪ0��
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

//��ϰ3-2 ������ź�����ֵ����һ������x���㲢����ֶκ���Signmod(x)��ֵ��
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

//��ϰ3-3 ͳ��ѧ��ƽ���ɼ��뼰������������һ��������n��������n��ѧ���ĳɼ�������ƽ���ɼ���ͳ�����м���ѧ��������
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
//         if(score>=60){   //���������޸�һ��
//             count++;
//         }
//     }
//     if(n!=0){
//         printf("Average=%.2f\n", total/n);
//     } else {
//         printf("Average=0\n");
//     }
//     printf("Number of success=%d\n", count); //��ʾ���޸�һ��
//     return 0;    
// }

//��3-5 ���򵥵�����������ʽ������һ����ʽ�硰������ ����� ��������������������ʽ�������������Ҫ��Գ���Ϊ0��������ر���
// int main(void){
//     double value1, value2;
//     char op;
//     printf("Type in an expression:");
//     scanf("%lf %c %lf", &value1, &op, &value2);//���ϵ�����û�пո񣬲��������Ⱑ
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

//��3-7 ͳ��Ӣ����ĸ�������ַ�������һ��������n��������n���ַ���ͳ������Ӣ����ĸ�������ַ��������ַ��ĸ���
// int main(void){
//     int digit, i, letter, n, other;
//     char ch;
//     digit = letter = other = 0;
//     printf("Enter n:");
//     scanf("%d", &n);
//     getchar();  //���ջ��з���scanf ֻ��ȡһ�����������û�����������ͨ���ᰴ�س���������س����ᱻ scanf ��ȡΪһ�����з������������뻺�����С����������������з��������� getchar(); ��������ȡ��������з����������û�������ַ�������ڲ���ʱ���ֽ������Ӱ�죬��������Ϊ���ڲ���ʱû�������ض����������������û�����ֳ�����
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

//��3-8 ��ѯ�Զ��ۻ�������Ʒ�ļ۸񣺼����Զ��ۻ�������������Ʒ����Ƭ�����׻����ɿ����Ϳ��֣��ۼ۷ֱ���ÿ��3.0��2.5��4.0��3.5Ԫ������Ļ����ʾ���²˵�����ź�ѡ����û�����������ѯ��Ʒ�ļ۸񡣵���ѯ�����������ʱ���Զ��˳����������ʱ���û�����ѡ���˳������û�������1~4����ʾ��Ӧ��Ʒ�ļ۸񣨱���1λС����������0���˳���ѯ���������������ʾ�۸�Ϊ0
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
//             break;  //break����forѭ��
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

//��3-9 �������ļ򵥼���������дһ���򵥼��������򣬿ɸ����������������������������мӡ������ˡ������������㣬��Գ���Ϊ0��������ر���Ҫ��ʹ��switch����д
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

//��3-10 ����һ��������n��������n���ַ����ֱ�ͳ�Ƴ����пո��س��������ַ��������ַ��ĸ�����Ҫ��ʹ��switch����д
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

//��ϰ3-7 �ɼ�ת��������һ���ٷ��Ƴɼ�����ת��Ϊ����Ƴɼ����ٷ��Ƴɼ�������Ƴɼ���ת�����򣺴��ڻ����90��ΪA��С��90���Ҵ��ڻ����80��ΪB��С��80���Ҵ��ڻ����70ΪC��С��70���Ҵ��ڻ����60ΪD��С��60��ΪE
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

//��ϰ3-8 ��ѯˮ���ĵ��ۣ�������ˮ����ƻ�����棬���Ӻ����ѣ����۷ֱ���3.0Ԫ/ǧ�ˣ�2.0Ԫ/ǧ�ˣ�4.1Ԫ/ǧ�˺�10.2Ԫ/ǧ�ˡ�����Ļ����ʾ���²˵�(��ź�ѡ��)���û�����������ѯˮ���ĵ��ۣ�����ѯ��������5��ʱ���Զ��˳���ѯ������5��ʱ���û�����ѡ���˳������û�������1~4����ʾ��Ӧˮ���ĵ���(����һλС��)������0�˳���ѯ���������������ʾ�۸�Ϊ0
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
//             break;  //break����forѭ��
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

//��ϰ3-9 ��д��3-4��ʹ��Ƕ��if-else���
// int main(void){
//     double x, y;
//     printf("Enter x:\n");
//     scanf("%lf", &x);
//     if(x<=15){  //��x<=15��Ϊ������
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

//��4-1 �ø��׸��﹫ʽ��������ȵ���ֵ��ʹ�ø��׸��﹫ʽ���ɵĽ���ֵ��Ҫ��ȷ�����һ��ľ���ֵС�ڸ�������eps��
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

//��4-2 ͳ��һ��ѧ����ƽ���ɼ��벻����������������3-3���Ӽ�������һ��ѧ���ĳɼ�������ƽ���ɼ�����ͳ�Ʋ�����ѧ��������
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

//��ϰ4-3 �������1-1/4+1/7-1/10+1/13+1/16+...����һ����ʵ��eps����������1-1/4+1/7-1/10+1/13+1/16+...��ֵ����ȷ�����һ��ľ���ֵС��eps������6λС����
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

//��4-3 ͳ��һ��������λ�����Ӽ��̶���һ��������ͳ�Ƹ�����λ������������12534���5������-99���2������0���1
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

//��4-4 �������һ�������ĸ�λ���֡�����һ�����������������������������12345���54321
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

//��4-5 �ж�һ�������Ƿ�Ϊ����������һ��������m���ж����Ƿ�Ϊ��������������ֻ�ܱ�1��������������������1����������2������
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

//��4-6 ������Ϸ��������3-1�򵥵Ĳ�����Ϸ�����������µ��������ٶ�Ϊ1��100���������������ı�������ȣ��������ʾ���У������ȣ���ʾ�뱻�����Ĵ�С��ϵ�����������ߴΡ�
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

//��ϰ4-6 ��������Ϸ��������2��������100�����������ֱ��Ǳ�����mynumber������²��������n�������������µ���yournumber���뱻����mynumber���бȽϣ�����ȣ���ʾ���У������ȣ���ʾ�뱻�����Ĵ�С��ϵ����������n�Ρ����1�ξͲ³���������ʾ��Bingo���������3�����ڲµ�����������ʾ��Lucky You�������������3�ε�������n�βµ�����������ʾ��Good Guess�������������n�ζ�û�вµ�������ʾ��Game Over��������ڵ���n��֮ǰ���û�������һ������Ҳ�����Game Over��������������
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