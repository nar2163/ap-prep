#include <stdio.h>
#include <stdbool.h>
#define MAXLINE 1000

int mygetline(char line[], int max);
int strindex(char source[], char searchfor[], bool foundOrNot);

char pattern[] = "ould";

/* find all lines matching pattern */

int main()
{
	char line[MAXLINE];
	int found = 0, foundIndex = 0;
	bool foundOrNot = false;

	while (mygetline(line, MAXLINE) > 0){
		if ((foundIndex = strindex(line, pattern, foundOrNot)) >= 0) {
			printf("%s", line);
			found++;
			foundOrNot = true;
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

int strindex(char s[], char t[], bool foundOrNot)
{
	int i, j, k;
	int foundIndex;

	for(i = 0; s[i] != '\0'; i++) {
		for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++){
			if(k == 0 && foundOrNot){
				foundIndex = j;
			}
		}
		if (k > 0 && t[k] == '\0'){
			return foundIndex;
		}
	}

	return -1;
}

	



