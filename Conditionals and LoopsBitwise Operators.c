#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) 
{
    int arr[n],and,maxand=0,or,maxor=0,xor,maxxor=0;
    for(int i=0 ; i<n ; i++)
    {
        arr[i]=i+1;
    }
    for(int i=0 ;i<n-1;i++)
    {
        for(int j=i+1 ; j<n;j++)
        {
            and=arr[i]&arr[j];
            if(and>maxand&&and<k)
            {
                maxand=and;
            }
            or=arr[i]|arr[j];
            if(or>maxor&&or<k)
            {
                maxor=or;
            }
            xor=arr[i]^arr[j];
            if(xor>maxxor&&xor<k)
            {
                maxxor=xor;
            }
        }
    }
    printf("%d\n%d\n%d",maxand,maxor,maxxor);
    
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
