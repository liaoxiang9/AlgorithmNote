#include <cstdio>
#include <cmath>
const int MAXN=11;
int n=0;
int p[MAXN], hashTable[MAXN]={false};
int count=0;
void generate(int index){
    if(index==n+1){
        bool flag =true;
        // for循环判断是否有两个皇后在同一斜线上
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                // 两个皇后在同一斜线上的条件：|i-j|==|p[i]-p[j]|（行差等于列差）
                if(abs(i-j)==abs(p[i]-p[j])){
                    flag = false;
                }
            }
        }
        if(flag==true) count++;
    }else{
        for(int x=1;x<=n;x++){
            if(hashTable[x]==false){
                p[index] = x;
                hashTable[x] = true;
                generate(index+1);
                hashTable[x] = false;
            }
        }
    }
}

int main(){
    scanf("%d", &n);
    generate(1);
    printf("%d", count);
    return 0;
}
