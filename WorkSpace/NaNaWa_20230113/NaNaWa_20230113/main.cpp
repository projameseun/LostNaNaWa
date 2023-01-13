#include <iostream>
#include <bitset>
enum class GunslingerSkill
{
	DualBuckshot = 0x1,
	FocusedShot = 0x2,
	LastRequest = 0x4,
	Peacekeeper = 0x8,

	PerfectZone = 0x10,
	Sharpshooter = 0x20,	//32
	//Sharpshooter = 0x40,

};



int main()
{
	/*
		��Ʈ���� �� ������:AND(&),OR(|),NOT(~),XOR(^)
		�� �� ���� �����Ͽ� ����� ���� ������ �ȴ�.
		
		 110 & 52 = 
		&0110 1110
		 0011 0100
		-----------
		 0010 0100

		 36�̵ȴ�.

		 110 | 52 =
		|0110 1110
		 0011 0100
		 ----------
		 0111 1110

		 126�� �ȴ�.

		 A		B		XOR
		 false	false	false
		 false	true	true
		 true	false	true
		 true	true	false

		 XOR�� �ΰ��� ������ false �ٸ��� true�� ���´�.

		  110 ^ 52 =
		^0110 1110
		 0011 0100
		 ----------
		 0101 1010

		 10 + 16+ 64 = 90�̵ȴ�.
		 
		 NOT~�����ڴ� 1�� 0, 0�� 1�� ����ȴ�.
		 ~110 
		 0110 1110
		 ---------
		 1001 0001

	*/

	std::cout << "110 & 52 = " << (110 & 52) << std::endl;
	std::cout << "110 | 52 = " << (110 | 52) << std::endl;
	std::cout << "110 ^ 52 = " << (110 ^ 52) << std::endl;

	
	//����Ʈ������ : << , >> 2������ �ִ�.
	//�� �� ���� �����Ͽ� ����� ���� ������ �ȴ�.
	
	unsigned char a = 3;

	//a<<=1;
	a = a << 5;		//2��n�� * ��� ///2��5���� 32 ,���� ���ϱ� ��� �θ���
	a = 0;
	unsigned char b = 8;	//2��n�� ������	,���� ������ ��� �θ���.

	b >>= 2;	
	b = 0;

	/*
	30 << 2 = 
	0001 1110	�� ���� �ڿ� 0 �� 2�����̶�°��̴�.
	 111 1000
	
	120�̵ȴ�. 

	30 << 3 = 
	0001 1110
	1111000
	240 �̵ȴ�.

	30 << 2 ==> 2��2�� * 30  //120
	30 << 3 ==> 2��3�� * 30  //240

	30 >> 2 
	11110 
	111 
	7�̵ȴ�.
	
	30 >> 3
	11110 
	11
	3

	30 >> 2 ===>2��2�� / 30 //7
	30 >> 3 ===>2��3�� / 30 //3

	*/

	//��Ʈ������ , ����Ʈ�����ڸ� �̿��ؼ� ���ӿ��� ����ϴ¹�

	int iSkill = 0;

	iSkill = iSkill | (int)GunslingerSkill::DualBuckshot;
	//iSkill |= (int)GunslingerSkill::DualBuckshot;		//�����־��ٴ�
	iSkill |= (int)GunslingerSkill::FocusedShot;

	std::cout << std::bitset<8>(iSkill) << std::endl;

	//iSkill ^= (int)GunslingerSkill::FocusedShot;		//������ �ְ�, ������ ����
	//iSkill ^= (int)GunslingerSkill::FocusedShot;		

	//Ư���ڸ� ��Ʈ����
	iSkill &= ~(int)GunslingerSkill::DualBuckshot;		//����


	if (iSkill & (int)GunslingerSkill::DualBuckshot)	//Ȯ���� �Ѵ�
	{
		std::cout << "������ �ߵ�" << std::endl;
	}
	if (iSkill & (int)GunslingerSkill::FocusedShot)
	{
		std::cout << "��Ŀ���� �ߵ�" << std::endl;
	}

	return 0;
}
