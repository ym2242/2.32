#include<stdio.h>

int main(void)
{
	float w, h, BMI;
	printf("請輸入身高(公尺)以及體重(公斤)\n");
	scanf_s("%f%f", &h, &w);
	BMI = w / (h*h);
	printf("Your BMI is %.2f\n", BMI);
	printf("BMI VALUES\nUnderweight:	less than 18.5\nNormal:		between 18.5 and 24.9\nOverweight:	between 25 and 29.9\nObese:		30 or greater\n");

	system("pause");
	return 0;


}