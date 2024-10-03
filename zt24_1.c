#include<stdio.h>
int main(void)
{
	char ch;
	int first = 1, k, n, x;
	scanf("%d", &n);
	for(k=1; k<=n; k++){
		scanf("%d", &x);
		if(x%2 == 0){
			if(first == 1){
				printf("%d", x);
				first = 0;
			}else{
				printf("%d", x);
			}
		}
	}
}
