#include <stdio.h>
#include <stdlib.h>
//非常數資料的常數指標 (內容可變 位址不可變) 
#define ARR_SIZE 5
int main(){

int i,j;
int const a[ARR_SIZE] = {3 , 9 , 11 , 4 , 8};//常數指標 ,位置不可改 內容可以改 
	
		  bubo(  a,ARR_SIZE);	// a乃是常數指標  
		  
			for(i=1;i<6;i++) {
				
				printf("a[%d]%d\n",i-1,a[i]);
				
						 	}
						 	
			}


