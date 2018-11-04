//求解如下方程组 
//ax + by = c
//dx + ey = f
//注意输出/输入，数据类型
#include <stdio.h>
int main()
{
	float a,b,c,d,e,f;
	printf("请输入6个数，分别代表ax + by = c和dx + ey = f中的六个未知数");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if(a*e-b*d==0 && a*f-c*d!=0)
	printf("方程组无解"); 
	if(a*e - b*d == 0 && a*f-c*d==0)
	printf("方程组有无穷多个解");
	if(a*e-b*d!=0)
	printf("x=%f,y=%f",(c*e-b*f)/(a*e-b*d),(a*f-c*d)/(a*e-b*d));
	return 0;
 } 
