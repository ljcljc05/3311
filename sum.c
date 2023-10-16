#include <stdio.h>

int main(){
    int s = 0;
    for(int i = 0;i<100;i++){
        s += (i+1);
    }
    printf("sum is %d\n", s);
}