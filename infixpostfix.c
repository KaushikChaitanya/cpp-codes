# include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
int top=-1;
char stack[20];
main()
{char infix[20];
clrscr();
printf("enter the infix expression");
/* Read infix expression */
gets(infix);
/* Convert infix to reverse polish notation */
intopo(infix);
getch();
}
intopo(char infix[20])
{char postfix[20],s,t;int index=0,pos=0,l;
l=strlen(infix);
/* L string length*/
 push('#');
/* Read one by one character */
while(index<l)
{
s=infix[index];
switch(s)
{case '(': push(s);break;
case ')':t=pop();
while(t!='(')
{postfix[pos++]=t;
 
t=pop();}break;
case'+':case'-':case'*':case'/':case'^':while(pre(stack[top])>=pre(s)){t=pop();
postfix[pos++]=t;
}
push(s);
break;
default: postfix[pos++]=s;break;
}
index++;
}
while(top>0)
{t=pop(); postfix[pos++]=t;}
postfix[pos++]='\0'; 
puts(postfix);} push(char c)
{top++;stack[top]=c;}
pop(){char c;c=stack[top];top--;return(c);}
 
 pre(char c )
 {if(c=='^')return(5);else if(c=='/'|| c=='*')return (4);else if( c=='+'|| c== '-')return(3);
 else return(2);}
