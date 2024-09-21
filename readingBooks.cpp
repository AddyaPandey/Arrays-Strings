#include <stdio.h>

 

int main()

{

    int mod = (int)1e7+7;

    long int n,a=0,b=1,c=2,d,i;

    scanf("%ld",&n);

    if(n==1 || n==2)

        printf("%ld",n-1);

    else{

        for(i=3 ; i<=n ; i++){

            d = (c * (a + b)) % mod ;

            a = b;

            b = d;

            c++;

        }

        printf("%ld",d);

    }

    return 0;

}