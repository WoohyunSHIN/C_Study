//
//  main.c
//  (7)Practice
//
//  Created by WoohyunSHIN on 20/12/2018.
//  Copyright © 2018 Woo. All rights reserved.
//
/* 함수 basic 개념
#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int main(){
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    
    printf("%d",add(num1, num2));
}
*/


/* 함수 basic 개념
#include <stdio.h>
double mul(double a, double b, double c){
    return a*b*c;
}

int main(){
    double num4,num5,num6;

    scanf("%lf %lf %lf",&num4, &num5, &num6);
    printf("%lf",mul(num4, num5, num6));
}
*/


/* 인자 n을 입력받아 구구단 n단을 출력하는 함수. 예를들어 8을 인자로 받으면 8단을 실행한다.
#include <stdio.h>
int gugu(int n){
    int i=1;
    while(i<=9){
        printf("%d x %d = %d\n",n,i,n*i);
        i=i+1;
    }
}


int main(){
    int num;
    
    scanf("%d",&num);
    gugu(num);
}
*/


/* "숫자" 비밀 번호 검사 함수 만들기.
#include <stdio.h>
void pass(int num){
    if(num==3333){
        printf("Welcom\n");
    }
    else{
        printf("Fuck U\n");
    }
    return;
}

int main(){
    int passwd;
    
    printf("비밀번호를 입력하시오 : ");
    scanf("%d",&passwd);

    pass(passwd);
}
*/


/* 나이를 입력받아 10세 미만이면 어린이, 20세 미만이면 청소년, 65세 미만이면 성인 아니면 노인 프로그램
#include <stdio.h>
int main(){
    int age;
    
    printf("나이를 입력해 주세요 : ");
    scanf("%d",&age);
    
    if(age < 10){
        printf("당신은 어린이입니다.\n");
    }
    
    else if (age < 20){
        printf("당신은 청소년입니다.\n");
    }
    
    else if (age < 65){
        printf("당신은 성인입니다.\n");
    }
    
    else {
        printf("당신은 노인입니다.\n");
    }
}
*/


/* basic switch 개념 연습문제
#include<stdio.h>
int main(){
    int num;
    
    printf("당신의 위치는 어디십니까 ?\n");
    printf("1. 집\n2. 학원\n3. 학교\n4. 병원\n5. 군대\n");
    scanf("%d",&num);

    switch(num){
        case 1 : printf("지금 집에 계시는군요.\n");break;
        case 2 : printf("지금 학원에 계시는군요.\n");break;
        case 3 : printf("지금 학교에 계시는군요.\n");break;
        case 4 : printf("지금 병원에 계시는군요.\n");break;
        case 5 : printf("지금 군대에 계시는군요.\n");break;
        default : printf("1~5번 까지 값중 하나를 선택해주시기 바랍니다");
    }
    return 0;
}
*/


/* (1번째) 계산기 만들기 코드
#include<stdio.h>
void plus(double arg1,double arg2){
    printf("%.2lf + %.2lf = %.2lf\n",arg1,arg2,arg1+arg2);
}

void minus(double arg1,double arg2){
    printf("%.2lf - %.2lf = %.2lf\n",arg1,arg2,arg1-arg2);
}

void divide(double arg1,double arg2){
    printf("%.2lf / %.2lf = %.2lf\n",arg1,arg2,arg1/arg2);
}

void multiply(double arg1,double arg2){
    printf("%.2lf * %.2lf = %.2lf\n",arg1,arg2,arg1*arg2);
}

int main(){
    double num1, num2;
    char oper;
    
    printf("USAGE : [Number] [Operator] [Number]\n");
    printf("EXAMPLE : 10 * 4\n");
    
    scanf("%lf %c %lf",&num1, &oper, &num2);
    
    switch(oper){
        case '+' : plus(num1,num2);
            return 0;
        case '-' : minus(num1,num2);
            return 0;
        case '/' : divide(num1,num2);
            return 0;
        case '*' : multiply(num1,num2);
            return 0;
            
    }
    printf("Wrong operator");
    return 0;
}
 */


/* (2번째) 계산기 만들기 프로그램
#include <stdio.h>

void plus(double num1, double num2){
    printf("%.2lf + %.2lf = %.2lf",num1,num2,num1+num2);
}

void minus(double num1, double num2){
    printf("%.2lf - %.2lf = %.2lf",num1,num2,num1 - num2);
}

void divide(double num1, double num2){
    printf("%.2lf / %.2lf = %.2lf",num1,num2, num1 / num2);
}

void multiply(double num1, double num2){
    printf("%.2lf * %.2lf = %.2lf",num1,num2,num1*num2);
}

int main(){
    double su1, su2;
    char op;
    
    printf("Usage : [Number] [Operator] [Number]\n");
    printf("Example : 5 * 6\n");
    scanf("%lf %c %lf",&su1, &op, &su2);
    
    switch(op){
        case '+' : plus(su1, su2);
            return 0;
        case '-' : minus(su1, su2);
            return 0;
        case '/' : divide(su1, su2);
            return 0;
        case '*' : multiply(su1, su2);
            return 0;
    }
    printf("Wrong Operation");
    return 0;
}
*/


/* 입력 받은 숫자 이후 카운트 다운
#include<stdio.h>
#include<unistd.h>

void count(int a){
    
    a -= 1;
    if (a<0){
        return;
    }
    
    else if(0<a) {
        printf("%d\n",a);
    }
    
    else if(a==0){
        printf("새해가 밝았습니다!\n");
    }
    sleep(1);
    count(a);
    return;
}
 
int main(){
    int num;

    printf("Count : ");
    scanf("%d",&num);
    
    count(num);
}
*/


/* 내가 만들어본 구구단 프로그램
#include<stdio.h>
#include<unistd.h>

void gugu(int a,int b){
    
    if(b < 10){
        printf("사랑해 진선이 : %d * %d = %d\n",a,b, a*b);
        b+=1;
        sleep(0.1);
        gugu(a,b);
    }
    
    else if(b == 10){
        if(a == 10){
            printf("사랑해 진선이 끝!");
            return;
        }
        
        else{
        a = a+1;
        b = b-9;
        }
    }
    gugu(a,b);
    return;
}
*/


/*//"for" 구문을 이용한 구구단 출력
#include<stdio.h>
int main(void){
    int a,b;
    
    for(a=1;a<10;a++){
        for(b=1;b<10;b++){
            printf("%d * %d = %d\n",a, b, a*b);
        }
    }
}
*/


/* 데이터 갯수를 입력 받고 갯수만큼 입력후 평균출력
#include<stdio.h>
#include<unistd.h>
int main(void){
    int datanum,sum=0,i,tmp;
    
    printf("입력할 데이터 개수 입력 : ");
    scanf("%d",&datanum);
    
    for(i=0;i<datanum;i++){
        scanf("%d",&tmp);
        sum = sum +tmp;
    }
    
    printf("평균 : %d",sum/datanum);
    return 0;
}
*/


/* 소수 판단 코드.
#include<stdio.h>
void thtn(int num){
    int i;
    
    for(i=2;i<num;i++){
        if(num%i == 0){
            printf("This is not a prime number!\n");
        }
        else {
            printf("This number %d is a prime number!\n",num);
        }
        return;
    }
    return;
}

int main(void){
    int su1;
    
    printf("소수를 판단 해 드리겠습니다 : ");
    scanf("%d",&su1);
    
    if (su1<2){
        printf("It isn't prime number\n");
    }
    
    else {
        thtn(su1);
    }
    
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int a;
    
    printf("십진수 입력 : ");
    scanf("%d",&a);
    printf("이진수 출력 : ",a);
}
*/


/* 10진수를 2진수로 바꾸는 코드
#include<stdio.h>

void toBin(int num){
    int i;
    for(i=0;i<8;i++){
        printf("%d",( num>>(7-i)) & 1);
    }
    return;
}

int main(){
    int n;
    
    printf("십진수를 입력하시오 : ");
    scanf("%d",&n);
    
    toBin(n);
    printf("\n");
    return 0;
}
*/


/* 가짜 랜덤 값 출력하는 코드 rand
#include<stdio.h>
#include<stdlib.h>  // srand
#include<time.h>    // time
#include<unistd.h>  // getpid

int main(){
    srand((unsigned int)getpid()+(unsigned int)time(NULL));
    
    if (rand()%2){
        printf("Today : Lucky\n");
    }
    else {
        printf("Today : Unlucky\n");
    }
    return 0;
}
*/
/*
#include<stdio.h>

int main(void){
    printf("%zu %zu %zu %zu %zu",sizeof(char *), sizeof(short *), sizeof(int*), sizeof(float*), sizeof(double*));
    
    return 0;
}
*/

/*
#include<stdio.h>

int main(){
    int a;
    int *pointer=&a;
    
    printf("%p", pointer);
}
*/
/*
#include<stdio.h>

int main(void){
    int a;
    int *pointer=&a;
    
    printf("pointer = %p\npointer+1 = %p\n", pointer, pointer+1);

 return 0;
}
*/
/*
#include<stdio.h>

int main(void){
    double arr[]={1.0, 2.0, 3.0, 4.0, 5.0};
    
    printf("%lf", 3[arr]);
    
    return 0;
}
*/
/*
#include<stdio.h>

int main(void){
    double num;
    double *pnum=&num;
    
    *pnum=97.1002;
    
    printf("%lf", num);
    
}
*/
/*
#include<stdio.h>
void swap(int *a, int *b){
    int tmp=*b;
    *b = *a;
    *a = tmp;
}

int main(void){
    int var1=10, var2=20;
    
    swap(&var1, &var2);
    
    printf("var1=%d\nvar2=%d\n",var1,var2);
    
    return 0;
}
*/


#include <stdio.h>

int main(){
    int a;
    
    printf("원하는 숫자를 집어 넣으시오 : ");
    scanf("%d",&a);
    //유혜성
    printf("혜성이가 원하는 제곱 수는 : %d\n",a*a);
    
}
