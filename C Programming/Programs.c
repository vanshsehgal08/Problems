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
//P26: WAP to Sort the n numbers in ascending order
//P27: WAP to find Transpose of a matrix
//P28: WAP to print sum of two matrices
//P29: WAP to print multiplication of two 3*3 matrix
//P30: WAP to read and display untill null character is pointed
//P31: WAP to read and display sentence
//P32: WAP to read and display line
//P33: WAP to read a sentence until $ appears and count no of uppercase lowercase char
//P34: WAP to read a sentence until $ appears and count no of char,words,lines
//P35: WAP to read a text and copy first n characters to another array
//P36: WAP to read a text & copy mth to nth char into other array
//P37: WAP to read a text & copy last n char into other array
//P38: WAP to convert Uppercase letter to lowercase letter


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

//P25: Print fibonacci series
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


// P26: Sort the n numbers in ascending order
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


//P27: Transpose of a matrix
#include<stdio.h>
int main() {
   
   
   //Taking input of matrix
   int a[3][3],b[3][3],i,j,;
   printf("\nEnter First Matrix :\n ");
   for (i=0;i<3;i++) {
      for (j=0;j<3;j++) {
         scanf("%d",&a[i][j]);
      }
   }

  
   //Transpose Logic
   for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
        b[i][j] = a[j][i];
      }
   }

   printf("\nTranspose of Matrice : \n");
   for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
         printf(" %d ",b[i][j]);
      }
      printf("\n");
   }

   return 0;
}


//P28: Print sum of two matrices

#include<stdio.h>
int main() {
   
   
   //Taking input of matrix-1 
   int a[3][3],b[3][3],c[3][3],i,j,k;
   printf("\nEnter First Matrix :\n ");
   for (i=0;i<3;i++) {
      for (j=0;j<3;j++) {
         scanf("%d",&a[i][j]);
      }
   }

    //Taking input of matrix-2
   printf("\nEnter Second Matrix:\n ");
   for (i=0;i<3;i++) {
      for (j=0;j<3;j++) {
         scanf("%d",&b[i][j]);
      }
   }

  
   //Addition Logic
   for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
        c[i][j] = a[i][j] + b[i][j];
      }
   }

   printf("\nSum Of Two Matrices : \n");
   for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
         printf(" %d ",c[i][j]);
      }
      printf("\n");
   }

   return 0;
}


//P28: Print sum of two matrices
#include<stdio.h>
int main() {
   
   
   //Taking input of matrix-1 
   int a[3][3],b[3][3],c[3][3],i,j,k;
   printf("\nEnter First Matrix :\n ");
   for (i=0;i<3;i++) {
      for (j=0;j<3;j++) {
         scanf("%d",&a[i][j]);
      }
   }

    //Taking input of matrix-2
   printf("\nEnter Second Matrix:\n ");
   for (i=0;i<3;i++) {
      for (j=0;j<3;j++) {
         scanf("%d",&b[i][j]);
      }
   }

  
   //Subtraction Logic
   for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
        c[i][j] = a[i][j] - b[i][j];
      }
   }

   printf("\nSubtraction Of Two Matrices : \n");
   for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
         printf(" %d ",c[i][j]);
      }
      printf("\n");
   }

   return 0;
}


//P29: Print multiplication of two 3*3 matrix
#include<stdio.h>
int main() {
   
   
   //Taking input of matrix-1 
   int a[3][3],b[3][3],c[3][3],i,j,k;
   printf("\nEnter First Matrix :\n ");
   for (i=0;i<3;i++) {
      for (j=0;j<3;j++) {
         scanf("%d",&a[i][j]);
      }
   }

    //Taking input of matrix-2
   printf("\nEnter Second Matrix:\n ");
   for (i=0;i<3;i++) {
      for (j=0;j<3;j++) {
         scanf("%d",&b[i][j]);
      }
   }

  
   //Multiplication Logic
   for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
         c[i][j]=0;
         for (k=0;k<3;k++) {
            c[i][j] =c[i][j]+ a[i][k]* b[k][j];
         }
      }
   }

   printf("\nMultiplication Of Two Matrices : \n");
   for(i=0;i<3;i++) {
      for(j=0;j<3;j++) {
         printf(" %d ",c[i][j]);
      }
      printf("\n");
   }

   return 0;
}


//P30: Read and display untill null character is pointed
#include<stdio.h>
int main(){
    char a[100];
    int i=0;
    scanf("%c",&a[i]);
    while (a[i]!=' '){
        i+=1;
        scanf("%c",&a[i]);
    }
    
    i=0;
    while (a[i]!='\0'){
        printf("%c",a[i]);
        i+=1;
    }
}



//P31: Read and display sentence
#include<stdio.h>
int main(){
    char a[100];
    int i=0;
    scanf("%c",&a[i]);
    while (a[i]!='\n'){
        i+=1;
        scanf("%c",&a[i]);
    }
    
    i=0;
    while (a[i]!='\n'){
        printf("%c",a[i]);
        i+=1;
    }
}



//P32:Read and display line
#include<stdio.h>
int main(){
    char a[100];
    int i=0;
    scanf("%c",&a[i]);
    while (a[i]!='.'){
        i+=1;
        scanf("%c",&a[i]);
    }
    
    i=0;
    while (a[i]!='.'){
        printf("%c",a[i]);
        i+=1;
    }
}


//P33:Read a sentence until $ appears and count no of uppercase lowercase char
#include<stdio.h>
int main(){
    char a[100];
    int i,uc=0,lc=0;
    printf("Enter Text\n");
    i=0;
    scanf("%c",&a[i]);
    while (a[i]!='$'){
        i++;
        scanf("%c",&a[i]);
    }
    a[i] = '\0';  // Add null terminator to end of string
    i=0;
    while (a[i]!='\0') {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            uc++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z') {
            lc++;
        }
    }
    
    printf("Uppercase count: %d\n", uc);
    printf("Lowercase count: %d\n", lc);
    
    return 0;
}



    
//P34: Read a sentence until $ appears and count no of char,words,lines
#include<stdio.h>
int main(){
    char a[100];
    int i,cc=0,cw=0,cl=0;
    printf("Enter Text\n");
    i=0;
    scanf("%c",&a[i]);
    while (a[i]!='$'){
        i++;
        scanf("%c",&a[i]);
    }
    a[i]='\0';
    i=0;
    while (a[i]!='\0'){
        if (a[i]=='\n'){
            cl++;
        }
        if ((a[i]!='\n' && a[i+1]=='\n')||(a[i]!=' ' && a[i+1]==' ')||(a[i]!='\t' && a[i+1]=='\t')){
            cw++;
        }
        cc++;
        i++;
    }
    printf("\nNo of words: %d",cw);
    printf("\nNo of lines: %d",cl);
    printf("\nNo of characters: %d",cc);
}



//P35: Read a text and copy first n characters to another array
#include<stdio.h>
int main(){
    char a[100],b[100];
    int i,n;
    printf("\nEnter Text:\n")
    i=0;
    scanf("%c",&a[i]);
    while (a[i]!='$'){
        i++;
        scanf("%c",&a[i]);
    }
    a[i]='\0';
    printf("Enter value of n: ");
    scanf("%d",&n);
    i=0;
    while(i<n){
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
    printf("\n\nThe left %d character of text: ",n);
    i=0;
    while(b[i]!='\0'){
        printf("%c",b[i]);
        i++;
    }
}



//P36: Read a text & copy mth to nth char into other array
#include<stdio.h>
int main(){
    char a[100],b[100];
    int i,j,m,n;
    printf("\nEnter Text:\n")
    i=0;
    scanf("%c",&a[i]);
    while (a[i]!='$'){
        i++;
        scanf("%c",&a[i]);
    }
    a[i]='\0';
    printf("Enter value of m,n: ");
    scanf("%d %d",&m,&n);
    i=m;
    j=n;
    while(i<n){
        b[j]=a[i];
        i++;
        j++;
    }
    b[j]='\0';
    printf("\n\nThe %dth to %dth character of text: ",m,n);
    i=0;
    while(b[i]!='\0'){
        printf("%c",b[i]);
        i++;
    }
}



//P37: Read a text & copy last n char into other array
#include<stdio.h>
int main(){
    char a[100],b[100];
    int i,j,n;
    printf("\nEnter Text:\n")
    i=0;
    scanf("%c",&a[i]);
    while (a[i]!='$'){
        i++;
        scanf("%c",&a[i]);
    }
    a[i]='\0';
    printf("Enter value of n: ");
    scanf("%d",&n);
    i=i-n;
    j=0
    while(a[i]!='\0'){
        b[i]=a[i];
        i++;
        j++;
    }
    b[j]='\0';
    printf("\n\nThe last %d character of text: ",n);
    i=0;
    while(b[i]!='\0'){
        printf("%c",b[i]);
        i++;
    }
}



//P38: Convert Uppercase letter to lowercase letter
#include<stdio.h>
int main(){
    char a[100],b[100];
    int i,j;
    printf("\nEnter Text:\n")
    i=0;
    scanf("%c",&a[i]);
    while (a[i]!='$'){
        i++;
        scanf("%c",&a[i]);
    }
    a[i]='\0';
    i=0;
    j=0;
    while(a[i]!='\0'){
        if (a[i]>=65&&a[i]<=90){
            b[j]=a[i]+32;
        }
        else{
            b[j]=a[j];
        }
        i++;
        j++;
    }
    b[j]='\0';
    printf("\nUpper to Lower Text: \n");
    i=0;
    while(b[i]!='\0'){
        printf("%c",b[i]);
        i++;
    }
}









