/*����������������Ȼ����Ϊ��������:��������,��������֮��,��������֮���Լ��������ֵ�ƽ���Ͷ�������.����113����һ����������.��[100,9999]֮��:(1)���������ĸ���.(2)���г�������֮��.(3)���ĳ�������.*/
//2018/11/14 ����
//int sum_bit(int num) {  return 0;}int multi_bit(int num) {return 0;}int square_sum_bit(int num) {return 0;}bool isprime(int num) {return false;}int main() {if(isprime(113)&&isprime(sum_bit(113))&&isprime(multi_bit(113))&&isprime(square_sum_bit(113)))}
#include<stdio.h>
int main(){
	int n,x[10000],a=0,b=0,c=1,d=0,s=0,t=0,f=0;
	scanf("%d",&n);
	int j;
	for(j=2;j<n;j++){
		if(n%j==0) a++;
	}
		if(a!=0) printf("no\n");
	else {
		int i;
		for(i=0;1;i++){
			x[i]=n%10;
			j++;
			n=(n-x[i])/10;
			if(n<10){
				x[j]=n;
				int q;
				for(q=0;q<=j;q++){
					b=b+x[q];
					c=c*x[q];
					d=d*d+x[q]*x[q];
				}
	int r;
	for(r=2;r<b;r++){
		if(b%r==0) s++;
	}		
	int o;
	for(o=2;o<c;o++){
		if(c%o==0) t++;
	}		
	int g;
	for(g=2;g<d;g++){
		if(d%g==0) f++;
	}
	if(s==0&&t==0&&f==0) printf("yes\n");
	else printf("no\n");break;
	}
}
}
	return 0;
}
