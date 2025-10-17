#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char s[100000];
    
    scanf("%[^\n]",s);
    
    char*token=strtok(s," ");
    while(token!=NULL){
        printf("%s\n",token);
        token=strtok(NULL," ");
    }
  
  
    return 0;
}
