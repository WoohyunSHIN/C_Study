//
//  main.c
//  (2)AddHeader
//
//  Created by WoohyunSHIN on 02/01/2019.
//  Copyright © 2019 Woo. All rights reserved.
//

/*
 #include "mydefine.h" // 내가 만든 header 파일을 가져올려면 쌍 따옴표를 사용한다.
 
 int main(){
 printf("%s\n",NAME);
 printf("%d\n",AGE);
 printf("%s\n",ADDRESS);
 printf("%.2lf\n",PI);
 printf("%d\n",TRUE);
 }
 */


/*
#include "mydefine.h"

int main(){
    int ret;
    
    ret = PI * 2 * 5;
    
    printf("%d",ret);
    NL;
    printf("%d",(int)PI);
    NL;
    
    DP(ret);
    NL;
    FP(PI);
    NL;

}
*/


/*
#include "mydefine.h"
#define SUM(a,b)    a+b
#define MUL(a,b)    a*b

int main(){
    int ret;
    
    ret=SUM(2+3,4+5);
    DP(ret);
    NL;
    
    ret=MUL(2+3,4+5);       // 전처리이기 때문에 19가 나온다. 주의 해야한다!!
    DP(ret);
    NL;
}
*/

//변수의 종류(
//1. 지역(local)변수 : {}(블록) 내에서 선언된 변수 블록이 벗어나면 적용되지 않는다.
//2. 전역(global)변수 : {}(블록) 에 선언되지 않은 변수
//3. 정적(static)변수 : {}(블록)내에 선언되고 static이 붙은 변수이다. 특징 : 블록 내에서만 접근 가능, 유지됨.

/*
 #include "mydefine.h"
 
 int main(){
 int value;
 
 for(value = 0;value <10; value++){
 printf("%d\n",value);
 value++;
 }
 }
 */
