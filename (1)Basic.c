//
//  main.c
//  (1)Basic
//
//  Created by WoohyunSHIN on 13/12/2018.
//  Copyright © 2018 Woo. All rights reserved.
//

/// ex1)
/// <(^.  .^)>
/// ("(00)")
/// 배고프다 아웅
/// issue : " 는 앞에 \ 를 사용하여 출력 할 수 있다.

/*
#include <stdio.h>

int main(){
    printf("<(^. .^)>");
    printf("\r\n (\"(00)\")");
    printf("\n배고프다 아웅");
}
*/

/// ex2)
/// 왜케추운거oF~
/// (-.ㅜ)눈물찔끔
/// (-,,-)콧물줄줄
/// (*,,*)정신없다
/// 감㉠l조심행 */

/*
#include <stdio.h>

int main(){
    printf("왜케주운거oF~\n");
    printf("(-.ㅜ)눈물찔끔\n");
    printf("(-,,-)콧물줄줄\n");
    printf("(*,,*)정신없다\n");
    printf("감기조심행");
}
*/

/// ex3)
/// 이름 : 신우현
/// 나이 : 26
/// 주소 : 해운대구
/// 위와 같은 것을 출력하여라

/*
#include<stdio.h>

int main(){
    printf("이름 : 신우현\n");
    printf("나이 : 26\n");
    printf("주소 : 해운대구\n");
}
*/

/*
#include <stdio.h>

int main(){
    printf("저의 이니셜은 %c.%c.%c 입니다\n",'S','W','H');
    printf("저의 이니셜은 %s 입니다\n","S.W.H");
}
*/

/* ex1)
#include<stdio.h>

int main(){
    int age = 26;
    float weight = 50.0, height = 163.5;
    
    printf("나의 나이는 %d세 입니다.\n", age);
    printf("나의 몸무게는 %f(kg) 입니다.\n", weight);
    printf("나의 키는 %f(cm) 입니다.\n", height);
}
*/

/*
#include <stdio.h>
int main(int argc, char * argv[])
{
    int num = 123;
    char ch = 'D';
    
    num= num + 1;
    ch= 'G';
    printf("num = %d\n", num);
    printf("ch = %c\n", ch);
}
*/

/*
#include<stdio.h>
int main(int argc, char * argv[])
{
    float height_inch = 70.0;
    float height_cm = height_inch * 2.54;
    
    printf("나의 신장은 %f(cm) 입니다.\n", height_cm);
}
*/

/* 'A' 가 ASCII 코드 값으로 65 이기 때문에 70 이 나온다.
#include<stdio.h>
int main(int argc, char * argv[])
{
    char ch = 'A';
    int num = 5, ret;
    
    ret = ch + num;
    printf("ret = %d\n", ret);
}
*/

/* 367 을 출력한다. 실수형이라도 정수형으로 변환 가능하다.
#include<stdio.h>
int main(int argc, char * argv[])
{
    int num1;
    float num2 = 367.78;
    
    num1 = num2;
    printf("num1 = %d\n", num1);
}
*/

/* 8, 8.333333, 75 가 출력되었다. "정수 / 정수 = 정수" 연산할때 원본 값은 건드리지 않고 그냥 "COPY" 를 한다
#include<stdio.h>
int main(int argc, char * argv[])
{
    int num1 = 25, num2 = 3;
    
    printf("num1 / num2 = %d\n", num1 / num2);
    printf("num1 / num2 = %f\n", (float)num1 / (float)num2);
    printf("num1 * num2 = %d\n", num1 * num2);
}
*/

/*
#include <stdio.h>
int main(int argc, char * argv[])
{
    char ch ='A', str[20] = "character string";
    printf("문자   = %3c\n", ch);
    printf("문자열 = %-20s\n", str);
}
*/

/*
#include<stdio.h>
int main(){
    int age;
    printf("당신의 나이를 입력하시오:");
    scanf("%d", &age);
    printf("당신의 나이는 %d입니다.\n",age);
}
*/


// 연습문제 1~4
/* ex 1)
 #include<stdio.h>
int main(){
 /// float su = 0.0f; "0.0f"라고 적은 이유는 만약 숫자.숫자 로 적으면 컴퓨터는 Double 값으로 이해 하기 때문에 뒤에 f를 붙이던지 앞에 (float) 을 붙여라
    float flt;
    
    printf("실수를 입력하시오: ");
    scanf("%f",&flt);
    printf("당신이 입력하신 실수는 %.2f 입니다.\n", flt);
}
*/

/* ex 2)
#include<stdio.h>
int main(){
    char name[20];
    
    printf("당신의 이니셜을 적으십시오: ");
    scanf("%s",name);
    printf("당신의 이니셜은 %s 입니다.\n",name);
}
*/

/* ex 3) // 귀찮지만 초기화를 해라 그래야 오류가 적게난다.
#include<stdio.h>
int main(){
    int scoremath = 0, scorelinux = 0, scorestatic = 0, sum = 0;
    float moyen = 0.0f;
    
    printf("당신의 수학 점수를 기입하시오 :");
    scanf("%d",&scoremath);
    
    printf("당신의 리눅스 점수를 기입하시오 :");
    scanf("%d",&scorelinux);
    
    printf("당신의 수학 점수를 기입하시오 :");
    scanf("%d",&scorestatic);
    
    sum = scoremath + scorelinux + scorestatic;
    moyen = (float)sum / 3;
    
    printf("당신의 3과목 합은 %d 입니다.\n",sum);
    printf("당신의 3과목 평균은 %f 입니다.\n",moyen);
    
}
*/

/* ex4)
#include<stdio.h>

int main(){
    char name1[23] = "\0";  // 첫번째 칸이 0 인데 null 값이기 때문에 뒤에 칸은 다 날라간다.
    int age = 0;
    
    printf("당신의 이름은 무엇입니까? ");
    scanf("%s",name1);
    
    printf("%s님의 나이는 몇살입니까? ",name1);
    scanf("%d",&age);

    printf("%s님의 나이는 %d살 입니다\n",name1, age);
 }
 */
// 3.연산자
/*
#include<stdio.h>

int main(){
    int su1 = 20, su2 = 3;
    
    printf("%d + %d = %d\n", su1, su2, su1+su2);
    printf("%d - %d = %d\n", su1, su2, su1-su2);
    printf("%d * %d = %d\n", su1, su2, su1*su2);
    printf("%d / %d = %d\n", su1, su2, su1/su2);
    printf("%d %% %d = %d\n", su1, su2, su1 % su2);
}
*/
/*
#include<stdio.h>

int main(){
    float su1 = 3.01, su2 = 3.0;
    
    printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 <= su2);
    printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 >= su2);
    printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 == su2);
    printf("변수 su1과 su2의 크기 비교 결과 : %d\n", su1 != su2);
}
*/

/*
#include <stdio.h>

int main(){
    int a=5, b=6, c=10, d;
    d=++a*b--;
    printf("a = %d, b= %d, d= %d\n", a, b, d);

    d=a++ + ++c - b--;
    printf("a = %d, b = %d, c = %d, d = %d\n",a ,b ,c ,d);

    a=1;
    b=0;
    d=a++ || ++b * d-- / ++c;   // Or 연산자로써 a||b 앞의 부분(=a)을 이미 연산을 하여서 True 이기  때문에 || 뒤에 있는 부분(=b)은 연산을 하지 않게 된다.
    printf("a = %d, b= %d, c = %d, d = %d\n",a,b,c,d);
    
    d=b++&&++a/++c*d++;     // And 연산자로써 a&&b 에서 앞의 부분(=a)가 True 여야 뒤에 있는 부분(=b)를 연산을 하는데, a 가 flase 이기 때문에 b연산을 하지 않는다.
    printf("a = %d, b = %d, c = %d, d = %d\n",a,b,c,d);
}
*/

/*
#include<stdio.h>
int main(){
    int su;
    su = 8;
    (su %2 == 0)? printf("%d : 짝수\n",su): printf("%d : 홀수\n",su);
    
    su = 9;
    (su %2 == 0)? printf("%d : 짝수\n",su): printf("%d : 홀수\n",su);
}
*/

/*
#include<stdio.h>

int main(){
    int su1 = 12, su2 = 7, result;
    
    result = su1 | su2;
    printf("su1과 su2의 논리합 : %d\n",result);
}
*/

/* //수를 입력 받아 짝,홀수를 구분하여 출력하시오
#include<stdio.h>

int main(){
    int num;
    
    printf("숫자를 입력하시오:");
    scanf("%d",&num);
    
    if (num %2 ==0) printf("%d : 짝수\n",num);
    if (num %2 ==1) printf("%d : 홀수\n",num);
}
*/

/*// 수를 입력 받아, 3의 배수이면 출력하시오.
#include <stdio.h>
int main(){
    int num1;

    printf("숫자를 입력하시면 3의 배수이면 출력합니다 : ");
    scanf("%d",&num1);
    
    if (num1 %3 ==0) printf("당신이 입력하신 숫자 %d는 3의 배수입니다.\n",num1);
    if (num1 %3 ==1||2) printf("당신이 입력하신 숫자 %d는 3의 배수가 아닙니다.\n",num1);
}
*/
//두 숫자를 입력받아 큰 수를 출력하시오.
/*
#include<stdio.h>
int main(){
    float num1, num2;

    printf("여기에 첫번째 숫자를 입력하시오:");
    scanf("%f",&num1);
    
    printf("여기에 두번째 숫자를 입력하시오:");
    scanf("%f",&num2);
    
    if (num1 - num2 > 0){
        printf("두 숫자중 큰숫자는 %.3f 입니다.\n",num1);
    }
    
    else if(num2 - num1 > 0){
        printf("두 숫자중 큰숫자는 %.3f 입니다.\n",num2);
    }
}
*/


/*// 세수를 입력 받아 가장 큰수를 출력하시오
#include<stdio.h>

int main(){
    float num1,num2,num3;
    
    printf("첫번째 수를 입력하시오:");
    scanf("%f",&num1);
   
    printf("두번째 수를 입력하시오:");
    scanf("%f",&num2);

    printf("세번째 수를 입력하시오:");
    scanf("%f",&num3);

    if (num1 > num2  && num1 > num3 ){
        printf("가장큰 수는 %f 입니다.\n",num1);
    }
    
    else if (num2 > num3){
        printf("가장 큰 수는 %f 입니다.\n",num2);
    }
    
    else{
        printf("가장 큰수는 %f 입니다.\n",num3);
    }
}
*/

/*// 두수를 입력 받아 큰수가 짝수이면 출력하시오
#include<stdio.h>

int main(){
    int num1,num2;
    
    printf("두 숫자를 입력하시오: ");
    scanf("%d%d",&num1,&num2);
    
    if (num1>num2 && num1 %2 == 0){
        printf("숫자 %d는 두 숫자중 큰수이자 짝수입니다.\n",num1);
    }
    
    else if (num2>num1 && num2 %2 == 0){
        printf("숫자 %d는 두 숫자중 큰수이자 짝수입니다.\n",num2);
    }
}
*/

/* //두수를 입력 받아 합이 짝수이고 3의 배수인 수를 출력하시오
#include <stdio.h>
int main(){
    int num1,num2, sum;
    
    printf("첫번째 수를 입력하시오:");
    scanf("%d",&num1);
    
    printf("두번째 수를 입력하시오:");
    scanf("%d",&num2);
    
    sum = num1 + num2;
    
    if (sum %6 ==0){
        printf("모든 조건을 만족하는 숫자는 %d입니다.\n",sum);
    }
}
*/

/*// 입력한 데이터가 3의 배수인 경우 출력하시오
#include<stdio.h>
    int su;

int main(){
    printf("아무 숫자나 넣으십시오:");
    scanf("%d",&su);
    
    if(su %3 ==0){
        printf("넣으신 숫자 %d는 3의 배수입니다.",su);
    }
}
*/

/*//절대값을 구하는 프로그램을 작성하시오
#include <stdio.h>
    float abv;

int main(){
    printf("아무 숫자나 넣으십시오:");
    scanf("%f",&abv);

    if (abv < 0){
        abv = abv * -1;
        printf("입력하신 숫자의 절대값은 %f입니다.\n",abv);
    }
    
    else {
        printf("입력하신 숫자의 절대값은 %f입니다.\n",abv);
    }
}
*/

/*//3개의 수를 받아 최대값과 최소값을 구하시오
#include<stdio.h>

int main(){
    float su1,su2,su3,max,min;
    
    printf("숫자를 3개 입력하시오 :");
    scanf("%f%f%f",&su1,&su2,&su3);
    
    if(su1 >= su2 && su1 >= su3)
        max = su1;
    if(su2 >= su1 && su2 >= su3)
        max = su2;
    if(su3 >= su1 && su3 >= su2)
        max = su3;
    
    if (su1 <= su2 && su1 <= su3)
        min = su1;
    if (su2 <= su1 && su2 <= su3)
        min = su2;
    if (su3 <= su1 && su3 <= su2)
        min = su3;
    
    printf("최대 값은 %f이다. 최소 값은 %f이다.\n",max, min);
}
*/
/*
#include<stdio.h>

int main(){
    int kor,eng,mat,avr;
    
    printf("3과목 성적을 입력하시오 :");
    scanf("%d%d%d",&kor, &eng, &mat);
    
    avr = (kor+eng+mat) / 3;
    if (avr < 70)
        printf("\n불합격");
    else if (kor < 60 || eng < 60 || mat < 60)
        printf("\n불합격");
    else
        printf("\n합격!");
}
*/

/*//QUIZ 1. 입력 받은 수가 짝수인지 홀수인지 검사하는 프로그램 작성
#include <stdio.h>
int main(){
    int a;
    
    printf("숫자를 입력해주세요 :");
    scanf("%d",&a);
    
    if(a %2 == 0)
        printf("\n입력하신 숫자 %d는 짝수입니다.\n",a);
    else
        printf("\n입력하신 숫자 %d는 홀수입니다.\n",a);
}
*/

//QUIZ 2. 유원지에서 말을 태워주는데 처음 30분의 기본요금은 1인당 3000원이다. 이후에는 10분당 500원씩의 추가 요금을 받는다.말을 탄 시간을 입력 받아서 전체 금액을 계산하는 프로그램을 작성하여라.
/*
#include <stdio.h>
int main(){
    int time, price;
    
    printf("말을 탄 시간을 분 단위로 입력해주세요 예를들어 1시간 45분은 105로 :");
    scanf("%d",&time);
    
    price = ((time-30)/10)*500 + 3000;      //착한 유원지 30~39 분 = 3000원 만약 나쁜 유원지를 할려면 "price = ((time-21)/10)*500 + 3000;"
    
    if (time < 30)
        printf("\n요금은 3000원 입니다.\n");
    
    else if (time >= 30)
        printf("\n요금은 %d원 입니다.\n",price);
}
*/

// QUIZ 3. 배달 도시락을 주문하는데 10개까지는 개당 2500원이고 10개를 초과하는 양에 대해서는 개당 2400원이다.배달 도시락의 개수를 입력 받아서 금액을 계산하는 프로그램을 작성하라.
/*
#include<stdio.h>
int main(){
    int momeny, ea;
    
    printf("배달 도시락 갯수를 입력해 주세요:");
    scanf("%d",&ea);
    
    if (ea <= 10)
        momeny = ea * 2500;
    
    else if (ea > 10)
        momeny = ea * 2400;
    
    printf("배달 도시락 갯수는 %d이며 금액은 %d원 입니다.\n",ea,momeny);
}
*/

// QUIZ 4. 디스켓 1통에 5000원한다. 그런데 한번에 10통 이상을 사면 전체 금액의 10%를 할인하여 준다. 그리고 100통 이상을 사면 전체 금액의 12%를 할인하여 준다. X통의 디스켓을 사려면 얼마가 있어야 하는가?
/*
#include<stdio.h>
int main(){
    int ea1,cost;
    
    printf("필요한 디스켓통의 갯수를 적어보시오 :");
    scanf("%d",&ea1);
    
    if (ea1 < 10)
        cost = ea1 * 5000;
        
    else if (10<= ea1 && ea1 < 100)
        cost = (ea1 * 5000)*0.9;
        
    else cost = (ea1 * 5000)*0.88;
    
    printf("고객님이 구매하신 디스켓의 갯수는 %d 이며 가격은 %d입니다\n",ea1, cost);
}
*/

// QUIZ 5. 세 과목의 성적을 입력 받아 합계와 평균을 구하고 평균이 90이상이면 “A”, 80이상이면 “B”, 70 이상이면 “C”, 60 이상이면 “D”, 60미만이면 “F”를 출력하시오.
/*
#include<stdio.h>
int main(){
    int A,B,C,sum;
    float avg;
    
    printf("A 과목의 성적을 기입 하시오 : ");
    scanf("%d",&A);
    
    printf("B 과목의 성적을 기입 하시오 : ");
    scanf("%d",&B);
    
    printf("C 과목의 성적을 기입 하시오 : ");
    scanf("%d",&C);
    
    sum = A + B + C;
    avg = sum / 3;
    
    if (avg < 60)
        printf("당신의 평균은 %.2f이며 학점은 \"F\" 입니다. ",avg);
    
    else if (60 <= avg && avg < 70)
        printf("당신의 평균은 %.2f이며 학점은 \"D\" 입니다. ",avg);
    
    else if (70 <= avg && avg < 80)
        printf("당신의 평균은 %.2f이며 학점은 \"C\" 입니다. ",avg);

    else if (80 <= avg && avg < 90)
        printf("당신의 평균은 %.2f이며 학점은 \"B\" 입니다. ",avg);
    
    else printf("당신의 평균은 %.2f이며 확점은 \"A\" 입니다. ",avg);
    
}
*/

/*
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
 int main(){
 int num,data,a;
 
 while(1){
 printf("=============================\n");
 printf("1. 데이터 입력\n");
 printf("2. 데이터 출력\n");
 printf("3. 종료\n");
 printf("=============================\n");
 scanf("%d",&num);
 switch(num){
 case 1 : printf("데이터를 입력하세요\n");
 scanf("%d",&data);break;
 case 2 : printf("%d",data);
 scanf("%d",&a);break;
 case 3 : exit(1);
 }
 system("cls");
 }
 
 }
 */


/* (3번째) 계산기
 #include<stdio.h>
 char opr;
 double a,b;
 
 int main(){
 printf("Usage : [Number] [Operator] [Number]\n");
 printf("Example : 5 * 9 \n");
 scanf("%lf %c %lf",&a,&opr,&b);
 
 switch(opr){
 case '+' : printf("%.2lf + %.2lf = %.2lf\n", a, b, a+b);break;
 case '-' : printf("%.2lf - %.2lf = %.2lf\n", a, b, a-b);break;
 case '/' : printf("%.2lf / %.2lf = %.2lf\n", a, b, a/b);break;
 case '*' : printf("%.2lf * %.2lf = %.2lf\n", a, b, a*b);break;
 }
 return 0;
 }
 */


/*
 #include<stdio.h>
 
 int main(){
 double a;
 int b;
 
 printf("학점을 입력해 주세요 : ");
 scanf("%lf",&a);
 
 b = a / 5;
 
 switch(b){
 case 20 : printf("당신의 학점은 'A+' 입니다.\n");break;
 case 19 : printf("당신의 학점은 'A+' 입니다.\n");break;
 case 18 : printf("당신의 학점은 'A' 입니다.\n");break;
 case 17 : printf("당신의 학점은 'B+' 입니다.\n");break;
 case 16 : printf("당신의 학점은 'B' 입니다.\n");break;
 case 15 : printf("당신의 학점은 'C+' 입니다.\n");break;
 case 14 : printf("당신의 학점은 'C' 입니다.\n");break;
 case 13 : printf("당신의 학점은 'D+' 입니다.\n");break;
 case 12 : printf("당신의 학점은 'D' 입니다.\n");break;
 default : printf("당신의 학점은 'F' 입니다.\n");break;
 }
 
 }
 */


/*
 #include<stdio.h>
 #include<stdlib.h>
 int main(){
 int num,null;
 double math, eng, stat;
 char name[100];
 
 while(1){
 printf("===========================\n");
 printf("             Menu          \n");
 printf("===========================\n");
 printf("    1. 학생이름 입력           \n");
 printf("    2. 성적 3과목 입력         \n");
 printf("    3. 학생이름 출력           \n");
 printf("    4. 합계 출력              \n");
 printf("    5. 평균 출력              \n");
 printf("    6. 종료                 \n");
 printf("===========================\n");
 scanf("%d",&num);
 
 switch(num){
 case 1 : printf("이름을 입력해 주세요 : \n");
 scanf("%s",name);break;
 case 2 : printf("수학, 영어, 통계 점수를 순서대로 입력하시오");
 scanf("%lf %lf %lf",&math, &eng, &stat);break;
 case 3 : printf("당신의 이름은 %s 입니다\n",name);scanf("%d",&null);break;
 case 4 : printf("%lf\n",math + eng + stat);scanf("%d",&null);break;
 case 5 : printf("%.2lf\n",(math+eng+stat)/3);scanf("%d",&null);break;
 case 6 : exit(1);break;
 }
 system("cls");
 }
 }
 */


/*
 #include <stdio.h>
 int main(){
 int i,sum=0;
 
 for(i=1;i<=1000;i++){
 if(i%15==0){
 sum = sum + i;
 }
 
 else if(i%3==0){
 sum = sum;
 }
 
 else {
 sum = sum + i;
 }
 
 }
 printf("%d\n",sum);
 
 }
 */


/*
 #include<stdio.h>
 int main(){
 int i,j;
 
 for(i=1;i<5;i++){
 printf("%d.Hello\n",i);
 }
 
 printf("\n");
 
 for(j=65;j<=90;j++){
 if(j==65){
 printf("%c",j);
 }
 else{
 printf(",%c",j);
 }
 }
 }
 */


/*
 #include<stdio.h>
 int main(){
 int i,j;
 
 for(i=1;i<10;i++){
 for(j=1;j<10;j++){
 printf("%d * %d = %d\n",i,j,i*j);
 }
 }
 }
 */


/*
 #include<stdio.h>
 int main(){
 double day,money=10;
 
 for(day=2;day<=31;day++){
 money = money*2;
 }
 
 printf("합계는 %.0lf 원 입니다.", money + 10);
 }
 */


/*
 #include<stdio.h>
 int main(){
 int sum=0, i;
 
 for(i=1;i<=1000;i++){
 
 if(i%5==0){
 sum = sum + i;
 }
 
 else if(i%3==0){
 sum = sum;
 }
 
 else {
 sum = sum + i;
 }
 
 }
 printf("%d\n",sum);
 }
 */


/*
 #include<stdio.h>
 int main(){
 int j, sum=0;
 
 for (j=1;sum<10000;j+=2){
 sum = sum + j;
 }
 printf("%d\n",j-2);
 }
 */


/*
 #include<stdio.h>
 #define TRUE 1
 int main(){
 int i,j,sum=0;
 
 while(1){
 printf("수입력(1~100)");
 scanf("%d",&i);
 if (i>=1&&i<100)break;
 printf("잘못 입력, 다시");
 }
 
 for(int j=1;j<=i;j++){
 sum = sum + j;
 }
 
 printf("%d",sum);
 }
 */


/*
 #include<stdio.h>
 
 int main(){
 int a,i,sum=0;
 
 printf("1~10까지의 숫자를 하나 입력해주세요 : ");
 scanf("%d",&i);
 
 for(a=1;a<=i;a++){
 sum = sum + a;
 }
 printf("합은 %d 입니다.",sum);
 return 0;
 }
 */


/*
 #include<stdio.h>
 int main(){
 int a,i,sum=0;
 
 printf("10~20까지의 숫자중 하나를 입력해 주세요 : ");
 scanf("%d",&a);
 
 if(a<=9 || a>=21){
 printf("숫자를 다시 입력하십시오 : "); // 여기서 다시 위에 있는 scanf로 돌려보낼려면 어떻게 해야 하는가 ?
 }
 
 else {
 for(i=1;i<=a;i++){
 sum = sum + i;
 }
 }
 
 printf("합계는 %d입니다.\n",sum);
 }
 */


// Q.1
/*
 #include<stdio.h>
 int main(){
 int i;
 
 for(i=1;i<=5;i++){
 printf("*");
 }
 printf("\n");
 }
 */

// Q.2
/*
 #include<stdio.h>
 int main(){
 int i;
 
 for(i=1;i<=5;i++){
 printf("*\n");
 }
 }
 */

// Q.3
/*
 #include<stdio.h>
 int main(){
 int col=5,row=5,i,j;
 
 for(i=1;i<=row;i++){
 for(j=1;j<=col;j++){
 printf("*");
 }
 printf("\n");
 }
 }
 */

// Q.4
/*
 #include<stdio.h>
 int main(){
 int col=5,row=5,i,j;
 
 for(i=1;i<=row;i++){
 for(j=1;j<=col;j++){
 printf("%d",i);
 }
 printf("\n");
 }
 }
 */

// Q.5
/*
 #include<stdio.h>
 int main(){
 int col=5,row=5,i,j;
 
 for(i=1;i<=row;i++){
 for(j=1;j<=col;j++){
 printf("%d",j);
 }
 printf("\n");
 }
 }
 */

// Q.6
/*
 #include<stdio.h>
 int main(){
 int i,j;
 
 for(i=1;i<=5;i++){
 for(j=1;j<=5;j++){
 printf("%d",j);
 }
 printf("\n");
 
 for(j=2;j<=6;j++){
 printf("%d",j);
 }
 printf("\n");
 
 for(j=3;j<=7;j++){
 printf("%d",j);
 }
 printf("\n");
 
 for(j=4;j<=8;j++){
 printf("%d",j);
 }
 printf("\n");
 
 for(j=5;j<=9;j++){
 printf("%d",j);
 }
 printf("\n");
 
 }
 }
 */

// Q.6(2)
/*
 #include<stdio.h>
 int main(){
 int col=5,row=5,i,j;
 
 for(i=1;i<=row;i++){
 for(j=i;j<i+col;j++){
 printf("%d",j);
 }
 printf("\n");
 }
 }
 */


/*
 // Q.7
 #include <stdio.h>
 int main(){
 int col=5,row=5,i,j,a=5;
 
 for(i=1;i<=row;i++){
 for(j=a;j<a+col;j++){
 printf("%d",j);
 }
 printf("\n");
 --a;
 }
 }
 */


/*
 // Q. 8
 #include <stdio.h>
 int main(){
 int i,j;
 
 for(i=1;i<=5;i++){
 for(j=1;j<=i;j++){
 printf("*");
 }
 printf("\n");
 }
 }
 */

/*
 // Q. 9
 #include<stdio.h>
 int main(){
 int i,j,a=5;
 
 for(i=1;i<=5;i++){
 for(j=1;j<=a;j++){
 printf("*");
 }
 --a;
 printf("\n");
 }
 }
 */

/*
 //Q. 10
 #include<stdio.h>
 int main(){
 int i,j,a=5;
 
 for (i=1;i<=5;i++){
 for(j=1;j<=a;j++){
 printf("*");
 
 }
 --a;
 printf("\n");
 
 }
 
 }
 */
/*
 #include<stdio.h>
 
 int temp;
 
 void x(int i){
 while(1){
 temp=i%10;
 i=i/10;
 printf("%d",temp);
 if(i==0)break;
 }
 }
 
 int main(){
 int a;
 
 printf("수입력 : ");
 scanf("%d",&a);
 x(a);
 }
 */

/*
 #include<stdio.h>
 
 int main(){
 int i,temp,cum=0;
 
 printf("숫자의 합을 구해드립니다 숫자를 입력하세요 : ");
 scanf("%d",&i);
 
 while(1){
 temp = i%10;
 i=i/10;
 cum = cum + temp;
 if(i==0)break;
 }
 
 printf("각 자리수의 합은 : %d입니다.\n",cum);
 }
 */

/*
 #include<stdio.h>
 
 int main(){
 int input=0,tmp=0,result=0;
 
 printf("수 입력");
 scanf("%d",&input);
 
 tmp=input;
 while(1){
 result = result + (tmp % 10);
 tmp = tmp / 10;
 if (tmp==0) break;
 result = result * 10;
 }
 
 printf("%d\n",result);
 }
 */
