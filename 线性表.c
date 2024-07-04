#include<stdio.h>
#define Maxsize 11

typedef struct{
    int data[Maxsize];
    int length;
}Sqlist;

void InitList(Sqlist *L){
    // 初始化静态数组data的所有元素为0
    for(int i = 0; i < Maxsize; i++){
        L->data[i] = 0;
    };
    // 设置链表长度为0，表示当前链表为空
    L->length = 0;
}