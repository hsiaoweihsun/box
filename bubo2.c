#include <stdio.h>
#include <stdlib.h>
//�`�Ƹ�ƪ��D�`�ƫ��� (���e���i�� ��}�i��) 
#define ARR_SIZE 5
int main(){

int i,j;
const int  a[ARR_SIZE] = {3 , 9 , 11 , 4 , 8};//�`�Ƹ�� ,��m�i�� ���e���i�� 
	
		  bubo(  a,ARR_SIZE);	// a�D�O�D�`�ƫ���
		  
			for(i=1;i<6;i++) {
				
				printf("a[%d]%d\n",i-1,a[i]);
				
						 	}
						 	
			}


	void bubo(int a,int k){        //*a = �s�Xa��}���� ��i�h�B�� 
	
		
	
		int a[temp],j,i;
			for (j=0;j<k;j++){			
				for(i=0;i<k;i++){ 
					
					if(a[i]>a[i+1]){
					*a[temp]=*a[i];
					*a[i]=a[i+1];
					a[i+1]=temp;//�洫��}�̭����� 
					} 
				}
			}
	}	
