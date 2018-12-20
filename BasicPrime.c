//素数是只有1和本身是因子的数
//2018/11/14 更新
int main() {
	int n,a=0;
	scanf("%d",&n);
	int i;
	for(i=2;i<n;i++){
		if(n%i==0) a++;
	}
	if(a!=0) printf("no");
	else printf("yes");
 return 0;   
}
