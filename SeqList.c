#include<stdio.h>
void main(){
    SeqList s;
    s.data = (int*)malloc(sizeof(int)*100);//��̬�����ڴ�
    s.MaxSize = 100;
    s.length = 0;
}

typedef struct {
    int *data;//����ָ�붯̬�����ڴ�
    int MaxSize,length;
}SeqList;

