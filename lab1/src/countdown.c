#include <stdio.h>
#include <unistd.h>

int main(){
    for(int i = 10; i > -1; i--){
        printf("%d\n", i);
        sleep(1);
    }
    return 0;
}