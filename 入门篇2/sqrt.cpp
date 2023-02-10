#include <cstdio>

double square(double x){
    return x*x;
}

double sqrt(int x,double low, double high, double pricision){
    if(x < 0){
        return -1.0;
    }else if(x==0){
        return 0.0;
    }else{
        // 思路：相当于找一个值使得它的平方等于x
        // 如何找呢：二分查找，若中间值的平方大于x，说明根号x应该小于中间值，即应该在low-mid之间
        // 若中间值的平方小于x，说明根号x应该大于中间值，即应该在mid-high之间
        double result = 0.0;
        double mid = 0.0;
        while(high - low > pricision){
            mid = low + (high - low)/2;
            if(square(mid) > x){
                high = mid - pricision;
            }else{
                low = mid + pricision;
            }
        }
        return low;
    }
}


int main(){
    printf("%.5f",sqrt(2,1.0,2.0,1e-5));
}