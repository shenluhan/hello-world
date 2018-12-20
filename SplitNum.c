//输入整数，将每位数字打印出来（从左向右打印，空格区分）
//2018/11/14 更新
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
