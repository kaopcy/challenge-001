#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	float x, y;//ปรกาศตัวแปรสำหรับ input
	float counted_num;//ประกาศตัวแปรที่ไว้นับจำนวนเลขระหว่างค่า x และ y
	printf("insert number 1 : ");
	scanf("%f", &x);//รับค่าตัวแปร x
	printf("insert number 2 : ");
	scanf("%f", &y);//รับค่าตัวแปร y
	if (x < y)
	{
		float average;//ประกาศตัวแปรสำหรับค่าเฉลี่ย
		int i, z = 0;//ประกาศตัวแปร i เพื่อใช้รันค่าลูป และตัวแปร z เพื่อใช้รวมค่าของเลขทุกเลขระหว่าง x และ y
		for (i = x; i <= y; i++)
		{
			z = z + i;//หาผลรวมเลขระหว่างค่า x และ y
			printf("%d ", i);//แสดงค่า ตัวเลขทั้งหมดที่อยู่ระหว่ง x และ y
		}
		counted_num = i - x;// จำนวนของเลขที่อนยู่ระหว่างเลข x และ y
		average = z / counted_num;//หาค่าเฉลี่ย
		printf("\nAverage = %.1f", average);
		
		//ลูปสำหรับ s.d  *********
			float i_2;//ประกาศตัวแปรไว้รันในลูป
			float pow1;
			float pow2=0;//ประกาศตัวแปรผลรวมเลขยกกำลัง
			for (i_2 = x; i_2 <= y; i_2++)
				{	
				pow1=pow(i_2-average, 2);//นำข้อมูลตั้งต้นที่ได้มาแต่ละค่าลบด้วยค่าเฉลี่ยแล้วยกกำลังสอง
				pow2 = pow2 + pow1;//นำตัวแต่ละตัวที่ยกกำลังเสร็จแล้วบวกกันไปเรื่อยๆ
				}
			float after_pow_1, after_pow_2;//ตั้งตัวแปรสำหรับค่า s.d เพิ่มเติม
			after_pow_1 = pow2 / (counted_num - 1);//นำค่าที่ได้(pow2) ไปหารจำนวนข้อมูลที่รับมาลบด้วย 1
			after_pow_2 = sqrt(after_pow_1);//นำค่าที่ได้(after_pow_1) ไปหาสแควรูท
			printf("\nSD = %.2f", after_pow_2);
	}
	if (x > y)
	{
		
		float average;//ประกาศตัวแปรสำหรับค่าเฉลี่ย
		int i, z = 0;//ประกาศตัวแปร i เพื่อใช้รันค่าลูป และตัวแปร z เพื่อใช้รวมค่าของเลขทุกเลขระหว่าง x และ y
		//สำหรับโชว์เลข
		for (i = x; i >= y; i--)
		{
			printf("%d ", i);//แสดงค่า ตัวเลขทั้งหมดที่อยู่ระหว่ง x และ y
		}
		for (i = y; i <= x; i++)
		{
			z = z + i;//หาผลรวมเลขระหว่างค่า x และ y
		}
		counted_num = i - y;// จำนวนของเลขที่อนยู่ระหว่างเลข x และ y
		average = z / counted_num;//หาค่าเฉลี่ย
		printf("\nAverage = %.1f", average);

		//ลูปสำหรับ s.d  *********
		float i_2;//ประกาศตัวแปรไว้รันในลูป
		float pow1;//ประกาศตัวแปร
		float pow2 = 0;//ประกาศตัวแปรผลรวมเลขยกกำลัง
		for (i_2 = y; i_2 <= x; i_2++)
		{
			pow1 = pow(i_2 - average, 2);//นำข้อมูลตั้งต้นที่ได้มาแต่ละค่าลบด้วยค่าเฉลี่ยแล้วยกกำลังสอง
			pow2 = pow2 + pow1;//นำตัวแต่ละตัวที่ยกกำลังเสร็จแล้วบวกกันไปเรื่อยๆ
		}
		float after_pow_1, after_pow_2;//ตั้งตัวแปรสำหรับค่า s.d เพิ่มเติม
		after_pow_1 = pow2 / (counted_num - 1);//นำค่าที่ได้(pow2) ไปหารจำนวนข้อมูลที่รับมาลบด้วย 1
		after_pow_2 = sqrt(after_pow_1);//นำค่าที่ได้(after_pow_1) ไปหาสแควรูท
		printf("\nSD = %.2f", after_pow_2);
	}
	//กรณีที่เลข รnput สองค่าเท่ากัน
	if (x == y)
	{
		printf("%.0f %.0f", x,y);
		printf("\nAverage = %.0f", (x + y) / 2);
		printf("\nSD = 0");
	}

	

}