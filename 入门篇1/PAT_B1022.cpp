#include <cstdio>
 int main(){
    int A = 0;
    int B = 0;
    int D = 0;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &D);
    int C = A+B;
    int ans[30]={0};
    int num=0;
    do{
        ans[num++]=C%D;
        C /= D;
    }while(C!=0);
    for(int i=num-1;i>=0;i--){
        printf("%d", ans[i]);
    }

 }