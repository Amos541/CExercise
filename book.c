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
int main(){
    int n, i;
    scanf("������һ����С��2��������%d",&n);
    for(i=2;i * i<n;i++){
        if(n%i==0){
            printf("%d��������",n);
            break;
        }
    };
    printf("%d������",n);
    return 0;
}

//