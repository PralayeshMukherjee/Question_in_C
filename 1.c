// 1.Find the sum of the first N natural numbers.
#include <stdio.h> 
int main() {
    int i,N,sum = 0;
    printf("Input your Natural Number =>\n");
    scanf("%d", &N);
    if(N<=0) {
        printf("this is not a valid input");
    }else{
        for(i=N;i>=0;i--) {
            if(i!=0) {
                sum += i;
            }else{
                printf("The Sum is = %d\n", sum);
            }
        }
    }
}