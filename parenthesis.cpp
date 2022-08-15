//multiple parenthesis
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct stack{
	int top;
	int size;
	char *arr;
	
};
int isEmpty(struct stack *ptr){
if(ptr->top==-1){
return 1;

}
else{
return 0;

}
}
int isFull(struct stack *ptr){
if(ptr->top==ptr->size-1){
return 1;

}
else{
return 0;

}
int Push(struct stack *ptr,char item)
{
ptr->top=ptr->top+1;
ptr->arr[ptr->top]=item;
return 0;

}

char Pop(struct  stack *ptr){
char x;

x=ptr->arr[ptr->top];

ptr->top=ptr->top-1;

return x;

}
char stackTop(struct stack *sp){
	return sp->arr*[sp->top];
}
int match(char a, char b){
	if(a=='{'&& b=='}'){
		return 1;
	}
		if(a=='('&& b==')'){
		return 2;
	}
		if(a=='['&& b==']'){
		return 3;
	}
}
int parenthesisMatch(char* exp){

	struct stack *s=(struct stack*)malloc(sizeof(struct stack));
int a,b,c,d,p;
s->top=-1;
s->size=80;
s->arr=(char*)malloc(s->size*sizeof(char));
char popped_ch;
for (int i=0; exp[i]!='\0';i++){
	if(exp[i]=='('|| exp[i]=='{' || exp=='[')
	{
		push (sp,exp[i]);
	}
	else if(exp[i]==')'|| exp[i]=='}'| ex[==']'){
		if(isEmpty(sp)){
			return 0;
		}
	popped_ch=pop(sp);
	if(!match( popped_ch,exp[i]))
	{
		return 0;
	}
	}
}

}
int main()
{
	char * exp "";
	
	if(parenthesisMatch(exp)){
		printf("The parenthesis is matchiing");
		
	}
	else{
		printf("The parameter is not matching");
	}
	return 0;
}
