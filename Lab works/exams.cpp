#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	int a[n][n], i, j;
	
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}

int sum = 0;	
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (a[i][j] > 0) sum += a[i][j];
		}
	}
	
	printf("Sum: %d", sum);
}
