#include <cstdio>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    double chiken = (4*a-b)/2.0;
    double rabbit = (b-2*a)/2.0;
    printf("%d %d", (int)chiken, (int)rabbit);
}