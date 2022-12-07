#include <cstdio>
#include <cmath>
int main(){
    int N = 0;
    char c = 0;
    scanf("%d %c", &N, &c);
    int col = (int)round(N / 2);
    for(int i=0; i<col;i++){
        if(i==0){
            for(int j=0;j<N;j++){
                printf("%c",c);
            }
            printf("\n");
        }
        else if(i<col-1){
            for(int j=0;j<N;j++){
                if(j==0 || j==N-1){
                    printf("%c", c);
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        else{
            for(int j=0;j<N;j++){
                printf("%c",c);
            }
        }

    }
}