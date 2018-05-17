#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 5
int main(){

int i,j;
int a[ARR_SIZE];
unsigned seed;
    	seed = (unsigned)time(NULL); 
    	srand(seed); 
			for(i=0;i<5;i++){		
						a[i]=(rand()%40+10);
						printf("%d  %d\n",i,a[i]);
				} 
				bubo(a,ARR_SIZE);	
						
						for(i=1;i<6;i++) {
						 printf("%d\n",a[i]);
						 }
}
	void bubo(int* a,int k){
		int temp,j,i;
			for (j=0;j<k;j++){
				for(i=0;i<k;i++){ 
					if(a[i]>a[i+1]){
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					}
				} 
			}
		}

