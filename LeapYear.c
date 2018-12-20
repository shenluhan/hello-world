//被4整除的年份是闰年，但是00结尾的年份被400整除才是闰年。
//2018/11/14 更新
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
