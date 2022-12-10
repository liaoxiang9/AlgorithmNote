#include <cstdio>

int main(){
    int N =0;
    scanf("%d", &N);
    int a[N]={0};
    int x=0;
    for(int i=0;i<N;i++){
        scanf("%d",&x);
        a[i]=x;
    }
    int cur_num = 0;
    for(int i=1;i<N;i++){
        cur_num = a[i]; // 记录当前待插入的数字
        if(cur_num > a[i-1]) continue;
        for(int j=0;j<i;j++){
            if(cur_num <= a[j]){//确定了插入位置
                // 将从i-1到j+1的位置的数往前移
                for(int k=i;k>j;k--){
                    a[k] = a[k-1];
                }
                a[j] = cur_num;
                break;
            }
        }
    }
    // 输出
    for(int i=0;i<N;i++){
        printf("%d ", a[i]);
    }
    
}