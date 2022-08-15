//multiple parenthesis
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct stack{
	int top;
	int size;
	char arr*;
	
};
int parenthesisMatch(char* exp){

	struct stack *s=(struct stack*)malloc(sizeof(struct stack));
int a,b,c,d,p;
s->top=-1;
s->size=80;
s->arr=(int*)malloc(s->size*sizeof(int));
char popped_ch;
for (int i=0; exp[i]!='\0';i++){
	if(exp[i]=='('|| exp[i]=='{' || exp=='[')
	{
		push (sp,exp[i]);
	}
	else if(exp[i]==')'){
		if(isEmpty(sp)){
			return 0;
		}
	popped_ch=	pop(sp);
	if(!match(popped_ch, stackTop(sp)))
	{
		return 0;
	}
	}
}

}
