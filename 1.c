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
// 4.Given 3 numbers, find their maximum and minimum
// ToDo: if 1st and 2nd are same but less than 3rd 
#include <stdio.h> 
int main() {
    int A,B,C;
    printf("Input first number => \n");
    scanf("%d", &A);
    printf("Input second number => \n");
    scanf("%d", &B);
    printf("Input third number => \n");
    scanf("%d", &C);
    if(A>B) {
        if(A>C) {
            printf("A is maximum");
        }
    }else if(A>=B) {
        if(A>C) {
            printf("A and B are maximum");
        }
    } else if(B>C) {
        printf("B is maximum");
    }else if(B>=C) {
        printf("B and C are maximum");
    } else if(C>A) {
        printf("C is maximum");
    } else if(C>=A) {
        printf("C and A are maximum");
    }
    printf("\n");
    if(A<B) {
        if(A<C) {
            printf("A is minimum");
        }
    } else if(B<C) {
        printf("B is minimum");
    } else if(C<A) {
        printf("C is minimum");
    }
    printf("\n");
    if(A==B) {
        if(A!=C) {
           printf("A and B are same");
        }else {
            printf("A, B and C are same");
        }
    }else if(B==C) {
        if(B!=A) {
            printf("B and C are same");
        } else{
            printf("A, B and C are same");
        }
    }else if (A==C) {
        if(A!=B) {
            printf("A and C are same");
        } else {
            printf("A, B and C are same");
        }
    }
}