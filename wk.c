#include <stdio.h>

//��һ��C����
// int main(){
//     printf("Hello World!\n");
//     return 0;
// }

//0����o
// int main(){
//     int cm = 0;
//     scanf("%d", &cm);
//     int foot = cm / 30.48;
//     int inch = ((cm /30.48) - foot)*12;
//     return 0;
// }��

//�������
// int main(){
//     printf("23+34=%d\n",23+34);
//     return 0;
// }
//����Ǯ
// int main(){
//     int price = 0;
//     printf("�������Ԫ����");
//     scanf("%d", &price);
//     int change = 100 - price;
//     printf("��Ǯ%dԪ��\n", change);
//     return 0;
// }

//�ӷ�
// int main(){
//     int a;
//     int b;
//     printf("����������������");
//     scanf("%d %d", &a, &b);
//     printf("%d + %d = %d\n",a,b,a+b);
//     return 0;
// }
//����Ǯ2
// int main(){
//     const int AMOUNT = 100;
//     int price = 0;
//     printf("�������Ԫ����");
//     scanf("%d",&price);
//     int change = AMOUNT - price;
//     printf("��Ǯ%dԪ��\n",change);
//     return 0;
// }
//�����
// int main(){
//     printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬������\"5 7\"��ʾ5Ӣ��7Ӣ�磺");
//     double foot;
//     double inch;
//     scanf("%lf %lf",&foot,&inch);
//     printf("�����%f�ס�\n",((foot + inch /12)* 0.3048));
//     return 0;
// }

//��ƽ��ֵ
// int main(){
//     int a, b;
//     scanf("%d %d", &a, &b);
//     double c = (a+b)/2.0;
//     printf("%d��%d��ƽ��ֵ��%f\n",a,b,c);
//     return 0;
// }

//�ж�����
// int main(){
//     const  int MINOR = 35;
//     int age = 0;
//     printf("������������䣺");
//     scanf("%d",&age);
//     printf("���������%d�ꡣ\n",age);
//     if (age<MINOR){
//         printf("���������õģ�");
//     }
//     printf("�����������ľ������磬�ú���ϧ�ɡ�\n");
//     return 0;
// }
//����3
// int main(){
//     int price = 0;
//     int bill = 0;
//     printf("�������");
//     scanf("%d",&price);
//     printf("��������ֵ��");
//     scanf("%d",&bill);
//     printf("����%dԪ��\n",bill-price);
//     return 0;
// }
//����4
// int main(){
//     int price = 0, bill = 0;
//     printf("�������");
//     scanf("%d",&price);
//     printf("��������ֵ��");
//     scanf("%d",&bill);
//     if (bill>=price){
//         printf("����%dԪ��\n",bill-price);
//     }
//     return 0;
// }
// ����5
// int main(){
//     int price = 0, bill = 0;
//     printf("�������");
//     scanf("%d",&price);
//     printf("��������ֵ��");
//     scanf("%d",&bill);
//     if (bill>=price){
//         printf("����%dԪ��\n",bill-price);
//     } else{
//         printf("���Ǯ������\n");
//     }
//     return 0;
// }
//��ʱ���
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
//     printf("ʱ�����%dСʱ%d�֡�\n",ih,im);
//     return 0;
// }
//�ȴ�С
// int main(){
//     int a, b;
//     printf("����������������");
//     scanf("%d %d", &a, &b);
//     int max = b;
//     if (a>b){
//         max = a;
//     }
//     printf("����Ǹ�����%d\n",max);
//     return 0;
// }
//�ȴ�С3
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
//     printf("����Ǹ�����%d\n",max);
//     return 0;
// }
//�㹤��
// int main(){
//     const double RATE = 8.25;
//     const int STANDARD = 40;
//     double pay = 0.0;
//     int hours;
//     printf("��������Ĺ���Сʱ����");
//     scanf("%d",&hours);
//     if (hours>STANDARD){
//         pay = STANDARD*RATE + (hours-STANDARD)*1.5*RATE;
//     } else{
//         pay = hours*RATE;
//     }
//     printf("��Ĺ�����%f��\n",pay);
//     return 0;
// }
//��ɼ�
int main(){
    const int PASS = 60;
    int score;
    printf("��������ĳɼ���");
    scanf("%d",&score);
    printf("������ĳɼ���%d��\n",score);
    if (score>=PASS){
        printf("��������\n");
        printf("�ټ���\n");
    } else{
        printf("û����\n");
    }
    return 0;
}
//������
// int main(){
//     printf("%d",10+9*((8+7)%6)+5*4%3*2+3);
//     return 0;
// }