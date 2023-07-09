#include <stdio.h>
#include <string.h>

void strReverse(char* text){
	int len;
	int tmp;
	len = strlen(text);
	for(int i =0;i<len/2;i++){
		tmp = text[i];
		text[i] = text[len - 1 -i];
		text[len-1-i] = tmp;  
	}
}
void in2Binary(int n , char* ptr){
	unsigned int bitMask[32];
	for(int i=0;i<32;i++){
		bitMask[i] = 1<< i; 
	}
	for(int i=0;i<32;i++){
		if(n & bitMask[i]){
			ptr[i] = '1';
		}
		else{
			ptr[i] = '0';
		}
	}
	ptr[32] = '\0';
        strReverse(ptr);
}

int main(){
	int input;
	char binaryArr[64];
	int idx;

	while(1){
		scanf("%d",&input);
		in2Binary(input,binaryArr);
		printf("%s\n",binaryArr);
	}
}
