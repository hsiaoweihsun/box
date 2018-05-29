	void bubo(int *a,int k){        //*a = 叫出a位址的值 丟進去運算 
	
		
	
		int temp,j,i;
			for (j=0;j<k;j++){			
				for(i=0;i<k;i++){ 
					
					if(a[i]>a[i+1]){
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;//交換位址裡面的值 
					} 
				}
			}
	}	
