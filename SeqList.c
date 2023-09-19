#include<stdio.h>
void main(){
    SeqList s;
    s.data = (int*)malloc(sizeof(int)*100);//动态分配内存
    s.MaxSize = 100;
    s.length = 0;
}

typedef struct {
    int *data;//利用指针动态分配内存
    int MaxSize,length;
}SeqList;

