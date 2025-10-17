#include <stdio.h>
#include <string.h>

int main() {

    char s[100000];
    int count[10]={0};
    scanf("%s",s);
    
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0' && s[i]<='9'){
            int digit=s[i]-'0';
            count[digit]++;
        }
    }   
    
    for(int i=0;i<10;i++){
        printf("%d ", count[i]);
    }
     
    return 0;
}
