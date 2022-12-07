#include <cstdio>

const int maxn = 100010;
// 挖掘机技术哪家强
int main(){
    int N=0;
    scanf("%d", &N);
    int school[maxn]={0};
    int num=0, score=0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &num, &score);
        school[num]+=score;
    }
    int max = -1;
    int max_num = 1;
    for(int i=1;i<N;i++){
        if(school[i]>max){
            max = school[i];
            max_num = i;
        }
    }
    printf("%d %d\n", max_num, max);
}