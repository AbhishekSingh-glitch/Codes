

#include<time.h>

#define pi 3.14

    // function


int main()
// 1 C Program to print text
#include<stdio.h>
int main()
{
    printf("text");
    return 0;
}
// 2 C Program To Read Two Numbers And Print The Sum Of Given Two Numbers.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers to add\n")
    scanf("%d%d",&a,&b);
    a+=b;
    printf("%d",a);
    return 0;
} 
// 3 C Program To Accept Student Roll No, Marks in 3 Subjects and Calculate Total, Average and Printin
#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("Enter roll no.: ");
    scanf("%d",&a);

    printf("Enter marks marks of subjects\n");
    printf("Hindi : "); scanf("%d",&b);
    printf("English : "); scanf("%d",&c);
    printf("Sience : "); scanf("%d",&d);

    int t=b+c+d;
    int A=t/3;
    printf("Total number : (%d/300)",t);
    printf("\nAverage : %d",A);
}
// 4 C Program To Read Three Numbers And Print The Biggest Of Given Three Numbers 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a no. ");
    scanf("%d",&a);
    printf("Enter a no. ");
    scanf("%d",&b);
    printf("Enter a no. ");
    scanf("%d",&c);
//    a=a>b&&a>c?a:b>a&&b>c?b:c;
    a=a>=b&&a>=c?a:b>=a&&b>=c?b:c;
    printf("%d",a);
//     if(a>b)
//         if(a>c) printf("%d",a);
//         else printf("%d",c);
//     else if(a<b)
//         if(b>c) printf("%d",b);
//         else printf("%d",c);
//     else   printf("%d",c);
}
// 5 C Program To Read & Number And Find Whether The Given Number is Even Or Odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter a no.");
    scanf("%d",&a);
    if(a%2==0)
    printf("even");
    else
    printf("odd");
}
// 6 C Program to accept a year and check whether the given year is leap year or not
#include<stdio.h>
int main(){
    int a;
    printf("enter a year to check leap year or not\n");
    scanf("%d",&a);

    if(a%4==0)
        if(a%100==0)
            if(a%400==0)    printf("leap year");
            else    printf("not a leap year");
        else printf("leap year");
    else    printf("not a leap year");
    
    return 0;
}
// 7 C Program to print Individual Digits

// 8 C Program to accept a three digit number and print the sum of individual digits.

// 9 C Program to accept a number and check the given number is Armstrong or not.
#include<stdio.h>
#include<math.h>
int main(){
    int n,a,b,sum=0;
    scanf("%d",&n);
    a=n;
    while(n>0) {
        b=n%10;
        sum+=pow(b,3);
        n/=10;
    }
    if (a==sum)    printf("Armstrong number\n");
    else     printf("not an Armstrong number");
    
    return 0;
}
// 10 C Program to print ODD numbers from 1 to 10
#include<stdio.h>
int main(){
    int a;
    // while(a==0)
    while(a<=10){
    if(a%2!=0)
    printf("d\t",a);
    ++a; //--a;
    }
    return 0;
}
// 11 C Program to print natural numbers from 1 to 20 in Reverse
#include<stdio.h>
int main(){
    int a=20;
    while(a!=0){
        printf("%d\n",a);
        --a;
    }
    return 0;
}
// 12 C Program to print sum of the natural numbers from 1 tο 10.
#include<stdio.h>
int main(){
    int a=10,b;
    while(a>0){
    b+=a;
    --a;   
    }
    printf("%d",b);
}
// 13 C Program to accept a number and print mathematical table of the given no.
#include<stdio.h>
int main(){
    int a,b,c=1;
    printf("enter the no. of which you want table ");
    scanf("%d",&a);
    printf("upto how much ");
    scanf("%d",&b);

    while(b>=c){
        int d=a;
        d*=c;
        ++c;
        printf("%d\n",d);
    }
    return 0;
}
// 14 C Program to print 1 to 10 mathematical tables.
#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Which table you want\n");
    scanf("%d",&n);
    for(i=n;i<=n*10;i=i+n)  //increase the zeroes you want
        printf("%d\n",i);
    return 0;
}
// 15 C Program to print fibonacci series.
#include<stdio.h>
int main(){
    int n, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }

    return 0;
}
// 16 C Program to print numeric pyramid
#include<stdio.h>
int main(){
    int a=5,b=1;                       
    for(int i=0;i<a;i++){
        for(int j=a;j>i;j--) 
        printf(" ");              
        for(int j=0;j<=i;j++)  
            printf("%d ",b);    
        b++;
        printf("\n");
    }
}
// 17 C Program to print numerical pyramid II.
    
// 18 C Program to print numerical diamond.
#include<stdio.h>
int main(){
    int a=4,b=1; 
      for(int i=0;i<=a;i++){
        for(int j=a;j>i;j--)      
        printf(" ");              
        for(int j=0;j<=i;j++)  
            printf("%d ",b);           
        b++;                    
        printf("\n");      
    }             
    b-=2;                
    for(int i=0;i<a;i++){         
        for(int j=0;j<=i;j++)     
        printf(" ");              
        for(int j=a;j>i;j--)   
            printf("%d ",b);        
        b--;                        
        printf("\n");
    }                  
}
// 19 C Program to print character pyramid.
#include<stdio.h>
int main(){
    int a=5; 
    char b='A';
    for(int i=0;i<a;i++){
        for(int j=a;j>i;j--)     
        printf(" ");              
        for(int j=0;j<=i;j++)   
            printf("%c ",b);         
                 
        b++;//  * * * * *
        printf("\n");
    }
}
// 20 C Program to print character diamond.
#include<stdio.h>
int main(){
    int a=4;
    char b='A'; 
      for(int i=0;i<=a;i++){
        for(int j=a;j>i;j--)    
        printf(" ");              
        for(int j=0;j<=i;j++)   
            printf("%c ",b);         
            
        b++;                     
        printf("\n");             
    }             
    b-=2;                
    for(int i=0;i<a;i++){      
        for(int j=0;j<=i;j++)     
        printf(" ");              
        for(int j=a;j>i;j--)   
            printf("%c ",b);       
        
        b--;                        
        printf("\n");
    }                  
}
// 21 C Program to find biggest of two no by using ternary numbers 
#include<stdio.h>
int main(){
    int a,b;
    printf("enter no. to check greater");
    scanf("%d%d",&a,&b);
    a>b?printf("%d is greater",a):printf("%d is greater",b);
    return 0;
}
// 22 C Program to find biggest of four no by using ternary numbers

// 23 C Program to print smallest of four no by using ternary operators

// 24 C Program to accept a year and check the given year is leap or not by using ternary 

// 25 C Program to accept a character in the uppercase and print in lower case
#include<stdio.h>
int main(){
    char a;
    
    scanf("%c",&a);
    int b=a;
    
    if(a>='A'&&a<='Z'){
        b+=32;
        printf("%c",b);
    }
    return 0;
}
// 26 C Program to accept a character in any case and print in another case.
#include<stdio.h>
int main(){
    char a;
    
    scanf("%c",&a);
    int b=a;
    
    if(a>='A'&&a<='Z'){
        b+=32;
        printf("%c",b);
    }
    else if(a>='A'&&a<='Z'){
        b+=32;
        printf("%c",b);
    }
    return 0;
}
// 27 C Program to natural number from 1 to 10 by using while loop
#include<stdio.h>
int main(){
    int a=1;
    while(a<=10){ 
    printf("%d\n",a);
    ++a;
    }
}
// 28 C Program to accept a string and print it by using the wille loop
    
// 29 C Program to accept a string in upper case and print it by lower case
    
// 30 C Program to accept a string in any case and print it by another case.
    
// 31 C Program to accept a string print each word in new line
    
// 32 C Program to accept a string and count no of capital letters, no. of small fetters and no, of special characters
    
// 33 C Program to accept any single digit number and print it in words.
#include<stdio.h>
int main(){
    int a;
    printf("enter a single digit\n");
    scanf("%d",&a);
    
    switch (a){
    case 0:{
    printf("Zero");
    break;
    }
    case 1:{
    printf("One");
    break;
    }
    case 2:{
    printf("Two");
    break;
    }
    case 3:{
    printf("Three");
    break;
    }
    case 4:{
    printf("Four");
    break;
    }
    case 5:{
    printf("Five");
    break;
    }
    case 6:{
    printf("Six");
    break;
    }
    case 7:{
    printf("Seven");
    break;
    }
    case 8:{
    printf("Eight");
    break;
    }
    case 9:{
    printf("Nine");
    break;
    }
    default :{
        printf("not a single digit");
    }
    }
    return 0;
}
// 34 C Program to print prime numbers between 1 to 100
#include<stdio.h>
int main(){
  int a;

  for (int i=2; i<=100; i++) {
    a = 0;
    
    for (int j=2; j<=i/2/*i-1*/; ++j)
      if (i%j == 0) 
        a = 1;

    if (a == 0)
      printf("%d\n", i);
  }
  return 0;
}
// 35 C Program to accept two numbers and print sum of two numbers by using functions 
#include<stdio.h>
int add(); 
int main()
{
    printf("enter two no. to add\n");
    add();
    return 0;
}
add(){
    int a,b;
    scanf("%d%d",&a,&b);
    a+=b;
    printf("%d",a);
    return 0;
}
// 36 C Program to accept a number and find factorial of given number
#include<stdio.h>
int main(){
    int a,b=1;
    printf("enter no. to find factorial");
    scanf("%d",&a);
    while(a>0){
        b*=a;
        a--;
    }
    printf("%d",b);
    return 0;
}
// 37 C Program to accept a number and check the given number Armstrong or not (Processill
    
// 38 C Program to accept a number and print the sum of given and Reverse number
#include<stdio.h>
int main(){
    int a,n,r,b;
    scanf("%d", &a);
    while (a != 0) {
        r = a % 10;
        b = b * 10 +r;
        n+=r;
        a /= 10;
    }
    printf("sum %d\n", n);
    printf("reverse %d", b);
    return 0;
} 
// 39 C Program to accept 10 numbers and print first five numbers in original order and print last five numbers in reverse order.
    
// 40 C Program to accept a string and print the reverse of the given string by using for loop.
    
// 41 C Program to accept a string and check the given string is palindrome or not
    
// 42 C Program to accept values into 3 dimensional array and print
    
// 43 C Program to print upper triangle
    
// 44 C Program to accept two 3 dimensional array and store addition of those into arrays into the third array
    
// 45 C Program to accept a string and find the length of the given string by using functions 
    
// 46 C Program to count the number of words, characters, alphabets, vowels, consonants and digit in a line of text
    
// 47 C Program to accept two string and compare the strings are equal or not
    
// 48 C Program to sort the entered numbers using bubble sort.
    
// 49 C Program to read date month, year and print the next day's' date month, year.
    
// 50 C Program to interchange two values using pointers.

// 51 C Program to print "PASCAL TRIANGLE" Process!!. 
    
// 52 C Program to check whether a given number is perfect or not.
#include<stdio.h>
int main(){
   int a,n=1,b=0,z=0;
   scanf("%d",&a);
   
   while(a>=n){
      if(a%n==0){
       z+=n;
      }
      ++n;
   }
   z-=a;
   if(z==a)
   printf("perfect");
   else
   printf("not perfect");
   
   return 0;
}  
// 53 C Program to check whether a given number is prime number.
#include<stdio.h>
int main(){
   int a,n=1,b=0;
   scanf("%d",&a);
   
   while(a>=n){
      if(a%n==0){
      //  printf("%d ",n);  //for factor
        ++b;
      }
      ++n;
   }
   if(b<=2)
   printf("prime");
   return 0;
}
// 54 C Program to read in number and orint them in matrixterms in all orders.
    
// 55 C Program to search an element using binary search
    
// 56 C Program to accept two number and print the sum of given two number by using pointers
    
// 57 C Programs to multiply two Matrices

// 59 C Program to accept a string and find the length of the string
    
// 60 C program to fibanocci of matrix
    
// 61 C Program a struture which reads 'n' students information (name, 3 subjects marks) and calculite total marks, resuit print them in aparticular format
    
// 62 C Program to find whether a square matrix is a symmetric b) skew symmetric c) none of two
    
// 63 C Program to find area of a triangle when there sides are given. 
    
// 64 C Program to print Armstrong number between 1-500.
#include<stdio.h>
#include<math.h>
int main(){
    int n,a=1,c,b,sum=0;
    while(a<=500){
        n=a;
        while(n>0) {
            b=n%10;
            sum+=pow(b,3);
            n/=10;
        }
        if (a==sum)    printf("%d ",a);
        a++;
    }
    return 0;
}
    
// 66 C Program to print the floyd's' triangle
    
// 67 C Program to read data in 3 structures and print
    
// 68 C Program to print a diagonal matex.
#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++)
        if(i==j) printf("*");
        else printf(" ");
        printf("\n");
    }
}
// 69 C Program to copy contents of one file into another

// 70 C Program to create a file of number and copy odd number into second file and even number into third file
    
// 71 C Program a structure which stores information about hotel which stores information about name grade, room change, no of rooms
    
// 72 C Program which does the below process after reading an odd no af integer
    
// 73 C Program to sort the entered elements using selection sort technique.
    
// 74 C Program to find number whether a is divisible by '11' or not without actual division. 
#include<stdio.h>
int main(){ 
    int a,b,c;
    printf("enter a number to check 11 divisible\n");
    scanf("%d",&a);

    while(a!=0){
        b=a%10+b;
        a/=10;

        c=a%10+c;
        a/=10;
    }
    int d;
    d= b-c;
    //printf("%d\t%d",b,c);

    if(d==0||d==11){
    printf("divisble by 11");
    }
    else{
        printf("\nnot divisble by 11");
    }
    return 0;
}
// 75 C Program to find maximum and minimum of entered 'n' number using arrays.
#include<stdio.h>
int main(){
    int a[],b,l=a[1];
    printf("Enter how many numbers to compare");
    scanf("%d",&b);
    while(i<b){
        scanf("%d",&a[i]);
        ++i;
    }
    i=0;
    while(i<b){
        if(a[i]>l)
        l=a[i];
        ++i;
    }
    printf("%d",l);
}
// 76 C Program to print the following series until the sum exceeds 2.6 term value exceeds 1.5 x+x2/21+x3/31+.......
    
// 77 C Program to print a frequency distribution table for a dass ul 20-students in the foliowing format. The marks range form 1-25.
    
// 78 C Program to accept values into an array and print array in reverse and original format by using three different functions.
#include<stdio.h>
void in(int n,int a[n],int *i){
    while(*i<n){
        scanf("%d",&a[*i]);
        (*i)++;
    }
}
void pr(int n,int a[n],int *i){
    while(*i>=0){
        printf("%d ",a[*i]);
        (*i)--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i=0;
    in(n,a,&i);
    i--;
    printf("reverse\n");
    pr(n,a,&i); 
}
// 79 C Program to Becept vilues into smale dimensional array and print the array in reverse by using pointers
    
// 80 C Program to read a string and print the mimber of characters in each word of the string
   
// 81 C Program to acrept two strings and compare those two strings
    
// 82 C Program to accept a string using pointers and functions
    
// 83 C Program to read a string and print the first two characters of each word in the string
    
// 84 C Program to accept two numbers and print the sum of given two numbers by using pointers reverse of the given string by using functions
    
// 85 C Program to accept a string and print 

// 86 C Program to accept two 3 dimensional array and store subtraction of these two arrays into third array
    
// 87 C Program to accept a single dimensional array and print them by using pointers
    
// 88 C Program to accept two strings and biggest among them 
    
// 89 C Program to print 4 dimentional motro with constant number
    
// 90 C Prongram to accept a string and print each word in reverse

// 91 C Program to accept elements into single dimensional array and print the array in ascending order by using three different arrays.
    
// 92 C Program to accept data and store the given date into file print the date:
    
// 93 C Program to accept data in lower case and store the given data into file into upper case and print the data.
#include<stdio.h>
int main(){
    char a;
    
    scanf("%c",&a);
    int b=a;
    
    if(a>='a'&&a<='z'){
        b-=32;
        printf("%c",b);
    }
    if(a>='A'&&a<='Z'){
        b+=32;
        printf("%c",b);
        
    }
    return 0;
}
// 94 C Program to copy contents of one file into another.
   
// 95 C Program to create a file of numbers and copy oded number into second file and even number into third file and print first character of each word in upper case.
    
// 96 C Program to accept a string in lower case 
    
// 97 C Program to accept two numbers and interchange two Values using functions
#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
// 98 C Program for example of static variable.
    
// 99 C Program to accept a string and print by trailing spaces
    
// 100 C Program to print anti diagonal.
#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++)
        if(i+j==s-1) printf("*");
        else printf(" ");
        printf("\n");
    }
}