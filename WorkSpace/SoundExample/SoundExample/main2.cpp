
#include <iostream>
#include "Music.h"
//#include "test.h"

int main()
{
	//절대경로 , 상대경로 

	/*
		절대경로 최상위 디렉토리로부터 해당파일 까지 경유한 모든 경로를 전부기입하는 방식
		D:\NaNaWa_Study\LostNaNaWa\WorkSpace
		
		절대경로는 최상위 폴더부터 시작이 되기때문에 컴파일 속도가 오래 걸린다. 
		파일의 위치를 정확히 알고 있어서 분실 가능성 낮다.

		상대경로 현재파일이 존재하는 디렉토리를 기준으로 해당 파일까지의 위치를 작성한 경로

		상대경로는 기준으로 설정되어 있는 폴더를 탐색하기 때문에 컴파일 속도가 빠르다.
		파일의 위치를 잊어버렸을시 정확히 알지 못하기 때문에 분실가능성이 높다.
		
		.\ :현재 디렉토리
		..\ :현재 디렉토리의 부모 디렉토리

		.\..\..\
	*/

	InitMP3(L".\\Music\\seventeen.mp3");


	
	UpdateMP3(1);
	
	//Music* music = new Music;

	//music->InitMP3(L".\\Music\\seventeen.mp3");

	//music->UpdateMP3(1);



	//cMusic.InitMP3(L".\\Music\\seventeen.mp3");

	//cMusic.UpdateMP3(1);

	getchar();
	return 0;
}