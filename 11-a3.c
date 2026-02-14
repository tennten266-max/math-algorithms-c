#include<stdio.h>

int gcd(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b){  //(b)
    if(gcd(a,b)==0)return 0;
    return a * b / gcd(a,b);
}



int main(void){ //(c)
    int a,b;
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    printf("gcd=%d\nlcm=%d\n",gcd(a,b),lcm(a,b));
}