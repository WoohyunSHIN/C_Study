# C

***

## 0. 코딩 입문

> 프로그래밍 언어를 처음 접하게 되면 가장 먼저 마주하는 단어들이 있다. 예를 들어 코딩, 컴파일, 빌드, 디버그 등이 존재한다. 기술 적인 부분에 대해 공부하기 전 최소한 이 단어들이 어떠한 뜻을  지니는지는 알고 지나가자.

> **코딩이란?** 컴퓨터 프로그래밍에서 인간이 쓰는 언어로 코드를 작성하는 것을 뜻한다. 컴퓨터가 이해하는 것은 오직 0, 1로 이루어진 숫자이기 때문이다.
>
> **컴파일이란?**  인간이 쓰는 언어 {a,b,c,d} 를 컴퓨터가 알아볼 수 있도록 0,1로 이루어진 문서로 바꾸는 것이라고 생각하면 편하다.
>
> * 예를들어 확장자 .c 는 우리가 이해할 수 있는 언어로 이루어진 파일
> * .obj 는 컴퓨터가 알아 볼 수 있도록 작성된 0,1 로 이루어진 파일이다.
> * 그 후, build 라는 작업을 통하여 .obj 파일을 .exe 과 같은 실행파일로 변환시킨다. 

***

# 1. 표준 입,출력 함수

>  컴퓨터와 사람이 대화를 하기 위해선 사람과 컴퓨터에게 input 과 ouput 이라는 개념을 이해 할 필요가 있다. output은 쉽게 말하여 컴퓨터가 우리에게 프로그램을 실행하여 출력해주는 화면을 말한다. 반대로 input은 우리가 입력 하는 값을 컴퓨터에게 전달하는 개념을 뜻한다. 

>   가장 먼저 배우는 표준출력함수로 printf 가 있다. 