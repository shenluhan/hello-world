//回文数：正读与反读相等的数
//2018/11/14 更新
#include<stdio.h>
int main() {
	int n,x[100000];
	int j=0;
	int b=0;
	scanf("%d",&n);
	int i;
	for(i=0;1;i++){
			x[i]=n%10;
			j++;
			n=(n-x[i])/10;
			if(n<10){
				x[j]=n;
				if(j%2!=0){
					int v;
				for( v=0;v<(j+1)/2;v++){
					if(x[v]!=x[j-v]) b++;
				}
			}
			else{
				int p;
			for(p=0;p<(j/2);p++){
					if(x[p]!=x[j-p]) b++;
				}
			}
				if(b!=0) printf("no");
				else printf("yes");	
				break;
			}
		}
    return 0;
}

