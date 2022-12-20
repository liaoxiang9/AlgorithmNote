#include <cstdio>

int main(){
    int a[10]={0};
    scanf("%d %d %d %d %d %d %d %d %d %d",
    &a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]
    );
    int N=0;
    for(int i=0;i<10;i++){
        N += a[i];
    }
    int tmp = N;
    while(N>0){
        if(N==tmp){
            // 第一位数
            for(int i=1;i<10;i++){
                if(a[i]!=0){
                    printf("%d", i);
                    a[i]--;
                    N--;
                    break;
                }
            }
        }else{
            for(int i=0;i<10;i++){
                if(a[i]!=0){
                    printf("%d", i);
                    a[i]--;
                    N--;
                    break;
                }
            }
        }
    }
}