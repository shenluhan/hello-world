//��4��������������꣬����00��β����ݱ�400�����������ꡣ
//2018/11/14 ����
int main() {
	int n;
	scanf("%d",&n);
	if(n%100!=0) {
		if(n%4!=0) printf("no");
		else printf("yes");
	}
	else{
		n=n/100;
		if(n%4!=0) printf("no");
		else printf("yes");
	}
 return 0;   
}
