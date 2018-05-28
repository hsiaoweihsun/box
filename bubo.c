	void bubo(int *a,int k){        //*a = ¥s¥Xa¦ì§}ªº­È  
	
		
	
		int temp,j,i;
			for (j=0;j<k;j++){			
				for(i=0;i<k;i++){ 
					
					if(a[i]>a[i+1]){
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					} 
				}printf ("%d\n", *a );
			}
	}	
