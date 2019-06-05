//
//  main.c
//  (9)library_program
//
//  Created by WoohyunSHIN on 16/01/2019.
//  Copyright © 2019 Woo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct _inf{
    char bookname[100];
    char author[100];
    int sorti_annee;
}INFO, *PINFO;

int main(){
    int size;

    printf("총 입력하실 책의 갯수를 적으시오 : ");
    scanf("%d", &size);
    
    int* add = (int*) malloc(sizeof(int)*size);
    for (int i=0;i<size;i++){
        arr[i]= // 여기에 뒤에 구조체 위치가 달려야 한다.
    }
}
    
    
  
    
/*
//  struct _inf* a =(struct _inf*) malloc(sizeof(struct _inf));
    

    while(1){
        int select=0;
        char bookname_search[100];
        
        printf("1.도서 등록\n");
        printf("2.도서 목록\n");
        printf("0.종료\n");
        printf("입력 : ");
        scanf("%d", &select);

        
        switch(select){
                
               
            
            case 1 :
                for(i=)
                printf("책이름을 입력하시오 : ");
                scanf("%s",a->bookname);
                printf("작가를 입력하시오 : ");
                scanf("%s",a->author);
                printf("출판 연도를 입력하시오 : ");
                scanf("%d",&a->sorti_annee);
                break;
                
            case 2 :
                printf("찾으시는 책 이름을 기입해주세요 : ");
                scanf("%s",bookname_search);
                
                if(a->bookname==bookname_search){
                    printf("찾으시는 책의 이름은 %s이고 작가는 : %s 이며, 출판연도는 %d 입니다.",a->bookname,a->author,a->sorti_annee);
                }
                
                else {
                    printf("다시 기입해주 세요.");
                }
                
//                    case 3 : continue;
        }
    }
    free(a);
 }
*/


/* 배열을 늘려 보아라
 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
     int* arr = 0;
     int size = 3;
     //기존 배열
     arr = (int*)malloc(sizeof(int)*size);
     
     //배열 늘리기
     int* tmp = arr;
     arr = (int*)malloc(sizeof(int)*(size+3));
     for(int i=0;i < size; i++){
         arr[i]=tmp[i];
     }
     free(tmp);
     
     //정리
     free(arr);
 }
*/
