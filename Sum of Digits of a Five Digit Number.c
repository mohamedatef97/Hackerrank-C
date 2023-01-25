#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum=0,x,y=1,z=10;
    for(int i=1;i<=5;i++)
    {
    x=n%z;
    x=x/y;
    sum+=x;
    z=z*10;
    y=y*10;
    }
    printf("%d",sum);
    return 0;
}
