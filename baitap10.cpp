#include <stdio.h>
#include <math.h>
void menu(){
	printf("\n========================= \n");
	 printf("Ex1: \n");
	 printf("Ex2: \n");
	 printf("Ex3: \n");
	 printf("Ex4: \n");
	 printf("Ex5: \n");
	 printf("Ex6: \n");
	 printf("Ex7: \n");
	 printf("Ex8: \n");
	 printf("Ex9: \n");
	 printf("Ex10: \n");
	 
}

//build some important function 
int fibonaci(int n){
	if(n == 1){
		return 1;
	}
	if(n == 2){
		return 1;
	} if (n>2){
		return fibonaci(n-1) + fibonaci(n-2);
	}
}
int soNguyenTo(int i){
	if(i < 2){
		return 0;
	}
	for(int j = 2; j<=sqrt(i); j++){
		if(i%j==0){
			return 0 ;
		}
		  }
		  return 1;
	
}
int giaithua(int n){
	if(n == 1){
		return 1;
	}
	return n*giaithua(n-1);
}

//bai tap chinh 
void ex1(){
	int n;
	int sum= 0;
	int loop = 0;
	printf("input n: ");
	scanf("%d", &n);
	for(int i = 1; i <=10000; i+=2){
		sum += i;
		loop ++;
		if(loop == n){
			break;
		}
	}
	printf("%d", sum);
}
void ex2(){
	int n;
	double sum= 0;
	int loop = 0;
	printf("input n: ");
	scanf("%d", &n);
	for(double i = 1; i <=10000; i++){
		sum += 1/i;
		loop ++;
		if(loop == n){
			break;
		}
	}
	printf("%lf", sum);
}
void ex3(){
    int n, sum = 0;
	long x;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap x: ");
	scanf("%d", &x);
	
	for(long i=1; i<= n; i++){
		
			sum += pow(x,i);
		
	}printf("%d ", sum);
}
void ex4(){
	int n, sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 2; i<=n; i++){
		if(soNguyenTo(i) == 1){
			printf("%d ", i);
		}else{
			continue;
		}
	}
	}
	
//	int checkLastDay(int day, int month, int lastDay){
//		if(day == lastDay[month-1]){
//			return 1;
//		}else return 0;
//	}
	
//	int checkDay(int day, int month, int lastDay){
//		while(day>=1 && day <= 31){
//			if(day==30 | day==31){
//				if(checkLastDay(day, month, lastDay)){
//					return 1;
//				}
//			}
//		}
//		return 0;
//	}
void ex5(){
    int day, month, year;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang:");
    scanf("%d", &month);
    printf("Nhap nam:");
    scanf("%d", &year);
	int lastDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            lastDay[2] = 29;
        }
     if(day>=1 && day <= 31 && month <= 12){
     	    if(day < 28){
			 	printf("===> hop le");
			 }
			if(day==30 | day==31 | day==29 | day==28){
				if(day == lastDay[month-1]){
		      	printf("===> hop le");

		     }else {
		     	printf("===> khong hop le");
		     	
			 }
			 
			} 

} else {
printf("===> khong hop le");
		
}

}

void ex6(){
	int n,sum =0;
	int fibo;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 1 ; i<=30; i++){
	      if(n == fibonaci(i)) {
	      	printf("n la so fibonaci");
	      	break;
		  } if(i == 30){
		  	printf("khong phai la so fibonaci");
		  }
	}
	
	
}
void ex7(){
	 for(int i = 0; i <= 128; ++i){
        printf("%5d%5o%6x%5c\n",i , i, i, i);
    }
	
}
void ex8(){
	int next = 1;
	do{ 
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n<0){
		next = 0;
	}
	    int sum = 0;
	    
		
	  while(n>0){
	int digit = n%10;
	n=n/10;
    sum += digit;
	}
	printf("===> sum la: %d \n", sum);
	}while(next == 1);
	printf("loi nhap so");
	
	
	
}
void ex9(){
	int n, max, min;
	max = 0;
	min = 99;
	int tmp;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n>0){
	int digit = n%10;
	n=n/10;
    if(digit < min){
    	min = digit;
	}
	if(digit > max){
		max = digit;
	}
	}
	printf("min la: %d   max la: %d", min, max);
}
void ex10(){
	int n;
	int result;
	printf("Nhap n de tinh giai thua: ");
	scanf("%d", &n);
	result = giaithua(n);
	printf("\n ket qua la: %d", result);
}

int main(){
	int tieptuc = 1;
	
	do{
	menu();
	printf("====> Chon bai tap: ");
	int n;
	scanf("%d", &n);
	 if(n>10){
	 	tieptuc = 0;
	 }
		switch(n){
			case 1:
			    ex1();
				break;
			case 2:
				ex2();
				break;
			case 3:
				ex3();
				break;
		    case 4:
		    	ex4();
		    	break;
			case 5:
				ex5();
				break;
			case 6:
				ex6();
				break;
		    case 7:
		    	ex7();
		    	break;
		    case 8:
		    	ex8();
		    	break;
		    case 9:
		    	ex9();
		    	break;
		    case 10:
		    	ex10();
		    	break;
				
		}
	}while(tieptuc == 1);
	
	
}
