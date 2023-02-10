#include <cstdio>
const int MAX_LEN = 2147483647;
int main(){
    int N=0;
    scanf("%d", &N);
    int lens[N]={0};
    int high = MAX_LEN;
    for(int i=0;i<N;i++){
        scanf("%d", &lens[i]);
        if(lens[i] < high){
            high = lens[i];
        }
    }
    // high 为N个棍子中的最短长度也就是分棍子时每个棍子的最大长度。
    int low = 1;
    // K为每根棍子的长度(至少)
    int K=0;
    scanf("%d", &K);
    int mid = 0;
    int sum = 0;
    while(high >= low){
        mid = (high + low) / 2;
        sum = 0;
        for(int i=0;i<N;i++){
            sum += lens[i] / mid;
        }
        // sum 为 分出棍子的最大数量， 每根棍子的长度为mid
        // 若sum>K，说明mid小了，应该变大
        if(sum>K){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    printf("每段长度最大为%d\n", mid);       
}