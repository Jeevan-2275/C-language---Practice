Q  1 Hello World
//include <stdio.h>
// int main(){
//     printf("hello world!");
//     return 0;
//                   }

Q  2   sum of number
// #include <stdio.h>
// int main() {
//     int a=5;
//     int b=6;
//     printf("sum of two number=%d ",a+b);
 //     return 0;
// }
Q  3 largest number
//#include <stdio.h>
// int main() {
// int a=5;
// int b=8;
// if (a>b){
//         printf("a is greater than b ");
// }else if (a<b){
//             printf("b  is greater than a ");
//             }else{
//                printf("both are same");
//             }
//             return 0;
// }

 #include <stdio.h>
 int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf(" %d %d %d", &a, &b, &c);
    if (a > b && a > c){
      printf("Largest: %d", a);
    }
    else if (b > c) {
    printf("Largest: %d", b);
    }
    else {
        printf("Largest: %d", c);
    }

    return 0;
}
Q   4 even or odd
// #include <stdio.h>

// int main() {
// int number=6;
// if (number%2==0){
//         printf("number is even ");
// }else {
//             printf("number is odd ");
//             }
//             return 0;
// }
Q   5 factorial
// #include <stdio.h>

// int main() {
// int number=5;
// int factorial= 1;
// for(int i=1;i<=number;i++){
//     factorial=factorial*i;
// }
    //printf("%d",factorial);
  //  return 0;
// }

Q   6 Reverse number
// #include <stdio.h>
// int main() {
// int num=56325;
// int reversed=0;
// while(num!=0){
//     reversed=reversed*10+num%10;
//     num=(num-num%10)/10;
// }
// printf("%d",reversed);
// return 0;
// }



Q  7 palindrome
 #include <stdio.h>
int main() {
int num=121;
int reversed=0;
int ori = num;
while(num!=0){
    reversed=reversed*10+(num%10);
    num=num/10;
}if(ori==reversed){
    printf("num is palindrome");
}else{
        printf("num is  not palindrome");
}
return 0;
}




#include<stdio.h>
#include<string.h>
int main() {
  char str[]="mayur";
 int palindrome=0;
 int i;
 for(i=0;i<strlen(str);i++){
    if( str[i]!=str[strlen(str)-1-i]){
        Palindrome =1;
    }
 }if(Palindrome==1){
     printf("not Palindrome");
 }else {
printf("Palindrome");
     }
 return 0;
}




Q  8 sum of digit
// #include <stdio.h>

// int main() {
// int a=555;
// int sum=0;
// while(a!=0){
//     sum= sum+a%10;
// a=a/10;
// }
//     printf("%d",sum);

//     return 0;
// }
Q 9 prime no.
// #include <stdio.h>
// int main() {
// int num=5;
// int a=0;
// for(int i=2;i<num/2;i++){
//     if(num%i==0){
//         a=1;
//     }
// }
// if(a==0){
//     printf("prime");
// }else{
//         printf(" not prime");
// }
//     return 0;
// }

Q   10 fibbonac
// # include <stdio.h>
// int main(){
//     int i;
//     int a =0;
//     int b=1;
//     int c=3;
//     int n=6;
//     for(i=1;i<=n;i++){
//         int c=a+b;
//             printf("%d\n",c);
//             a=b;
//             b=c;
//     }
//     return 0;
// }
Q  11 GCD

// #include <stdio.h>
// int main() {
// int a=24;
// int b=36;
// while(a!=b){
//     if(a>b){
//         a=a-b;
//     }else{
//         b=b-a;
//     }
// }
//     printf("%d",a);

//     return 0;
// }

Q  12 lcm
// #include <stdio.h>
// int main() {
// int num1=24;
// int num2=36;
// int a,b;
// a=num1;
// b=num2;
// while(a!=b){
//     if(a>b){
//         a=a-b;
//     }else{
//         b=b-a;
//     }
// }
// int gcd =a;
// int lcm=(num1*num2)/gcd;
//     printf("%d",lcm);
//     return 0;
// }


Q   13 leap year check
// #include <stdio.h>
// int main() {
//     int year=2020;
//     if((year%4==0&& year%100!=0)||year%400==0){
//     printf("leap year");
//     }else{
//         printf("not leap year");
//     }
//     return 0;
//     }


Q  14 caculator    
// #include <stdio.h>
// int main()   {
// int a=5;
// int b=6;
// char objj;
// printf("enter the sign :");
// scanf("%c",&objj);
// if(objj=='+'){
//     printf("%d",a+b);
// }else if(objj=='-'){
//     printf("%d",a-b);
// }else if(objj=='*'){
// printf("%d",a*b);
// }else if(objj=='/'){
//     printf("%d",a/b);
// }


//     return 0;
// }
Q  15 sum of array
// #include <stdio.h>

// int main() {
//     int array[8]={1,2,3,5,6,9,7,8};
//     int length=sizeof(array)/sizeof(array[0]);
//     int sum=0;
//     for(int i=0;i<length;i++){
//         sum=sum+array[i];
//     }
//     printf("%d",sum);

//     return 0;
// }
 Q   16 largest element
// #include <stdio.h>

// int main() {
//     int array[]={1,2,3,5,6,9,7,8};
//     int length=sizeof(array)/sizeof(array[0]);
//     int largest=array[0];
//     for(int i=1;i<length;i++){
//        if(array[i]>largest){
//            largest=array[i];
//        } 


//        }
//     printf("%d",largest);

//     return 0;
// }
Q 17 string length
// #include <stdio.h>

// int main() {
//     int array[8]={1,2,3,5,6,9,7,8};
//     int length=sizeof(array)/sizeof(array[0]);
    
//     printf("%d",length);

//     return 0;
// }
 Q  18 string reverse
// #include <stdio.h>
// int main(){
//     char str[] = "Hello, World!";  
//     int length = sizeof(str)-1;
//     char temp;
//     for (int i = 0; i < length / 2; i++) {
//         temp = str[i];
//         str[i] = str[length - 1 - i];
//         str[length - 1 - i] = temp;
//     }
//     printf("%s", str);
//     return 0;
// }
Q 19 swaping two numbers
// #include <stdio.h>
// int main() {
//     int a = 2, b = 5;
//     a = a + b;  
//     b = a - b;  
//     a = a - b; 
//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }
Q 20 swap two number using third variable
// #include <stdio.h>
// int main() {
//     int num1, num2, temp;
//   num1=2;
//   num2=5;
//     printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
//     return 0;
// }

Q 21 ASCII VALUE
#include <stdio.h>

int main() {
char c ='a';

    printf("%d",c);

    return 0;
}
Q  22 celcius to fahrenheit
#include <stdio.h>

int main() {
int celsius=0;
 float a=(1.8*celsius)+32;
    printf("%.f",a);

    return 0;
}
Q 23 fahrenheit
#include <stdio.h>


int main() {
int farenhit=77;
   float a=(farenhit-32)*5/9;
printf("%.f",a);

    return 0;
}

Q  24 sum first N natural number
#include <stdio.h>

int main() {
int n=5;
int sum=((n+1)*n)/2;

    printf("%d",sum);

    return 0;
}
Q25   vowel or consonant
#include <stdio.h>
int main() {
 char str='b';
if(str=='a'||str=='e'||str=='i'||str=='o'||str=='u'||str=='A'||str=='E'||str=='I'||str=='O'||str=='U'){
    printf("vowel");
}else{
    printf("consonant");
}
    return 0;
}

Q  26  check alphabet, digit,or Special  character 
#include <stdio.h>

int main() {
   char ch='@';
   if((ch>='a'&&ch<='Z'||ch>='A'&&ch<='Z')){
       printf("%c is an alphbet .",ch);
       }else if(ch>='0'&&ch<='9'){
           printf("%C is an digit.",ch);
       }else{

    printf("%c is an special char.",ch);
    }return 0;
}

Q  27  Count the number of digits in an 
integer
#include <stdio.h>

int main() {
char str[]="abcdefghijujkhij";
int len=sizeof(str)-1;
int count=0;
while(str[count]!=0){
    count++;
}

    printf("%d",count);

    return 0;
}

Q 28  reverse a string
#include <stdio.h>

int main() {
char str[]="Hello,World";
int length=sizeof(str)-1;
int i=0;
char temp;
for(i=0;i<length/2;i++){
    temp=str[i];
    str[i]=str[length-1-i];
    str[length-1-i]=temp;
}    printf("%s",str);

    return 0;
}



Q  29  Alphabetical of order of Two string
#include <stdio.h>
# include <string.h>
int main() {
char str1[]="ball";
char str2[]="bananna";
if(strcmp(str1,str2)< 0){
    printf("the strings are in alphbetical order.\n");
}else{
    printf("the strings are not in alphbetical order.\n");
}
    return 0;
}

Q 30 power of number
#include <stdio.h>
# include <math.h>
int main() {
int num=8;
int a=sqrt(num);
if(a*a==num){
    printf("a raise to 2");
    
}else if(a*a*a==num){
    printf("a raise to 3");
}

    return 0;
}

Q  31  prime number between two number
#include <stdio.h>

int main() {
int start=2;
int end=100;
for(int i=start; i<=end;i++){
    int is_prime=1;
    if(i<=1){
        is_prime=0;
}else{
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            is_prime=0;
            break;
        }
    }
}
if(is_prime){
    printf("%d\n",i);
    }
}
    return 0;
}

Q  32  Armstrong  number
#include <stdio.h>
#include<math.h>

int main() {
   int number,ori,rem,arm=0,len=0,multiplier;
   printf("enter the number : ");
   scanf("%d",&number);
   ori=number;
   while(number!=0){
       number=number/10;
       len++;
   }
   number=ori;
   while(number!=0){
       rem=number%10;
       multiplier=pow(rem,len);
       arm=arm+multiplier;
       number=number/10;
   }
   if(ori==arm){
       printf("%d is the Armstrong Number",arm);
   }
   else{
       printf("%d is not the armstrong number",arm);
   }
   

    return 0;
}


#include <stdio.h>
#include <string.h>
#include<math.h>
int main() {
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    int ori=num;
    int len =log10(num)+1;
    int rem;
    int cube;
    int arm=0;
    while(num>0){
        rem=num%10;
        cube=pow(rem,len);
        arm=arm+cube;
        num=num/10;
      }
    if(arm==ori){
        printf("it is an arms");
        }else{
            printf("it is not arms");
        }         
    return 0;
}



Q  33 Average number in an array
# include<stdio.h>
int main() {
    
int arr[]={1,2,3,4,5,6,7};
int i;
int sum=0;
int len=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<len;i++){
    

 sum=sum+arr[i];

}
int avg=sum/len;
printf("%d",avg);
    return 0;
}

Q 34 The second largest no. 
in an array
#include <stdio.h>

int main() {
int arr[]={1,2,3,6,68,55,3,63};
int len = sizeof(arr)/sizeof(arr[0]);
int largest=arr[0];
int second_largest=-1;
for(int i=0;i<len;i++){
    if (arr[i]>largest){
        largest=arr[i];
        }
}
for(int i=0;i<len;i++){
    if (arr[i]>second_largest&&arr[i]<largest){
        second_largest=arr[i];
    }
}
if(second_largest==-1){
   printf("there is nio second largest element.\n");
 
}else{
    printf("The second_largest element is %d.\n",second_largest);
}
    return 0;
}


Q 35 Write a program to check if a given number is a perfect square. 
// #include <stdio.h>
// # include <math.h>
// int main() {
//   int square=81;
//   int a=sqrt(square);
//   if(a*a==square){
//       printf("it is a perfect square");
//   }else{
//          printf("it is a not perfect square");
   
//   }

//     return 0;
// }

print length without using str.len
#include <stdio.h>
int main() {
    int num=25465;
    int length=0;
    for(int i=num;i!=0;i=(i-(i%10))/10){
        length++;
    }
    printf("%d",length);
     return 0;
}


fibbonacci using recursion
#include <stdio.h>

int fibo(int a){
if(a<=1){
return a;
}
return fibo(a-1)+fibo(a-1);

}

int main() {
int a=6;
printf("fibo is %d",fibo(a));

    return 0;
}

recursion using factorial
#include <stdio.h>
int FACT(int a){
    if(a<=1){
        return a;
    }
    return a*FACT(a-1);
}
int main() {
   int a=5;
printf("%d",FACT(a));
    return 0;
}

print upto n numbers
#include <stdio.h>
 int FACT( int a){
   if(a<=0){
       return 1;
   }
   FACT(a-1);
       printf("%d",a);
       }
int main() {
 int a=10;
 FACT(a);
    return 0;
}


recursion of sum of array
#include <stdio.h>
int SUMOFARRAY(int*arr, int len){
    if(len<=0){
        return 0;
    }
    return arr[len-1]+SUMOFARRAY(arr,len-1);
}
int main() {
    int arr[]={1,2,3,4,5};
    int len =sizeof(arr)/sizeof(arr[0]);
    printf("%d",SUMOFARRAY(arr,len));
    return 0;
}



structure
#include <stdio.h>
struct Student{

    char name[50];
    int id ;
    float marks;
    
};
int main() {
   struct Student student1;
   student1.id=1;
   student1.marks=85.5;
   printf("%d\n ",student1.id);
   printf("%.2f\n",student1.marks);

    return 0;
}





array sort
#include <stdio.h>
int main() {
  int arr[]={1,5,6,4,7,8,9,3,2};
  int len=sizeof(arr)/sizeof(arr[0]);
  int temp;
  int n;
  for(int i=0;i< len-1;i++){
      for(int j=0;j<len-i-1;j++){
          if(arr[j]>arr[j+1]){
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
      }
  }
  printf("[");
  for( int i=0;i<len;i++){
      printf("%d ",arr[i]);
  if(i<len-1){
      printf(",");
  }
      
  }
  printf("]\n");
    return 0;
}
 
