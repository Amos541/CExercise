#include<stdio.h>
void main(){
    SqList s;
    s.length = 0;
    s.data[0] = 1;
    s.length = s.length + 1;
}

#define MaxSize 100
typedef struct {
    int data[MaxSize];
    int length;
}SqList;

//��˳���L���б��������ÿ������Ԫ�ص�����ֵ��
void ListVisit(SqList s){
    for (int k = 0; k < s.length; k++)
        printf("%d ", s.data[k]);
}

//������һ�������L,��洢����������Ԫ�ؾ�Ϊ���ظ�������������L��ֵΪe������Ԫ�أ����ҵ��෵�����±꣬���Ҳ����򷵻�-1��
int Search_e(SqList L,int e){
    for (int k = 0; k < L.length; k++)
        if (L.data[k] == e)
            return k;
    return -1;
}

//������һ��˳���L,��洢����������Ԫ�ؾ�Ϊ����������L�е�i������Ԫ�ز�������ֵ��
int Search_loc(SqList L, int i){
    if (L.length < i || i < 1)            //if (i > 0 && i <= L.length)
        return -1;
    return L.data[i-1];
}

//���һ����Ч�㷨����˳���L������Ԫ�����ã�Ҫ���㷨�Ŀռ临�Ӷ�ΪO(1)��
void Reverse(SqList L){
    int temp;
    for (int k = 0; k < L.length/2; k++){
        temp = L.data[k];
        L.data[k] = L.data[L.length-k-1];
        L.data[L.length-k-1] = temp;
    }
}

