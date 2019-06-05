//
//  main.c
//  (3)function
//
//  Created by WoohyunSHIN on 03/01/2019.
//  Copyright © 2019 Woo. All rights reserved.
//
/*
#include <stdio.h>
float avrg(int x,int y);        //함수의 원형 선언

void show_avrg(int,int,float);  //함수의 원형 선언

void main(){
    int i=2, j=3;
    float f;
    
    f = avrg(i,j);
    show_avrg(i,j,f);
}


float avrg(int j,int k){
    int total = j + k;
    float f;
    
    f = total /2.0f;
    
    return f;
}


void show_avrg(int a,int b,float c){
    printf("\n%d와 %d의 평균", a, b);
    printf("값은 %3.1f입니다.\n", c);
}
*/


/*
#include <stdio.h>

int func(int num1,int num2){
    num1*=num2;
    return num1;
}

int main(){
    int n1=10,n2=20;
    func(n1,n2);
    int n3=func(n1,n2);
    
    printf("%d",n1);
    printf("\n%d",n3);
    
}
*/


/*
#include <stdio.h>

char big(int x,int y){
    if(x>y){
        return 'Y';
    }
    else if(x<y){
        return 'N';
    }
    else {
        return '=';
    }
}

int main(void){
    int a = 100, b=200;
    char size = big(a,b);
    
    if (size =='Y'){
        printf("\n %d는 %d 보다 크다.",a,b);
    }
    
    else if (size == 'N'){
        printf("\n %d는 %d 보다 작다.",a,b);
    }
    
    else if (size == '='){
        printf("\n %d는 %d와 같다.",a,b);
    }
}
*/


/*
 // 두수를 입력 받아 큰 수를 출력하는 함수를 만드시오.
#include <stdio.h>
void big(double c,double d){
    if(c>d){
        printf("%.2lf가 큰 수 입니다.",c);
    }
    else if(c<d){
        printf("%.2lf가 큰 수 입니다.",d);
    }
    else if(c==d){
        printf("두수가 %.2lf 로 같습니다.",c);
    }
}

int main(){
    double a,b;
    
    printf("두 수를 입력해 주세요 큰 수를 출력해 드립니다 : ");
    scanf("%lf %lf",&a, &b);
    
    big(a,b);
}
*/

/*
//입력 받은 값이 짝수인지 홀수인지 판단하는 함수 제작
#include <stdio.h>
void juge(int x);

int main(){
    int a;
    
    printf("숫자를 입력해 주세요 짝수 인지 홀 수 인지 판단 해 드리겠습니다 : ");
    scanf("%d",&a);
    
    juge(a);
}

void juge(int x){
    if(x%2==0){
        printf("해당 숫자는 짝수 입니다.\n");
    }
    else if(x%2==1){
        printf("해당 숫자는 홀수 입니다.\n");
    }
    else {
        printf("해당 숫자는 정수가 아닙니다.\n");
    }
}
*/


/*
// 연습문제
#include <stdio.h>

int a = 100;

void func(int n, int m){
    static int b = 1;
    char c = 'A';
    
    printf("%d, %d, %d, %d, %c\n",n,m,a,b,c);
    
    b++;
    c++;
    a = a+ 10;
    
    printf("%d\n",a);
}

int main(){
    int b = 10;
    int c = 20;
    
    func(b, c);
    
    func(b+a,c+a);
    
    a = a + 10;
    
    printf("%d\n",a);
}

// A mon avis,
// 10, 20, 100, 1, A
// 110
// 110, 120, 100, 1, A
// 110
// 110

// Resultat,
// 10, 20, 100, 1, A
// 110
// 120,130,110,2,A
// 120
// 130
 
*/

/*
//
#include <stdio.h>

int fact(int n){
    if (n == 0){
        return 1;
    }
    
    else if (n == 1){
        return n;
    }
    
    else{
        return fact(n-1) *n;
    }
}

int main(){
    int x;
    
    scanf("%d", &x);
    printf("입력하신 숫자의 팩토리얼 값은 = %d\n", fact(x));
}
*/


/*
//Random 값 만들기 !
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
    srand(time(0)); //srand(0)의 값은 초기 값을 0으로 잡고 rand 함수를 돌리기 시작한다라는 말이다. 예를들어 srand(100)라고 한다면 초기값을 100으로 잡고 rand 함수를 돌리기 시작한다.
    
    for(;;){
        int n = rand() % 3 ;
        printf("rand : %d\n", n-1);
        sleep(1);
    }
}
*/

/* // 미완성 거품정렬
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define LOTTO    rand() % 45 + 1

void bubble_sort(int arr[], int count){
    int temp;
    
    for(int i=0; i<6;i++){
        for(int j=0;j<5;j++){
            if(arr[j] > arr[j +1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n1, n2, n3, n4, n5, n6, defi;
    srand(time(0));
    for (;;) {
        n1 = LOTTO;
        n2 = LOTTO;
        n3 = LOTTO;
        n4 = LOTTO;
        n5 = LOTTO;
        n6 = LOTTO;
        
        defi = (n1-n2)*(n1-n3)*(n1-n4)*(n1-n5)*(n1-n6)*(n2-n3)*(n2-n4)*(n2-n5)*(n2-n6)*(n3-n4)*(n3-n5)*(n3-n6)*(n4-n5)*(n4-n6)*(n5-n6);
        
        if(defi==0){
            SA_RESTART;
        }
        
        else{
            int numArr[6] ={n1,n2,n3,n4,n5,n6};
            
            bubble_sort(numArr,sizeof(numArr)/sizeof(int));
            

        //중복된 번호가 나오지 않도록 코드를 수정해보세요.
        printf("lotto : %2d %2d %2d %2d %2d %2d\n",
               n1, n2, n3, n4, n5, n6);
                sleep(1);
                
            
        }
    }
}
*/
/*
#include <stdio.h>

int main(){
    // 모두 가능한 Case
    char str1[5];
    char str2[5] = {'a','b','c','d',65};
    char str3[5] = {'\0'};
    char str4[] = "hello";
    char str5[6] = {"hello"};
}
*/

