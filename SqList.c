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

//对顺序表L进行遍历并输出每个数据元素的数据值。
void ListVisit(SqList s){
    for (int k = 0; k < s.length; k++)
        printf("%d ", s.data[k]);
}

//假设有一个顶序表L,其存储的所有数据元素均为不重复的正数，查找L中值为e的数据元素，若找到侧返回其下标，若找不到则返回-1。
int Search_e(SqList L,int e){
    for (int k = 0; k < L.length; k++)
        if (L.data[k] == e)
            return k;
    return -1;
}

//假设有一个顺序表L,其存储的所有数据元素均为正数，查找L中第i个数据元素并返回其值。
int Search_loc(SqList L, int i){
    if (L.length < i || i < 1)            //if (i > 0 && i <= L.length)
        return -1;
    return L.data[i-1];
}

//设计一个高效算法，将顺序表L的所有元素逆置，要求算法的空间复杂度为O(1)。
void Reverse(SqList L){
    int temp;
    for (int k = 0; k < L.length/2; k++){
        temp = L.data[k];
        L.data[k] = L.data[L.length-k-1];
        L.data[L.length-k-1] = temp;
    }
}

