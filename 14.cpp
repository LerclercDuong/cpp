#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char name[100][100];
	int n;
	printf("Nhap so hs: ");
	scanf("%d",&n);
	for(int i = 0; i<n; i++){
		printf("nhap ten hs %d: ",i);
	    gets(name[i]);
	}
	for(int i = 0; i<n-1; i++){
		for(int j = i + 1 ; j< n; j++){
			if(strcmp(name[i],name[j]) == 1){
				char tmp[100] ;
				strcpy(tmp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],tmp);
			}
		}
	}
	for(int i = 0; i<n; i++){
		printf("ten hs %d: ", i);
	    puts(name[i]);
	}
	
}
