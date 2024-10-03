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
    printf("请输入第一个学生的姓名和年龄：");
    scanf("%s %d",s1.name,&s1.age);
    printf("请输入第二个学生的姓名和年龄：");
    scanf("%s %d",s2.name,&s2.age);
    printf("第一个学生的姓名和年龄为：%s %d\n",s1.name,s1.age);
}