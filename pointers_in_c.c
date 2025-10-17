#include <stdio.h>

void update(int *a,int *b) {
    int temp=*a;
    *a=*a+*b;
    *b=abs(temp-*b);  
}

int main() {
    int a, b;
   
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
