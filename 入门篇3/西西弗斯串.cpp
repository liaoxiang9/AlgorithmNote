#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int digit_num = 0;
    int odd_num = 0;
    int even_num = 0;
    int cur;
    int result = 0;
    while (n != 123)
    {
        odd_num = 0;
        digit_num = 0;
        even_num = 0;
        while (n != 0)
        {
            cur = n % 10;
            if (cur % 2 != 0)
                odd_num++;
            else
                even_num++;
            digit_num++;
            n /= 10;
        }
        n = even_num * 100 + odd_num  * 10 + digit_num;
        result++;
    }
    printf("%d", result);
}