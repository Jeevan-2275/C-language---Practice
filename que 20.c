// 1}

// 2}
#include <stdio.h>

int main() {
    printf("Name:Jeevan Kadam\n");
 printf("Address:Nagadwadi Kandali\n");
 printf("City:Narayangaon\n");
    return 0;
}
// 3}
#include <stdio.h>

int main() {
 float radius;
    printf("Enter radius of the  circle:");
    scanf("%f",&radius);
    printf("Area of the circle:%.2f",3.14159*radius*radius);

    return 0;
}
// 4}
 #include <stdio.h>
int main() {
       int a;
    int b;
  printf("Enter your a: ");
    scanf("%d", &a);

    printf("Enter your b: ");
    scanf("%d", &b);
char objj;
printf("enter the sign :");
scanf("%c",&objj);
if(objj=='+'){
    printf("%d",a+b);
}else if(objj=='-'){
    printf("%d",a-b);
}else if(objj=='*'){
printf("%d",a*b);
}else if(objj=='/'){
    if(b!=0){
    printf("%d\n",a/b);
}else{
    printf("Errors:Divisions by zero\n");
}
}else{
    printf("Invalid Operator\n");
}
    return 0;
}


// 5}
#include <stdio.h>

int main() {
    int a=5;
    int b=3;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swaping the number is:a=%d,b=%d\n",a,b);

    return 0;
}

// 6}

#include <stdio.h>
int main() {
    int num1,num2,max;
    printf("Enter your first number:");
    scanf("%d",&num1);
   printf("Enter your second nummber:");
    scanf("%d",&num2);
    if(num1>num2){
        max=num1;
    }else{
        max=num2;
    }
    printf("The maximum of two number is:%d\n",max);
    return 0;
}

// 7}
#include <stdio.h>
int main() {
    int num1,num2,min;
    printf("Enter your first number:");
    scanf("%d",&num1);
   printf("Enter your second nummber:");
    scanf("%d",&num2);
    if(num1<num2){
        min=num1;
    }else{
        min=num2;
    }
    printf("The minimum of the two number is:%d\n",min);
    return 0;
}

// 8}
#include <stdio.h>
int main() {
    int num1,num2,num3,max;
    printf("Enter your first number:");
    scanf("%d",&num1);
   printf("Enter your second nummber:");
    scanf("%d",&num2);
    printf("Enter your Third nummber:");
    scanf("%d",&num3);
    if(num1>=num2&&num1>=num3){
        max=num1;
    }else if(num2>=num1&&num2>=num3) {
        max=num2;
    }
    else{
        max=num3;
    }
    printf("The maximum of the Three number is:%d\n",max);
    return 0;
}


// 9}


#include <stdio.h>
int main() {
    int num1,num2,num3,min;
    printf("Enter your first number:");
    scanf("%d",&num1);
   printf("Enter your second nummber:");
    scanf("%d",&num2);
    printf("Enter your Third nummber:");
    scanf("%d",&num3);
    if(num1<=num2&&num1<=num3){
        min=num1;
    }else if(num2<=num1&&num2<=num3) {
        min=num2;
    }
    else{
        min=num3;
    }
    printf("The minimum of the Three number is:%d\n",min);
    return 0;
}


// 10}
#include <stdio.h>
int main() {
  int i,j;
  for(i=1;i<=12;i++){
      printf("Multiplication Table for %d:\n",i);
      for(j=1;j<=10;j++){
      printf("%d*%d=%d\n",i,j,i*j);
      }
  }
    return 0;
}
// 11}

#include <stdio.h>
int main() {
int sum=0;
for(int i=45;i<=65;i++){
    sum=sum+i;
}
printf("%d\n",sum);
    return 0;
}


// 12}
#include <stdio.h>
int main() {
       int num=6;
       int a=0;
       for(int i=2;i<num/2;i++){
          if(num%i==0){
              a=1;
          }
       }if (a==0){
           printf("prime");
       }else{
           printf("not prime");
       }
    return 0;
}



// 13}
#include <stdio.h>
int main() {
   int month;
   printf("Enter the Month number(1-12):");
   scanf("%d",&month);
   switch(month){
       case 1:
       printf("January ");
       break;
       case 2:
       printf("February ");
       break;
       case 3:
       printf("March ");
       break;
       case 4:
       printf("April ");
       break;
       case 5:
       printf("May ");
       break;
       case 6:
       printf("June ");
       break;
       case 7:
       printf("July ");
       break;
       case 8:
       printf("August ");
       break;
       case 9:
       printf("September ");
       break;
       case 10:
       printf("October ");
       break;
       case 11:
       printf("November ");
       break;        
       case 12:
       printf("December ");
       break;
       default:
       printf("Invalid Month");
       }
    return 0;
}

// 14}
#include <stdio.h>
int main() {
    int array[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// 15}
#include <stdio.h>
int main() {
    int arr[30];
    int i;
    for(i=0;i<30;i++){
        arr[i]=101+i;
    }
    for(i=0;i<30;i++){
        printf("%d\n ",arr[i]);
    }
    return 0;
}

// 16}
#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%d", strlen(alphabet));
  return 0;
}

// 18}
#include <stdio.h>
#include <string.h>
int main() {
    char str1[50] = "Hello, "; 
    char str2[] = "World!";
    strcat(str1, str2);  
    
    printf("%s\n", str1); 
    return 0;
}

// 19}#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("* ");
    }
    printf("\n"); 
    return 0;
}




// 20}
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = add(num1, num2);
    printf(" %d  %d  %d\n", num1, num2, sum);
    
    return 0;
}


































