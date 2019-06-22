//
//  main.c
//  7_Structure
//
//  Created by WoohyunSHIN on 10/01/2019.
//  Copyright © 2019 Woo. All rights reserved.
//
/*
#include <stdio.h>

struct _info{   // 필요한 자료형을 만드는 것이다.
    char name[20];
    int age;
};

int main(){
    struct _info info1={"홍길동",20};
    
    printf("%s\n",info1.name);
    printf("%d\n",info1.age);
}
*/

#include <stdio.h>

struct _info{
    char name[10];
    int age;
};

typedef struct _info INFO;  // struct _info 를 INFO라고 정의한다.

int main(){
    
}
