#include <cstdio>

int main(){
    int N = 0;
    scanf("%d", &N);
    int a[N];
    int x=0;
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        a[i]=x;
    }
    int temp=0;
    int min = 0;
    int min_ind = 0;
    for(int i=0;i<N-1;i++){
        min = a[i]; // 让当前值作为最小值
        min_ind = i;
        for(int j=i+1;j<N;j++){
            if(a[j]<min){
                min = a[j];
                min_ind = j;
            }
        }// 找到i到最后一个元素的范围内的最小值
        if(min_ind!=i){
            temp = a[i];
            a[i] = min;
            a[min_ind] = temp;
        }
    }

    // 输出
    for(int i=0;i<N;i++){
        printf("%d ", a[i]);
    }
}