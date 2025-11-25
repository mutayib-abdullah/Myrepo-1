#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int i, n, y=1;
	
	printf("Enter a word: ");
	scanf("%s", str);
	
	n = strlen(str);
	
	for (i=0;i<n/2;i++) {
		if (str[i] != str[n-i-1]) {
			y = 0;
		}
		
	}
	if (y)
	    printf("%s is a palindrome\n", str);
	else
	    printf("%s is not a palindrome\n", str);
	
	return 0;   
}
