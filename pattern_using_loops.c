#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int a;
    a=2*n-1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            
            int top=i-1;
            int left=j-1;
            int right=a-j;
            int bottom=a-i;
            
            int min=top;
            if(left<min){
                min=left;
            }
            if(right<min){
                min=right;
            }
            if(bottom<min){
                min=bottom;
            }
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}
