#include<stdio.h>
int main (){
	int demsochan =0,demsole =0;
	int mangchan [10];
    int mangle[10];
	int a[5]={1,2,3,4,5};
	for (int i=0;i<5;i++){
		if(a[i]%2==0){
		mangchan[demsochan] = a[i];
		demsochan +=1;
			
		} else{
		mangle[demsole]= a[i];
		demsole +=1;
		}
	}
	
    	printf("Cac so chan la: ");
    	for(int i=0;i<demsochan;i++){
    		printf("%d ",mangchan[i]);
		}
		printf("\n");
    	printf("Cac so le la: ");
    	for(int i=0;i<demsole;i++){
    		printf("%d ",mangle[i]);
		}
   
	
	
	return 0;
}
