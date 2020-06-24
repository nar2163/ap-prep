#include <stdio.h>

int main(){

	int c;
	int charCounts[26] = {0};
	int count = 0;


	while((c = getchar()) != '\n'){
		charCounts[c - 'a']++;
	}

	char letter = 'a'; 
        
	for(int i = 0; i < 26; i++){
		if(charCounts[i] == 0){
			charCounts[i] = 0;
		}
	}

	for(int i = 0; i < 26; i++){
		printf("%c: ", letter);
		for(int j = 0; j < charCounts[i]; j++){
			printf("X");
		}
		printf("\n");
		letter++;
	}

	return 0;
}
	
