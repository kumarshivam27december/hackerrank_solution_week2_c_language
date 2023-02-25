#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,h,w,n,i;
    scanf("%d %d",&l,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&w,&h);
        if(w<l || h<l)
        {
           printf("UPLOAD ANOTHER\n") ;
        }
        else
        if(w==h)
        {
            printf("ACCEPTED\n");
        }
        else
        {
            printf("CROP IT\n");
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

