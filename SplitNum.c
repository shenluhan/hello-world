//������������ÿλ���ִ�ӡ�������������Ҵ�ӡ���ո����֣�
//2018/11/14 ����
#include<stdio.h>
int main() {
	int n,x[100000];
	int j=0;
	scanf("%d",&n);
	if(n<10) printf("%d",n);
	else if(n==10) printf("1 0");
	else{
		int i;
		for(i=0;1;i++){
			x[i]=n%10;
			j++;
			n=(n-x[i])/10;
			if(n<10){
				x[j]=n;
				int v;
			for(v=0;v<=j;v++)printf("%d ",x[j-v]);break;
			}
		}
	}
    return 0;
}
