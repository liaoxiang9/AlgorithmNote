#include <cstdio>
const int MAXN = 11;
int p[MAXN], hashTable[MAXN] = {false};
int n;

void generate(int index){
    if(index == n+1){
        // 这种情况说明到达递归边界，则可以输出当前排列
        for(int i=1;i<=n;i++){
            printf("%d",p[i]);
        }
        printf("\n");
    }else{
        // 这种递归就需要递归
        for(int x=1;x<=n;x++){
            if(hashTable[x]==false){
                // 这种情况说明x还没有被放入排列中
                p[index] = x;
                hashTable[x] = true;
                generate(index+1);
                // 以x为index的子问题已经解决，需要更新状态空间
                hashTable[x] = false;
            }
        }
    }
}

int main(){
    scanf("%d", &n);
    generate(1);
    return 0;
}