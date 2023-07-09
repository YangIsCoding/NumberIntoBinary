#include <stdio.h>

int main(){
	int input;
	while(scanf("%d",&input)!=EOF){
		int arr[1024];
		int i=0;
		while(input>0){
			arr[i] = input%2;
			input = input/2;
			i++; 	
		}
		for(int j=i-1;j>=0;j--){
			printf("%d",arr[j]);
		}
		printf("\n");
	}
}


