#include <iostream>

//���������� : public , private 

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
		std::cout << "�л� ������α׷�" << std::endl;
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
		std::cout << "�л����� �����ϰ� �ִ����Դϴ�" << std::endl;
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
	MyStudent st = {};	//�ʱ�ȭ
	//MyStudent st2 = { 10,10,10,0.f,0,"���ӽ�" };

	//�ڷ����� ũ�⸦ �˼��ִ�.

	//st. .���̿��ؼ� �����Ҽ� �ִ�
	
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