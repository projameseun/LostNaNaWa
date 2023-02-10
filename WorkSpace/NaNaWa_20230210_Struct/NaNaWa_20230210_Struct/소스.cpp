#include <iostream>

//접근지정자 : public , private 

typedef struct FStudent
{

private:
	int iKor;
	int iEng;
	int Math;
	int Toltal;
	char Name[25];

public:
	void PrintStudent()
	{
		std::cout << "학생 출력프로그램" << std::endl;
	}

	void Inital()
	{
		iKor = 10;
		iEng = 10;
		Math = 10;
		Toltal = 0;
		Name[0] = 'J';
		Name[1] = 'A';
		Name[2] = 'M';
		Name[3] = 'E';
		Name[4] = 'S';
	}

	void StudentStudy()
	{
		std::cout << "학생들이 공부하고 있는중입니다" << std::endl;
		std::cout << Name << std::endl;
	}

	
}MyStudent;

typedef struct FSchool
{
	MyStudent Myst;
	int iScore;

}MySchool;

int main()
{
	
	//struct 
	MyStudent st = {};	//초기화
	//MyStudent st2 = { 10,10,10,0.f,0,"제임스" };

	//자료형의 크기를 알수있다.

	//st. .을이용해서 접근할수 있다
	
	//std::cout <<sizeof(MyStudent);
	
	st.PrintStudent();
	st.Inital();
	st.StudentStudy();

	MySchool sc = {};
	
	sc.Myst.Inital();
	sc.Myst.StudentStudy();

//	FSchool scStudent;

	return 0;
}