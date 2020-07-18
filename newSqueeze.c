#include <stdio.h>

int getLine(char s[]);
void squeeze(char to[], char from[]);

int main(){

	char line[25];
	char toDelete[] = "Hello";
	int i;	

	while((i = getLine(line)) > 0){
		squeeze(line, toDelete);
		printf("%s", line);
	}




}


int  getLine(char s[]){

	int c, i;

	for(i = 0; i < 25 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}

	if(c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	
	return i;

}

void squeeze(char to[], char from[]){
	
	int replace = 0;
        int i, j;

	for(i = 0; i < 25; ++i){
		if(to[i] == from[0]){
			replace = i + 5;
			for(j = i; j < replace; j++){
				to[j] = to[replace++];
			}
			i = j;
		}
	} 
}
