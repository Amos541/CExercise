#include<stdio.h>
#define Maxsize 11

typedef struct{
    int data[Maxsize];
    int length;
}Sqlist;

void InitList(Sqlist *L){
    // ��ʼ����̬����data������Ԫ��Ϊ0
    for(int i = 0; i < Maxsize; i++){
        L->data[i] = 0;
    };
    // ����������Ϊ0����ʾ��ǰ����Ϊ��
    L->length = 0;
}