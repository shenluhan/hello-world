//������·����� 
//ax + by = c
//dx + ey = f
//ע�����/���룬��������
#include <stdio.h>
int main()
{
	float a,b,c,d,e,f;
	printf("������6�������ֱ����ax + by = c��dx + ey = f�е�����δ֪��");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if(a*e-b*d==0 && a*f-c*d!=0)
	printf("�������޽�"); 
	if(a*e - b*d == 0 && a*f-c*d==0)
	printf("����������������");
	if(a*e-b*d!=0)
	printf("x=%f,y=%f",(c*e-b*f)/(a*e-b*d),(a*f-c*d)/(a*e-b*d));
	return 0;
 } 
