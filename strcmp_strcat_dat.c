#include<stdio.h>
#include<string.h>

//A computer program receives word input from user, until last entered word is a “.”. 
//All entered words are concatenated into a single string with spaces between. 
//Final string is displayed. 
//Use int strcmp(const char* str1, const char* str2) and char* strcat(char* dst, const char* src) functions from <string.h> library.

int main(){

  int count=0,i=0;
  printf("Enter the words, if you press the dot, you exit the loop:\n");
  char words[20]="";
  char sentences[150]="";
  while(1){
  	gets(words);
  	if(strcmp(words,".")==0){
  		strcat(sentences,".");
  		break;
	  }
	  if(i!=0){
	  	strcat(sentences," ");
	  }
	  
	  strcat(sentences,words);
	  i++;
  }	
  
  
  printf("%s",sentences);
  
	return 0;
}
