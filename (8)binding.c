//
//  main.c
//  (8)binding
//
//  Created by WoohyunSHIN on 15/01/2019.
//  Copyright © 2019 Woo. All rights reserved.
//
// 동적 binding 과 정적 binding
/*
#include <stdio.h>

int main() {
    // 프로그램은 시작됐는데, 그 후에 필요한 길이를 받아서 배열을 만들고 싶을 때 한다.
    int size = 0;
    
    printf("길이 입력 : ");
    scanf("%d",&size);
    
    int arr[size]; // 불가능 하다. C 언어에서는 arr[상수] 여야 한다. 왜냐하면 Stack 은 main 함수 안에 size를 잡아 놔야하기 때문에, 따라서 동적binding 을 한다.
}
*/


/*
// 동적바인딩
#include <stdio.h>
#include <stdlib.h> // malloc(= mamory allocate)이 메모리에 size 만큼 공간을 확보한다
#include <string.h>

void print(char* ch){
    for (int i = 0; i < 20; i++){
        printf("%p-> %d\n",ch+i,ch[i]);
    }
}

int main(){
    int size = 0;
    
    printf("길이 입력 : ");
    scanf("%d", &size);
    
//  malloc(size*4);                 // 1. heap에 할당은 했는데 4byte가 , int 로 쓸지, float 으로 쓸지 모른다.
//  malloc(sizeof(int)*size);       // 2. int 형이 쓸꺼다 라고 말한것이다. 여기서 '*'는 곱하기이다. 
    void* tmp = malloc(sizeof(int)*size);
    print((char*)tmp);
    
    char* str = (char*)tmp;
    strcpy(str,"hell");
    print((char*)tmp);
    
    int*arr = (int*)tmp;
    for (int i = 0; i< size;i++){
        arr[i] = i+10;
    }
    print((char*)tmp);
    
    printf("%p -> %s\n",str,str);

    free(tmp);         //동적 할당 영역 해제
}
*/
