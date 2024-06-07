#include <stdio.h>
int main(){
	int w, h;
	printf ("Please enter width and height of rectangle: \n");
	scanf("%d%d", &w, &h);
	
	
	int i, j;
	char a[h][w];
	printf("Please enter the States' signs, A or B.': \n");
	for (i = 0; i < h; i++ ){
		for (j = 0; j < w; j++){
			scanf("%ch", &a[i][j]);
		} 
	}
	
	int count = 0;
	for (i = 0; i < h; i++ ){		
		for (j = 0; j < w; j++){
			if (a[i][j] != a[i][j+1]) count++;
				
		}  if (a[i-1][j] != a[i][j]) count++;
	} 
	
	printf("%d km", count);
}

