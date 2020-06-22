#include <stdio.h>

int main(){

	int wordCount = 0;
	int index = 0;
	int c;
	int length[10];

	while((c = getchar()) != '\n'){
		if(c != ' '){
			wordCount++;
		} else {
			length[index++] = wordCount;
			wordCount = 0;
		}
	}

	for(int i = 0; i < 10; i++){
		
		if(length[i] == 0){
			break;
		}
		
		printf("Word %d ", i + 1);
		for(int j = 0; j < length[i]; j++){
			printf("X");
		}
		printf("\n");
	}

	return 0;

}





