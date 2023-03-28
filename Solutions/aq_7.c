#include <stdio.h>
#include <string.h>

int main(){
	char word[] = "Hello"; //Set the word [you can even put a fgets function here to take input from the user]

	/*
	The code for taking manual input would look like this starting from the 5th line:
	
	char word[100];
	fgets(word, sizeof(word), stdin);

	You can set the size of the array according to the needs of the program
	Remember that the string will be one caharacter less than the limit set, i.e., the string here can only accomodate 99 readable characters
	this is because of the null character '\0' occupying the last position

	*/


	int len = sizeof(word)/sizeof(word[0]); //obatin word's length
	for(int i = 0; i < len; i++){
		//Loop to print from 'H' to 'Hello'
		// we do i < len and not i<=len to accomodate inedxing from 0
		char p_str[sizeof(word)] = "."; //Reset string every iteration of the loop
		strncpy(p_str, word, i+1); //copy only required word to the string to be printed from the word
		printf("%s \n",p_str); // printing the word
	}
	for(int j = len-2; j > 0; j--){
		//Loop to print from 'Hello' to 'H'
		//Here, we do j = len-2 to accomodate for the index starting from 0, and the null character '\0' at the end
		char p_str[sizeof(word)] = ".";
		strncpy(p_str, word, j);
		printf("%s \n", p_str);
	}
}