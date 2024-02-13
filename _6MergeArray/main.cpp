#include <stdio.h>
/*
 * 合并数组a,b
 * 数组a,b都有序
 * 数组a更长,重a数组的后边往前遍历
 * 比较a中的实际最后一个元素与b中的实际最后一个元素的大小
 * 较大的放在a的最后
 * 若有剩下的必定为b数组，然后从前往后复制到a中
 */
void merge(int a[],int m,int b[],int n){//m为a的个数,n为b的个数
    int i=m+n-1;//
    int j=m,k=n;
    for(;i>0&&j>0&&k>0;i--){
        if(a[j-1]>b[k-1]){
            a[i]=a[j-1];
            j--;
        }else{
            a[i]=b[k-1];
            k--;
        }
    }
    //还有剩余必是b数组
    for(int i=0;i<k;i++){
        a[i]=b[i];
    }
}
int main() {
    int a[10]={3,3,5,7,9};
    int b[5]={2,4,8,8,10};
    merge(a,5,b,5);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
