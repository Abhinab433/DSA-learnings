#include<stdio.h>
#include<stdlib.h>
#include<string>
struct stack{
	int size;
	int top;
	char arr*;
};

char precedence(char b){
	if(b=='^'){
		return 1;
	}
	else if(b=='/' || b=='*'){
		return 2;
	}
	else if(b=='+' || b=='-'){
		return 3;
	}
	else if 
}
int main(){
	
	
}
