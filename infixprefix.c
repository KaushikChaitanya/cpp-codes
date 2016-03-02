# include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
int top=-1;char stack[20];
main()
{
char infix[20];clrscr(); 
printf("enter the infix expression");
/* Read infix expression */
gets(infix);
/* Convert infix to polish notation */
intopo(infix);
getch();
}
intopo(char infix[20])
{char prefix[20],s,t;int index,pos=0,l,i,len;
l=strlen(infix);
index=l-1;
push('#');
while(index>=0)
{s=infix[index];
switch(s){
 
case ')': push(s);break;
case '(':t=pop();
while(t!=')')
{prefix[pos++]=t;t=pop();}
break;
case'+':case'-':case'*':case'/':case'^':while(pre(stack[top])<pre(s)){t=pop(); prefix[pos++]=t;}
push(s);
break;
default: prefix[pos++]=s;break;}
index--;
}while(top>0){t=pop(); prefix[pos++]=t;} prefix[pos++]='\0';len=strlen(prefix)-1;for(i=len;i>=0;i--) 
printf("%c",prefix[i]);} 
push(char c){top++;stack[top]=c;}
 
 pop(){char c;c=stack[top];top--;return(c);}
 pre(char c ){if(c=='^')return(5);
 else if(c=='/'|| c=='*')return (4);
 else if( c=='+'|| c== '-')return(3);
 elsereturn(6);}
