#include <iostream>


enum class GunslingerSkill
{
	DualBuckshot = 1,
	Focusedshot = 2,
	LastRequest = 4,
	Peacekeeper = 8,
	PerfectZone = 16,
	Sharpshooter = 32,

};


int main()
{
	/*
		��Ʈ���� �� ������ : AND(&), OR(|), NOT(-), XOR(^)
		�ӵ��� ����
		�� �� ���� �����Ͽ� ����� ���� ������ �ȴ�.

		110 & 52 = 
		&0110 1110 
		 0011 0100
	    ----------
		 0010 0100

		 36�� �ȴ�

		 110 | 52
		 |0110 1110
		  0011 0100
		  ---------
		  0111 1110

		  126�� �ȴ�


		  A         B       XOR
		  false		false	false
		  false		true	true
		  true		false	true
		  ture		ture	false

		  XOR�� �ΰ��� ������ FALSE �ٸ��� TRUE�� ���´�

		   110 ^ 52
		 ^0110 1110
		  0011 0100
		  ---------
		  0101 1010

		  10 + 16 + 62 = 90 �� ���´�.

		  NOT~ �����ڴ� 1�� 0, 0�� 1�� ����ȴ�.
		  ~110
		  0110 1110
		  ---------
		  1001 0001



	*/


	std::cout << "110 & 52" << "="<< (110 & 52) << std::endl;
	std::cout << "110 | 52" << "=" << (110 | 52) << std::endl;
	std::cout << "110 ^ 52" << "=" << (110 ^ 52) << std::endl;

	int iNumber = 8;
	std::cout << "iNum = " << (~iNumber) << std::endl;	//�������鶧 1�� ���� + 1


	//����Ʈ������ : << , >>  2������ �ִ�. 
	//�� �� ���� �����Ͽ� ����� ���� ������ �ȴ�.
	
	unsigned char a = 2;

	//a<<=1;(�����) ��Ʈ�� ��ĭ �������� �о� ���ڴ� 
	a = a << 2;  //2
	
	a = 0;


	unsigned char b = 100; //2�� n�� % ��, = ���� ������ ��� �θ���. �� ���´� 
	b >>= 3;
	b = 0;

	/*
	* 30 << 2 = 
	* 0001 1110
	* 
	* 
	*/


	//��Ʈ������, ����Ʈ�����ڸ� �̿��ؼ� ���ӿ��� ����ϴ� ��


	int iSkill = 0;
	iSkill |= (int)GunslingerSkill::DualBuckshot;		//���� �־��ش�
	iSkill |= (int)GunslingerSkill::Focusedshot;



	if (iSkill | (int)GunslingerSkill::DualBuckshot)	//Ȯ���� �Ѵ�
	{
		std::cout << "�������ߵ�" << std::endl;

	} 

	return 0;

}	