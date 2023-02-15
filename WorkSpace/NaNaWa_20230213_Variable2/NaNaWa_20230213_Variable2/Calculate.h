#pragma once

//전처리 - > 컴파일 - > 빌드 - > 링크 - > 실행

//도구 -> 옵션 -> 환경 ->키보드에 들어가면 내가 원하느 단축키를 만들수 있다.


static int g_StaticNum = 0;

int Add(int a, int b);
int Minus(int a, int b);
int Multi(int a, int b);	///alt + Enter 단축키 누르면 정의만들기 바로 가능
int Divide(int a, int b);
void Func2();

//LNK -> 링크단계에서 오류가 발생 했다.
//C ->컴파일 단계에서 오류가 발생 했다.


//전역변수랑 아주 흡사하다
extern int g_iNumber;	//이런 변수가 있어 