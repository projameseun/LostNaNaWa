

#include <iostream>
#include <stdio.h>

int main()
{
    //C++ 입출력방식
    std::cout << "Hello World!\n";

    int iNum = 0;

  //  std::cin >> iNum;

    //C언어 입출력방식
    //출력
    printf("안녕하세요\n");
    printf("그래요 안녕 하세요");
    printf("James Hellow\n");

    iNum = 10;

    float fNum = 0.f;

    fNum = 3.f;

    printf("James Hellow%d\n",iNum);
    printf("James Hellow%.1f\n", fNum);

    //C언어 입력
    //주소 &
    scanf_s("%d", &iNum);

    std::cout << iNum << std::endl;
    
    scanf_s("%f", &fNum);

    std::cout << fNum << std::endl;



}

