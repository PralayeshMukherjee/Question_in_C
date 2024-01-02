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

// 8.Given starting number and the common difference, find the Nth term of an AP.
#include <stdio.h>
int main() {
    int i,startingNo,commonDifference,Nthterm,sum=0;
    printf("Enter the first term => \n");
    scanf("%d", &startingNo);
    printf("Enter the common difference => \n");
    scanf("%d", &commonDifference);
    printf("Enter the term that you want => \n");
    scanf("%d", &Nthterm);
    sum = startingNo;
    for(i=1;i<Nthterm;i++) {
        sum +=commonDifference;
    }
    printf("The term that you want is => %d\n",sum);
}

//             OR

#include <stdio.h>
int main() {
    int startingNo,commonDifference,Nthterm,N;
    printf("Enter the first term => \n");
    scanf("%d", &startingNo);
    printf("Enter the common difference => \n");
    scanf("%d", &commonDifference);
    printf("Enter the term that you want => \n");
    scanf("%d", &Nthterm);
    N = startingNo + (Nthterm - 1)* commonDifference;
    printf("The term that you want is => %d\n",N);
}

// 9.Given starting number and the common ratio, find the Nth term of a GP.
#include <stdio.h>
int main() {
    int i,startingNo,commonRatio,Nthterm,product=1;
    printf("Enter the first term => \n");
    scanf("%d", &startingNo);
    printf("Enter the Common Ratio => \n");
    scanf("%d", &commonRatio);
    printf("Enter the term that you want => \n");
    scanf("%d", &Nthterm);
    product = startingNo;
    for(i=1;i<Nthterm;i++) {
        product *=commonRatio;
    }
    printf("The term that you want is => %d\n",product);
}

//          OR ToDo
#include <stdio.h>
#include <math.h>
int main() {
    int startingNo,Nthterm,N;
    double commonRatio;
    printf("Enter the first term => \n");
    scanf("%d", &startingNo);
    printf("Enter the common difference => \n");
    scanf("%f", &commonRatio);
    printf("Enter the term that you want => \n");
    scanf("%d", &Nthterm);
    commonRatio = sqrt(Nthterm-1);
    N = startingNo*commonRatio;
    printf("The term that you want is => %d\n",N);
}

// 10.Given starting number and the common difference, find the sum of N terms of an AP.
#include <stdio.h>
int main() {
    int i,startingNo,commonDifference,Nthterm,sum=0;
    printf("Enter the first term => \n");
    scanf("%d", &startingNo);
    printf("Enter the common difference => \n");
    scanf("%d", &commonDifference);
    printf("Enter the term that you want => \n");
    scanf("%d", &Nthterm);

    for(i=1;i<=Nthterm;i++) {
        sum += startingNo;
        startingNo +=commonDifference;
    }
    printf("The Sum is => %d\n",sum);
}

// 11.Given starting number and the common ratio, find the sum of N terms of a GP
#include <stdio.h>
int main() {
    int i,startingNo,commonRatio,Nthterm,product=1,sum=0;
    printf("Enter the first term => \n");
    scanf("%d", &startingNo);
    printf("Enter the Common Ratio => \n");
    scanf("%d", &commonRatio);
    printf("Enter the term that you want => \n");
    scanf("%d", &Nthterm);
    product *= startingNo;
    for(i=1;i<=Nthterm;i++) {
        sum += product;
        product *=commonRatio;
    }
    printf("The term that you want is => %d\n",sum);
}

// 12.Find whether a given number is prime or not.
#include <stdio.h>
int main() {
    int num,count,lastcheck=0;
    printf("Enter your Number => \n");
    scanf("%d", &num);
    if(num==2 || num==1) {
        printf("%d is a prime number \n",num);
    }else{
        for(count=2;count<num;count++) {
            if(num%count==0) {
                lastcheck = 1;
                break;
            }
        }
        if(lastcheck==1) {
            printf("%d is not a prime number\n",num);
        }else{
            printf("%d is a prime number",num);
        }
    }
    return 0;
}

// 13.Find the all prime numbers less than a given number N.
#include <stdio.h>
static void mynumber(int mynum) {
    int n = 0;
    for(int i=2;i<(mynum/2)+1;i++) {
        if(mynum%i==0) {
            n++;
            break;
        }
    }
    if(n==0) {
        printf("%d ", mynum);
    }
}
int main() {
    int N;
    printf("Enter the number => \n");
    scanf("%d", &N);
    printf("All prime numbers less than %d are \n", N);
    for(int i=2;i<=N;i++) {
        mynumber(i);
    }
    return 0;
}

// 14.Swap two numbers using a temporary variable.
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter your first number => \n");
    scanf("%d", &a);
    printf("Enter your second number => \n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("The value of first number is %d\n",a);
    printf("The value of second number is %d\n",b);
    return 0;

}

// 15.Swap two numbers without using a temporary variable.
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter your first variable => \n");
    scanf("%d", &a);
    printf("Enter your second variable => \n");
    scanf("%d", &b);
    printf("Your first and second variable are %d, %d respectively\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Now after changing your first and second variable are %d, %d repectively\n",a,b);
    return 0;
    
}

// 16.Convert a given Celcius temperature to Fahrenheit temperature and vice-versa.
//////// Part-1 (Convert a given Fahrenheit temperature to Celcius temperature)
#include <stdio.h>
int main() {
    float F,C;
    printf("Enter temperature in Fahrenheit => \n");
    scanf("%f", &F);
    C = (F-32)*5/9;
    printf("The temperature in Celcius is => %f\n",C);
    return 0;
}

//////// Part-2 (Convert a given Celcius temperature to Fahrenheit temperature)
#include <stdio.h>
int main() {
    float F,C;
    printf("Enter temperature in Celcius => \n");
    scanf("%f", &C);
    F = C * 9/5 + 32;
    printf("The temperature in Fahrenheit is => %f\n",F);
    return 0;
}

// 17.Find square roots of a quadratic equation, given the coefficients of the equation. If not real roots, report the same.
#include <math.h>
#include <stdio.h>
int main() {
    // Quadratuc Equation is => ax^2 + bx + c 
    double a,b,c,discriminant,root1,root2,realPart,imagPart;
    printf("ax^2 + bx + c = 0, where a, b and c are real numbers \n");
    printf("Enter the first variable a => \n");
    scanf("%lf", &a);
    printf("Enter the second variable b => \n");
    scanf("%lf", &b);
    printf("Enter the third variable => \n");
    scanf("%lf", &c);
    discriminant = b*b - 4*a*c;

    if(discriminant == 0){
        root1 = -b / 2*a;
        root2 = root1;
        printf("root1 => %.2lf, root2 => %.2lf \n",root1,root2);
    } else if(discriminant>0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("root1 => %.2lf, root2 => %.2lf \n",root1,root2);
    } else if(discriminant<0){
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}

// 18.Find the sum of the digits of a given number.
#include <stdio.h>
int main() {
    int n,m,sum=0;
    printf("Enter your number => \n");
    scanf("%d", &n);
    while (n>0)
    {
        m = n%10;
        sum += m;
        n /=10;
    }
    
    printf("The sum of all the digits is => %d",sum);
    return 0;
}

// 19.Whether a given year is a leap year or not? (Feel free to google what's a leap if you're unsure)
#include <stdio.h>
int main() {
    int year;
    printf("Enter the year =>\n");
    scanf("%d",&year);
    if(year%4==0) {
        printf("%d is a leap year\n",year);
    }else{
        printf("%d is not a leap year\n",year);
    }
    return 0;
}