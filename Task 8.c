#include<stdio.h>
int main(){

    int  a, b ,gcd, rem;
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
       rem=a%b;
       a=b;
       b=rem;
    }
    gcd =a;
    printf("%d\n",gcd);
    return 0;
}


//run time complexity:O(logn)

