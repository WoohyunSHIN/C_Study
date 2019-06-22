//
//  main.c
//  5_Arrange
//
//  Created by WoohyunsHIN on 07/01/2019.
//  Copyright © 2019 Woo. All rights reserved.
//
/*
#include<stdio.h>

int main(){
    int num[5]={4,8,2,7,6};
    int temp, i, j;
    
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        
        }
    }
    printf("%d",num[0]);
    printf("%d",num[1]);
    printf("%d",num[2]);
    printf("%d",num[3]);
    printf("%d",num[4]);
}
*/


/*
#include <stdio.h>

int main(){
    int std[5]={};
    
    printf("국어 점수를 입력하시오 : ");
    scanf("%d",&std[0]);

    printf("영어 점수를 입력하시오 : ");
    scanf("%d",&std[1]);
    
    printf("수학 점수를 입력하시오 : ");
    scanf("%d",&std[2]);
    
    printf("\n당신의 합계는 %d 입니다.", std[0]+std[1]+std[2]);
    
    printf("\n당신의 평균은 %d 입니다.", (std[0]+std[1]+std[2])/3);
}
*/
/*
// 배열의 합구하기
#include <stdio.h>

int main(){
    int arr[3] = {1,2,3};
    
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += arr[i];
    }
    
    printf("합 : %d\n",sum);
}
*/

/*
//배열의 합구하기 => 이거 자체를 함수로 아래에서 만들어보자
#include <stdio.h>

int arrSum(int arr[], int len){
    int sum = 0;
    for (int i = 0; i <len; i ++){
        sum +=arr[i];
    }
    return sum;
}

void func(int a[]){
    a[0]=100;
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {1,2,3};
    int arr3[10] = {1,2,3,4,5,6,7,8,9,10};
    
    printf("합: %d\n",arrSum(arr1, 5));
    printf("합: %d\n",arrSum(arr2, 3));
    printf("합: %d\n",arrSum(arr3, 10));
    
    func(arr2);
    printf("합: %d\n",arrSum(arr2,3));
}
*/


/*
#include <stdio.h>

void func(int arr[]){   // 배열은 main함수에서의 주소값을 가져와서 쓰기 때문에 원본을 쓴다는 말이다.
    arr[0] = 10;
}

void func2(int a){  // 변수는 main함수의 값을 copy 해서 쓴다. = Call by value.
    a = 10;
}

int main(){
    int arr[3] = {1,2,3};
    int a = 100;
    
    printf("%d\n",arr[0]);
    func(arr);
    printf("%d\n",arr[0]);
    
    printf("%d\n",a);
    func2(a);
    printf("%d\n",a);
}
*/



/*
#include <stdio.h>

int main(){
    char str[6] = "hello";
    
    for(int i =0;i<6;i++){
        printf("%c\n", str[i]);
    }
    
    printf("%s\n", str);
}
 */
 /* char 형 배열은 연속해서 쓸수도 있지만 따로 쓸 수도 있다.
 c.f #include <string.h> 안에 문자열을 처리할수 있는 함수들이 많이 있다. 만이 쓰는 함수는
 strlen(char* str);= 문자 길이
 strcmp(char* s1, char* s2);= 두 문자열 비교하는 함수
 strcpy(char* dest, char* src); = 한문자열을 다른 문자열로 복사하는 함수.
  */


/*
#include <stdio.h>

int main(){
    const int a = 10;
    
    a = 100;    // 이미 여기서 부터 바꿀수 없다고 나온다. 고정값을 만든다라고 생각하면 된다. 따라서 const = Define 과 많이 비교를 하게 된다(효율성문제).
    
    printf("%d\n",a);
    
}
*/


