#include<stdio.h>
typedef struct stu1{
    char name[5];
    int age;
}stu1;

struct stu2{
    char name[5];
    int age;
}stu2;

int main(){
    stu1 s1;
    struct stu2 s2;
    printf("�������һ��ѧ�������������䣺");
    scanf("%s %d",s1.name,&s1.age);
    printf("������ڶ���ѧ�������������䣺");
    scanf("%s %d",s2.name,&s2.age);
    printf("��һ��ѧ��������������Ϊ��%s %d\n",s1.name,s1.age);
}