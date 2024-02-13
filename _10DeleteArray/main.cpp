#include <stdio.h>
#define MaxSize 50
/*
 * 删除链表中的指定数
 * 顺序存储
 */
struct SqList{
    int data[MaxSize];
    int length;
};
void deleteArray(struct SqList* list,int min,int max){
    int j=0;
    for(int i=0;i<list->length;i++){
        if(list->data[i]>3 && list->data[i]<6){
            continue;
        }else{
            list->data[j]=list->data[i];
            j++;
        }
    }
    list->length=j;//更新数组的长度
}


int main() {
    struct SqList list;
    list.length=10;
    for(int i=0;i<list.length;i++){
        list.data[i]=i+1;
    }

    for(int i=0;i<list.length;i++){
        printf("%d ",list.data[i]);
    }
    printf("\n");

    deleteArray(&list,3,6);


    for(int i=0;i<list.length;i++){
        printf("%d ",list.data[i]);
    }


    return 0;
}
