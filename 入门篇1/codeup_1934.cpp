#include <cstdio>

int main(){
    int n = 0;
    printf("input  n (1<n<=200)");
    scanf("%d", &n);
    int numbers[n]={0};
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        numbers[i] = a; 
    }
    printf("input x");
    int x = 0;
    scanf("%d", &x);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if(x==numbers[i]){
            printf("%d", i);
            flag = false;
            break;
        }
    }
    if(flag){
        printf("-1");
    }
       
}