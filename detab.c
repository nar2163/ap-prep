#include <stdio.h>
#define MAXLINE 1000

void detab(char removeTabs[]);
int getLine(char line[], int max);

int main(){

	char line[MAXLINE];
	int len;

	while(len = getLine(line, MAXLINE) == 0){
		printf("tabbed = %s \n", line);
		detab(line);
		printf("detab = %s \n", line);	
	}


	return 0;

}

void detab(char removeTabs[]){
	
	int internal = 0;

	for(int i = 0; removeTabs[i] != '\0'; i++){
		if(removeTabs[i] == '\t'){
			while(internal < 8){
				removeTabs[i++] = ' ';
			}
			
			internal = 0;
			i--;
		}
	}

}

int getLine(char s[], int max){

	int c, i;

	for(i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++){
		s[i] = 0;
	}

	if(c == '\n'){
		s[i] = c;
		++i;
	}
	
	if(s[i] == EOF){
		return -1;
	} else {

		s[i] = '\0';

		return 0;
	}
	

}


