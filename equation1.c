//求解一元二次方程的根
 //查阅sqrt()函数
 //注意有没有解 
 #include <math.h>
 #include <stdio.h>
 int main()
 {
 	float a,b,c;
 	printf("请输入三个数，分别表示ax*x+bx+c=0中三个未知数\n");
 	scanf("%f%f%f",&a,&b,&c);
 	if (b*b-4*a*c<0)
 	printf("此时方程无解\n");
	 else
	 {
	 	float h;
	 	h = sqrt(b*b-4*a*c);
	 	printf("此时方程有两个根为%f和%f",(-b+h)/(2*a),(-b-h)/(2*a));
	 }
 	return 0;
 }
