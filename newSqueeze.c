#include <stdio.h>
#include <stdbool.h>

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


	return 0;

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
        int i = 0, j = 0;
	int start = 0;
        bool isPresent = false;
	
	while(i < 25){
		if(to[i] == from[j]){
			j++;
			start = i;
		}
	
      		i++;
		if(j >= 5){
			isPresent = true;
			start -= 6;
			break;
		}
	}
	
	replace = start + 6;
	
	if(isPresent){
		for(int x = start; x <= 25; ++x){
			to[start++] = to[replace++];
			if(replace > 25){
				break;
			}

		}
	}	
}
