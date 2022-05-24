// Adrian Leo Pradana
// 2106718344

#include<stdio.h>
 
int main()
{
char text[100], chipher;
int i, key, j=0;
	printf("Input only lowercase");
	printf("\n Ciphertext: ");
	gets(text);
	printf("Enter key: ");
	scanf("%d", &key);
	for(i = 0; text[i] != '\0'; ++i){
		chipher = text[i];
		if(chipher >= 'a' && chipher <= 'z'){
			chipher += key;
			if(chipher > 'z'){
				chipher = chipher - 'z' + 'a' - 1;
			}
		text[i] = chipher;
		}		
	text[i] = chipher;

		}
	if(chipher >= 'A' && chipher <= 'Z'){
//		chipher = chipher + key;
		printf("Only Input Lowercase");	
		}
	if(chipher >= 'a' && chipher <= 'z'){	
		printf("Encrypted message: %s", text);
	}

}
