#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	float x, y;//�á�ȵ��������Ѻ input
	float counted_num;//��С�ȵ���÷�����Ѻ�ӹǹ�Ţ�����ҧ��� x ��� y
	printf("insert number 1 : ");
	scanf("%f", &x);//�Ѻ��ҵ���� x
	printf("insert number 2 : ");
	scanf("%f", &y);//�Ѻ��ҵ���� y
	if (x < y)
	{
		float average;//��С�ȵ��������Ѻ��������
		int i, z = 0;//��С�ȵ���� i �������ѹ����ٻ ��е���� z �����������Ңͧ�Ţ�ء�Ţ�����ҧ x ��� y
		for (i = x; i <= y; i++)
		{
			z = z + i;//�Ҽ�����Ţ�����ҧ��� x ��� y
			printf("%d ", i);//�ʴ���� ����Ţ������������������ x ��� y
		}
		counted_num = i - x;// �ӹǹ�ͧ�Ţ���͹��������ҧ�Ţ x ��� y
		average = z / counted_num;//�Ҥ�������
		printf("\nAverage = %.1f", average);
		
		//�ٻ����Ѻ s.d  *********
			float i_2;//��С�ȵ��������ѹ��ٻ
			float pow1;
			float pow2=0;//��С�ȵ���ü�����Ţ¡���ѧ
			for (i_2 = x; i_2 <= y; i_2++)
				{	
				pow1=pow(i_2-average, 2);//�Ӣ����ŵ�駵鹷���������Ф��ź���¤�����������¡���ѧ�ͧ
				pow2 = pow2 + pow1;//�ӵ�����е�Ƿ��¡���ѧ�������Ǻǡ�ѹ��������
				}
			float after_pow_1, after_pow_2;//��駵��������Ѻ��� s.d �������
			after_pow_1 = pow2 / (counted_num - 1);//�Ӥ�ҷ����(pow2) ���èӹǹ�����ŷ���Ѻ��ź���� 1
			after_pow_2 = sqrt(after_pow_1);//�Ӥ�ҷ����(after_pow_1) �������ٷ
			printf("\nSD = %.2f", after_pow_2);
	}
	if (x > y)
	{
		
		float average;//��С�ȵ��������Ѻ��������
		int i, z = 0;//��С�ȵ���� i �������ѹ����ٻ ��е���� z �����������Ңͧ�Ţ�ء�Ţ�����ҧ x ��� y
		//����Ѻ����Ţ
		for (i = x; i >= y; i--)
		{
			printf("%d ", i);//�ʴ���� ����Ţ������������������ x ��� y
		}
		for (i = y; i <= x; i++)
		{
			z = z + i;//�Ҽ�����Ţ�����ҧ��� x ��� y
		}
		counted_num = i - y;// �ӹǹ�ͧ�Ţ���͹��������ҧ�Ţ x ��� y
		average = z / counted_num;//�Ҥ�������
		printf("\nAverage = %.1f", average);

		//�ٻ����Ѻ s.d  *********
		float i_2;//��С�ȵ��������ѹ��ٻ
		float pow1;//��С�ȵ����
		float pow2 = 0;//��С�ȵ���ü�����Ţ¡���ѧ
		for (i_2 = y; i_2 <= x; i_2++)
		{
			pow1 = pow(i_2 - average, 2);//�Ӣ����ŵ�駵鹷���������Ф��ź���¤�����������¡���ѧ�ͧ
			pow2 = pow2 + pow1;//�ӵ�����е�Ƿ��¡���ѧ�������Ǻǡ�ѹ��������
		}
		float after_pow_1, after_pow_2;//��駵��������Ѻ��� s.d �������
		after_pow_1 = pow2 / (counted_num - 1);//�Ӥ�ҷ����(pow2) ���èӹǹ�����ŷ���Ѻ��ź���� 1
		after_pow_2 = sqrt(after_pow_1);//�Ӥ�ҷ����(after_pow_1) �������ٷ
		printf("\nSD = %.2f", after_pow_2);
	}
	//�óշ���Ţ �nput �ͧ�����ҡѹ
	if (x == y)
	{
		printf("%.0f %.0f", x,y);
		printf("\nAverage = %.0f", (x + y) / 2);
		printf("\nSD = 0");
	}

	

}