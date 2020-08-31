#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 1000

int mygetline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

/* find all lines matching pattern */

int main()
{
	char line[MAXLINE];
	int found = 0, foundIndex = 0;
	bool foundOrNot = false;

	while (mygetline(line, MAXLINE) > 0){
		if ((foundIndex = strindex(line, pattern)) >= 0) {
			printf("%s", line);
			found++;
			printf("Found: %d, at Index: %d", found, foundIndex);
		}
	}

	return found;
}

/* getline: get line into s, return length */

int mygetline(char s[], int lim)
{
	int c, i;
	
	i = 0;
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n'){
		s[i++] = c;
	}

	if (c == '\n'){
		s[i++] = c;
	}

	s[i] = '\0';
	return i;
}

/* strindex: return index of t in s, -1 if none */

int strindex(char s[], char t[])
{
	int i, j, k;

	for(i = 0; s[i] != '\0'; i++){
		;
	}

	for(k = 0; t[k] != '\0'; k++){
		;
	}

	for( ; i >= 0; i--) {
		for(j = i; s[j] == t[k]; j--, k--){
			if(k == 0){
				return j;
			}
		}		
	}
        
       
	return -1;
}

	



