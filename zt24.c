#include<stdio.h>

//1
// int main(void)
// {
// 	char ch;
// 	int first = 1, k, n, x;
// 	scanf("%d", &n);
// 	for(k=1; k<=n; k++){
// 		scanf("%d", &x);
// 		if(x%2 == 0){
// 			if(first == 1){
// 				printf("%d", x);
// 				first = 0;
// 			}else{
// 				printf("%d", x);
// 			}
// 		}
// 	}
// }

//2
int main(void){
	int i, j, k = 0, m = 0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			k++;
			m++;
		}
		printf("k=%d£¬m=%d\n",k,m);
	}
	return 0;
}