#include <stdio.h>
#include <stdlib.h>

int main(){
    int count_H=0, count_T=0;
    printf("Tossing a coin...\n");
    for(int i=1;i<4;i++){
        
        if(rand()%2==0){
        printf("Round%d:Heads\n", i);
        count_H++;
        }
        else {
            printf("Round%d:Tails\n", i);
            count_T++;
        }
    }
printf("Heads:%d, Tails:%d\n", count_H, count_T);

    return 0;
}