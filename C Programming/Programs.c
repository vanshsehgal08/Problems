//P1: WAP to print area of square
//P2: WAP to tell if student is Pass/Fail
//P3: WAP to tell if letter entered by user is upper or lower
//P4: WAP to print n factorial
//P5: WAF to calculate square of a number
//P6: WAF to print factorial of n using recursion
//P7: WAF to print fibonacci series using recursion
//P8: WAP to swap 2 integers
//P9: WAP to Pointers in Function call
//P10: WAP to Check if char is vowel or not
//P11: WAP to print Sum of digits
//P12: WAP to Reverse the number.
//P13: WAP to Find the given number is palindrome or not
//P14: WAP to Find number of zeroes in given number
//P15: WAP to Find biggest among 2 nos using ternary operator
//P16: WAP to Find biggest among 3 nos using ternary operator
//P17: WAP to Design a simple calculator using switch case
//P18: WAP to Read & Display 10 numbers
//P19: WAP to Print biggest among 10 numbers
//P20: WAP to Sort the n numbers in ascending order
//P21: WAP to Read the nos cont. and check the number is +ve, -ve or 0
//P22: WAP to Count the no of +ve/-ve/0
//P23: WAP to Count no of odd nos in an array
//P24: WAP to Reverse an array
//P25: WAP to Print fibonacci series (Array)


//P1: Area of square
#include<stdio.h>
int main() {
    float side;
    printf("enter side");
    scanf("%f", &side);
    printf("area is : %f", side * side);
    return 0;
}


//P2: Tell if student is Pass/Fail
#include<stdio.h>
int main() {
    int marks;
    printf("Enter number (0-100): ");
    scanf("%d", &marks);
    if (marks <= 30) {
        printf("FAIL \n");
    } 
    else {
        printf("PASS \n");
    }
    return 0;
}


//P3: Tell if letter entered by user is upper or lower
#include<stdio.h>
int main() {
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("upper case");}
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lower case");
    }
    else {
        printf("not english letter");
    }
    return 0;
}


//P4: Print n factorial
#include<stdio.h>
int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    int fact = 1;
    for(int i=1; i<n; i++) {
        fact=fact * i;
    }
    printf("final factorial is %d", fact);
    return 0;
}


//P5: Function to calculate square of a number
# include <stdio.h>
int calcSquare(int n);
int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("square is : %d", calcSquare(n));
    return 0;
}
int calcSquare(int n) {
    return n * n;
}


//P6: Function to print factorial of n using recursion
# include <stdio.h>
int factorial(int n);
int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("factorial is : %d", factorial(n));
    return 0;
}
int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    int factnm1 = factorial(n-1);
    int factn = factnm1 * n;
    return factn;
}


//P7: Function to print fibonacci series using recursion
#include<stdio.h>
int fibonacci(int num){
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1; 
    }
    else{
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
int main()
{
    int num; 
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); 

    for (int i = 0; i < num; i++){
        printf("%d ", fibonacci(i)); 
    }
    return 0;
}


//POINTERS
#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", _age);
    //address
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    //data
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    return 0;
}


//P8: Program to swap 2 integers
# include <stdio.h>
void swap(int a, int b);
void _swap(int* a, int *b);
int main() {
    int x = 3, y = 5;
    
    //call by value
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);
    
    //call by reference
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);
    
    return 0;
}
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}
void _swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}


//P9: Pointers in Function call
# include <stdio.h>
void square(int n);
void _square(int* n);
int main() {
    int number = 4;
    //call by value
    square(number);
    printf("n is : %d\n", number);
    //call by reference
    _square(&number);
    printf("n is : %d\n", number);
    return 0;
}
void square(int n) {
    n = n * n;
    printf("square is : %d\n", n);
}
void _square(int* n) {
    *n = *n * *n;
    printf("square is : %d\n", *n);
}


//P10: Check if char is vowel or not
#include<stdio.h>
int main(){
    int ch;
    printf("Enter char: ");
    scanf("%lc",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("%c is a vowel",ch);
    }
    else{
        printf("%c is not a vowel",ch);
    }
}


//P11: Sum of digits
#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    while (n>0){
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("Sum is %d",sum);
    
}


//P12: Reverse the number
#include<stdio.h>
int main(){
    int n,r,sum=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    while (n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("Reversed number is %d",sum);
    
}


//P13: Find the given number is palindrome or not
#include<stdio.h>
int main(){
    int n,r,rev=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    int num=n;
    while (n>0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if (num==rev){
        printf("Pallindrome");
    }
    else{
        printf("Not Pallindrome");
    } 
    return 0;
    
}


//P14: Find number of zeroes in given number
#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n != 0){
        if(n % 10 == 0){
            count++;
            n=n/10;
        }
        else{
            break;
        }
    }
    printf("%d", count);
    return 0;
}


//P15: Find biggest among 2 nos using ternary operator
#include<stdio.h>
int main(){
    int n1,n2,c;
    printf("Enter Number 1: ");
    scanf("%d", &n1);
    printf("Enter Number 2: ");
    scanf("%d", &n2);
    n1>n2 ? printf("%d",n1) : printf("%d",n2);
    return 0;

}


//P16: Find biggest among 3 nos using ternary operator
#include <stdio.h>
int main(){
    int n1 = 5, n2 = 10, n3 = 15, max;
    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    printf("Largest number among %d, %d and %d is %d.",n1, n2, n3, max);
    return 0;
}


//P17: Design a simple calculator using switch case
#include<stdio.h>
int main() {
    char ch;
    int a,b,c;
    printf("Enter num1,op,num2: ");
    scanf("%d%c%d",&a,&ch,&b);
    switch(ch) {
        case '+': 
        c=a+b;
        printf("Sum is %d",c);
        break;
        
        case '-': 
        c=a-b;
        printf("Difference is %d",c);
        break;
        
        case '/':
        c=a/b;
        printf("Division is %d",c);
        break;
        
        case '*':
        c=a*b;
        printf("Multiplication is %d",c);
        break;
        
    default:
    printf("Invalid Operator");
    }
    return 0;
}


//P18: Read & Display 10 numbers
#include<stdio.h>
int main(){
    int arr[10],i;

    //Taking input
    for(i=0;i<=9;i++){
        printf("Enter Num %d: ",(i+1));
        scanf("%d",&arr[i]);
    }
    
    //Displaying the output
    printf("\n");
    printf("Output\n");
    i=0;
    while (i<10){
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}


//P19: Print biggest among 10 numbers
#include<stdio.h>
int main(){
    int arr[10],i,big=0;
    i=0;
    //Taking input of 10 numbers
    while (i<10){
        printf("Enter Num %d: ",(i+1));
        scanf("%d",&arr[i]);
        if (arr[i]>big){
            big=arr[i];
        }
        i++;
    }
    printf("Biggest number is: %d",big);
    return 0;
}


//P20: Sort the n numbers in ascending order
#include<stdio.h>
int main(){
    int a[],i,j,n,temp;
    printf("How many integers you wanna enter: ");
    scanf("%d",&n);
    i=0;
    while (i<n){
        scanf("%d",&a[i]);
        i+=1;
    }
    i=0;
    while (i<n){
        j=i+1;
        while (j<n){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            j=j+1;
        }
        i=i+1;
    }
    printf("Numbers in inc order are: ");
    i=0;
    while (i<n){
        printf("%d\t",a[i]);
        i+=1;
    }
}


//P21: Read the nos cont. and check the number is +ve, -ve or 0
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    while (n!='\n'){
        if (n>0){
            printf("Number is +ve\n");
        }
        else if(n<0){
            printf("Number is -ve\n");
        }
        else{
            printf("Number is 0\n");
        }
        printf("Enter Number: ");
        scanf("%d",&n);
    }
}


//P22: Count the no of +ve/-ve/0
#include<stdio.h>
int main(){
    int n,count_p=0,count_n=0,count_0=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    while (n!='\n'){
        if (n>0){
            count_p+=1;
        }
        else if(n<0){
            count_n+=1;
        }
        else{
            count_0+=1;
        }
        printf("Enter Number: ");
        scanf("%d",&n);
    }
    printf("Count of +ve no: %d\n",count_p);
    printf("Count of -ve no: %d\n",count_n);
    printf("Count of zeroes: %d\n",count_0);
}


//P23: Count no of odd nos in an array
#include <stdio.h>
int countOdd (int arr[], int n);
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d", countOdd (arr, 6));|
    return 0;
}
int countOdd (int arr[], int n) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 != 0) { // odd
            count++;
        }
    }
    return count;
}

//P24: Reverse an array
void reverse(int arr[], int n);
void printArr(int arr[], int n);
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArr(arr, 5);
    return 0;
}
void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}

//25: Print fibonacci series
#include<stdio.h>
int main() {
    int n;
    printf("Enter n (n>2): ");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i= 2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2]; // important
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
}
