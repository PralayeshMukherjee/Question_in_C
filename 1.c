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
// 2.Find the average of the first N natural numbers.
#include <stdio.h> 
int main() {
    int i,N,avg,sum = 0;
    printf("Input your Natural Number =>\n");
    scanf("%d", &N);
    if(N<=0) {
        printf("this is not a valid input");
    }else{
        for(i=N;i>=0;i--) {
            if(i!=0) {
                sum += i;
            }else{
                avg = (sum/N);
                printf("The average of the numbers is = %d\n",avg);
            }
        }
    }
}
// 3.Find the factorial of a number N.
#include <stdio.h> 
int main() {
    int i,N,factorial = 1;
    printf("Input your Natural Number =>\n");
    scanf("%d", &N);
    if(N==0) {
        printf("The factorial of 0 is 1");
    }else if(N<0) {
        printf("This is not a valid input");
    }else{
        for(i=N;i>=0;i--) {
            if(i!=0) {
                factorial *= i;
            }else{
                printf("The average of the numbers is = %d\n",factorial);
            }
        }
    }
}