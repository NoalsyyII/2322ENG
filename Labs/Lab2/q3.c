#include <stdio.h>

int main(){
    
    int num;

    printf("Enter number >>");

    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("Factor found! %d\n", i);
        }
    }

    return 0;
}