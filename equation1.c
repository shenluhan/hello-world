//���һԪ���η��̵ĸ�
 //����sqrt()����
 //ע����û�н� 
 #include <math.h>
 #include <stdio.h>
 int main()
 {
 	float a,b,c;
 	printf("���������������ֱ��ʾax*x+bx+c=0������δ֪��\n");
 	scanf("%f%f%f",&a,&b,&c);
 	if (b*b-4*a*c<0)
 	printf("��ʱ�����޽�\n");
	 else
	 {
	 	float h;
	 	h = sqrt(b*b-4*a*c);
	 	printf("��ʱ������������Ϊ%f��%f",(-b+h)/(2*a),(-b-h)/(2*a));
	 }
 	return 0;
 }
