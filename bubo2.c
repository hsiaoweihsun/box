#include <stdio.h>
#include <stdlib.h>
//常數資料的非常數指標 (內容不可變 位址可變) 
#define ARR_SIZE 5
int main(){

int i,j;
const int  a[ARR_SIZE] = {3 , 9 , 11 , 4 , 8};//常數資料 ,位置可改 內容不可改 
	
		  bubo(  a,ARR_SIZE);	// a乃是非常數指標
		  
			for(i=1;i<6;i++) {
				
				printf("a[%d]%d\n",i-1,a[i]);
				
						 	}
						 	
			}


	void bubo(int a,int k){        //*a = 叫出a位址的值 丟進去運算 
	
		
	
		int a[temp],j,i;
			for (j=0;j<k;j++){			
				for(i=0;i<k;i++){ 
					
					if(a[i]>a[i+1]){
					*a[temp]=*a[i];
					*a[i]=a[i+1];
					a[i+1]=temp;//交換位址裡面的值 
					} 
				}
			}
	}	
