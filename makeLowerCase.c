#include <stdio.h>
#define MAXLINE 1000

int main(){

	int c, i = 0;
	char line[MAXLINE];

	while((c = getchar()) != '\n'){
		line[i++] = c;
	}

	line[i] = '\0';

	printf("%s", line);

	i = 0;

	while(line[i] != '\0'){
		line[i] = (line[i] > 'A') ? line[i] -= 'A' : line[i];
		i++;
	}

	printf("%s", line);


	return 0;
}
