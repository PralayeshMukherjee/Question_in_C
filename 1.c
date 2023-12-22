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
    return 0;
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
    return 0;
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
    return 0;
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
    return 0;
}

// 5.Given a continuous stream of numbers (positive or negative, excluding 0), find the number is even or odd.When 0 is entered, the program should stop.
#include <stdio.h>
int main() {
    int i,N;
    for(int i=1;i<__INT_MAX__;i++) {
        printf("Enter the number => \n");
        scanf("%d", &N);
        if(N==0) {
            printf("this is not a valid input \n");
            break;
        }else {
            if(N%2==0) {
                printf("this number is even \n");
            }else {
                printf("this number is odd \n");
            }
        }
    }
    return 0;
}

// 7.Given a continuous stream of numbers (positive or negative, excluding 0), find the number of odd numbers entered, number of even numbers entered and the total number of numbers entered. When 0 is entered, the program should stop.
#include <stdio.h>
int main() {
    int i,N,oddCount=0,evenCount=0,count=0;
    for(int i=1;i<__INT_MAX__;i++) {
        printf("Enter the number => \n");
        scanf("%d", &N);
        if(N==0) {
            break;
        }else {
            count++;
            if(N%2==0) {
                evenCount++;
                printf("this number is even \n");
            }else {
                oddCount++;
                printf("this number is odd \n");
            }
        }
    }
    printf("The total number I entered here is => %d\n",count);
    printf("The total odd number I entered here is => %d\n",oddCount);
    printf("The total even number I entered here is => %d\n",evenCount);
    return 0;
}