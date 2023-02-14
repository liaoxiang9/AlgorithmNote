#include <cmath>
#include <cstdio>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int flag = b * b - 4 * a * c;
    if (flag > 0)
    {
        double s1 = (-b + sqrt(flag)) / (2 * a);
        double s2 = (-b - sqrt(flag)) / (2 * a);
        if(a>0){
            printf("%.2f %.2f", s2, s1);
        }else{
            printf("%.2f %.2f", s1, s2);
        }
    }
    else if (flag == 0)
    {
        double s1 = (-b + sqrt(flag)) / (2 * a);
        printf("%.2f", s1);
    }
    else
    {
        printf("No Solution");
    }
}
