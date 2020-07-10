#include <stdio.h>
#define MAXLINE 1000 


int getLine(char line[], int max);
void printReverse(char line[], int len);

int main(){

	int len;
	int c;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((len = getLine(line, MAXLINE)) > 0){
		printReverse(line, len);			
			
	}
	

	return 0;

}


int getLine(char s[], int lim){

	int c, i;

	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
	}
	
	if(c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

void printReverse(char line[], int len){

	char reversedLine[MAXLINE];
	int begin = 0;	

	for(int i = len - 1; i >= 0; i--){
		reversedLine[begin] = line[i];
		begin++;
	}

	printf("%s\n", reversedLine);
	
	for(int i = 0; i < len; i++){
		reversedLine[i] = 0;
	}
}

