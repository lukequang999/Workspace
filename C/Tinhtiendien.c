#include<stdio.h>
#include<math.h>
void main(){
	int n,a;
	printf("N = ");
	scanf("%d",&n);
	if (n<=50){
		    a=n*1484;
	} else{ 
	    if (51<=n && n<=100) {
	    	a=50*1484+(n-50)*1533; 
	   
	    } else{ 
	    if (101<=n && n<=200) {
	    	a=50*1484+50*1533+(n-50-50)*1786;
	
		} else{
		if (201<=n && n<=300) {
			a=50*1484+50*1533+100*1786+(n-200)*2242;
	
		} else{
		if (301<=n && n<=400) {
			a=50*1484+50*1533+100*1786+100*2242+(n-300)*2503;
	
		} else{ 
		if (401<=n) {
			a=50*1484+50*1533+100*1786+100*2242+100*2503+(n-400)*2587;
	
		}
		}
		}
		}
	    }
    }	
	printf("So tien phai nop: %d",a);

}