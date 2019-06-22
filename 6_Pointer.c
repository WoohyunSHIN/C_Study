//
//  main.c
//  6_Pointer
//
//  Created by WoohyunSHIN on 08/01/2019.
//  Copyright © 2019 Woo. All rights reserved.
//
/*
#include <stdio.h>

int main(){
    int a = 10;
    int* p = &a;
    
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",*(&a));
}
*/

/*
#include <stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*p);
    printf("%d\n",pp);
    printf("%d\n",&pp);
    printf("%d\n",*pp);
    printf("%d\n",**pp);
    printf("%d\n",ppp);
    printf("%d\n",&ppp);
    printf("%d\n",*ppp);
    printf("%d\n",**ppp);
    printf("%d\n",***ppp);
}
*/
/*
#include <stdio.h>

int main(){
    char ch1 = 'A', ch2;
    char *ptr;
    
    ptr = &ch1;
    ch2 = *ptr;
    
    printf("\n 변수 ch1의 주소는 %p 번지이다.",&ch1);
    printf("\n 변수 ptr의 내용는 %u 번지이다.",(unsigned int)ptr);
    printf("\n 변수 *ptr의 내용는 %c 번지이다.",*ptr);
    printf("\n 변수 ch2의 내용는 %p 번지이다.",ch2);
    
}
*/


/*
#include <stdio.h>
int main(){
    int num1 = 10,num2;
    int* ptr;
    
    ptr = &num1;
    printf("%d\n",ptr);
    num1++;
    printf("%d\n",num1);
    num2 =5;
    ptr =&num2;
    printf("%d\n",ptr);
    
    *ptr = *ptr + num1 + num2;
    
    printf("num1=%d, num2=%d, *ptr=%d\n", num1,num2,*ptr);
}
 */

/*
#include <stdio.h>

int main(){
    char vc = 'A', *pc;
    pc = &vc; // 문자형 포인터
    
    printf("pc-1=%u 번지\npc=%u번지\npc+1=%u번지\n",(unsigned int)pc-1,(unsigned int)pc,(unsigned int)pc+1);
}
*/
/*
#include <stdio.h>

int main(){
    int vi=123,*pi;
    pi = &vi;
    
    printf("pi-1=%u번지\npi=%u번지\npi+1=%u번지\n",pi-1,pi,pi+1);
    
}
*/
/*
#include<stdio.h>
int main(){
    char a = 'A';
    float b = 12.345;
    
    char *pa;
    float *pb;
    
    pa=&a;
    pb=&b;
    
    printf("문자형 변수의 크기 : %d\n",sizeof(a));
    printf("실수형 변수의 크기 : %d\n",sizeof(b));
    printf("포인트형 문자형 변수의 크기 : %d\n",sizeof((unsigned int)pa));
    printf("포인트형 문자형 변수의 크기 : %d\n",sizeof((unsigned int)pa));
}
*/
/*
#include <stdio.h>
int main(){
    int i=5,j=10;
    int *p=&i,*q=&j;
    
    printf("(1) i = %d, j= %d\n",i,j);
    printf("(2) &i = %p, &j = %p\n",&i, &j);
    printf("(3) p = %p, q = %p\n",p, q);
    printf("(4) *p = %d, *q = %d\n",*p, *q);
    printf("(5) p == &i ==> %d\n",p == &i);
}
*/


// <동적할당의 필요성>
/*
#include <stdio.h>

void print_arr(int * arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%2d-", arr[i]);
    }
    printf("\n");
}

void min_search(int * arr, int size) {
    int copyarr[size];//이 시점에 필요한 배열을 할당해야 하는데....
    //이 때 동적할당을 사용할 수 있다!!!
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    print_arr(arr, size);
    printf("가장 작은 값:%d\n", arr[0]);
}

int main() {
    int arr[10] = { 5,2,7,10,6,8,1,9,4,3 };
    print_arr(arr, 10);
    min_search(arr, 10);
    print_arr(arr, 10);
}
*/

/*
// 위에 문제 해결 방법
#include <stdio.h>
#include <stdlib.h>

void print_arr(int * arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%2d-", arr[i]);
    }
    printf("\n");
}

void array_copy(int *ori, int * dst, int size){
    for (int i=0; i <size;i++){
        dst[i] =ori[i];
    }
}


void min_search(int * arr, int size) {
    
    int *tmparr = (int*)malloc(sizeof(int)*size);
    array_copy(arr,tmparr,size);
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (tmparr[i] > tmparr[j]) {
                int tmp = tmparr[i];
                tmparr[i] = tmparr[j];
                tmparr[j] = tmp;
            }
        }
    }
    //print_arr(arr, size);
    printf("가장 작은 값:%d\n", tmparr[0]);
     free(tmparr);
}

int main() {
    int arr[10] = { 5,2,7,10,6,8,1,9,4,3 };
    int *a;
    int len = 0;
    
    a = (int*)malloc(sizeof(int)*len);
    
    print_arr(arr, 10);
    min_search(arr, 10);
    print_arr(arr, 10);
}
*/

//동적할당이란 것은 정적 바인딩(Compile Time, 컴파일 하는 시점에 할당된다.), 동적 바인딩(Run time 중 에 할당된다.) 이라는게 있다.
// 동적할당을 할수 있도록 구성된 함수 할당 = malloc(size_t size) ="memory allocate" && 할당 해제 = free(ptr) = " 동적 할당 메모리 다 써서 정리해도 된다.
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    void *p = malloc(4);  // heap part에 4 byte 짜리 공간을 만들고 void 형 pointer 를 반환하게 설계 되어있는 함수이다.
    a = (int*)p;
    *a = 100;
    
    printf("동적할당 한 곳 : %p\n",a);
    printf("a가 참조하는 곳 : %p\n",a);
    printf("%d\n",*a);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    char *ch;
    void *p = malloc(4);
    
    a= (int*)p;
    *a=65;
    ch = (char*)p;
    
    printf("동적할당 한 곳 : %p\n",a);
    printf("a가 참조하는 곳 : %p\n",a);
    printf("%d\n",*a);
    printf("%c\n",*ch);
}
*/
/*
//응용
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *a;
    int len = 0;
    printf("길이를 입력하세요.");
    scanf("%d",&len);
    
    a = (int*)malloc(sizeof(int)*len);
    
    for (int i=0;i<len;i++){
        a[i] = i + 1;
    }
    
    for (int i = 0; i < len; i ++){
        printf("arr[%d]:%d\n",i,*(a+i));
        
    }
}
*/



