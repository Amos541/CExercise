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
// int main(void){
// 	int i, j, k = 0, m = 0;
// 	for(i=0;i<2;i++){
// 		for(j=0;j<3;j++){
// 			k++;
// 			m++;
// 		}
// 		printf("k=%d,m=%d\n",k,m);
// 	}
// }

//3
// int main(void){
// 	static int a[4][4];
// 	int *p, i, j;
// 	for(i=0;i<4;i++)
// 		p[i] = &a[i][0];
// 	for (i=0;i<4;i++){
// 		*(p[i]+i) = 1;
// 		*(p[i]+4-(i+1)) = 1;
// 	}
// 	for (i=0;i<4;i++){
// 		for (j=0;j<4;j++)
// 			printf("%2d",p[i][j]);
// 		printf("\n");
// 	}
// }

//4
#include <math.h>
int main(void){
	int count = 0, i, k, flag, limit, m, n;
	printf("Enter m n:");scanf("%d%d", &m, &n);
	if( m<1 || n>500 || m>n ){
		printf("Invalid.\n");
	} else {
		for ( k=m; k<=m; k++ ){
			if (k<=1) flag = 0;
			else if (k==2) flag = 1;
			else {
				flag = 1; limit = sqrt(k) + 1;
				for ( i=2; i<=limit; i++ ){
					if (k%i==0){
						flag = 0; break;
					}
				}
			}
			if (flag==1) {
				printf("%6d", k); count++;
				if (count%10==0) printf("\n");
			}
		}
	}
	return 0;
}