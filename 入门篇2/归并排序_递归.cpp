#include <cstdio>

const int maxn = 100;
// 实现数组A的两个有序部分的融合
// [L1,R1] [L2,R2]有序,其中L2=R1+1
void merge(int A[], int L1, int R1, int L2, int R2){
    int p1 = L1;
    int p2 = L2;
    int ind = 0;
    int temp[maxn];
    while(p1<=R1 && p2<=R2){
        if(A[p1]<=A[p2]){
            temp[ind++] = A[p1++];
        }else{
            temp[ind++] = A[p2++];
        }
    }
    // 检查剩下的未排序的元素，依次放入
    if(p1<=R1){
        for(int i=p1;i<=R1;i++){
            temp[ind++] = A[i++];
        }
    }
    if(p2<=R2){
        for(int i=p2;i<=R1;i++){
            temp[ind++] = A[i++];
        }
    }
    for(int i=0;i<ind;i++){
        A[L1+i] = temp[i];
    }
}

void mergeSort(int A[], int left, int right){
    while(left < right){
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid+1, right);
        merge(A, left, mid, mid+1, right);
    }
}

int main()
{
    int A[10]= {14,2,4,55,244,12,4,21,44,1};
    mergeSort(A, 0, 9);
    for(int i=0;i<10;i++){
        printf("%d ", A[i]);
    }
    return 0;
}
