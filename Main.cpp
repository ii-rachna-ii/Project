#include<iostream>
#include<stdio>
using namespace std;
int top,front,rear;
const int size=50;
top=front=rear=-1;

void push(int str[], int num)
{
  if(top==size-1)
    cout<<"Stack Overflow";
  else 
    { top++;
      str[top]=num;
    }
}

void main()
{ 
  int op,num,a[];
  char ch;
  cout<<"Menu"<<endl
      <<"1.Stack"<<endl
      <<"2.Queue"<<endl
      <<"Enter your option:";
  cin>>op;

  switch(op)
{ 
  case 1: 
    do{ 
        cout<<"Menu"<<endl
            <<"1.Push"<<endl
            <<"2.Pop"<<endl
            <<"3.Display Stack"<<endl
            <<"enter option:";
        cin>>op;
        switch(op)
       {
         case 1:
             cout<<"enter number:"; 
             cin>>num;
             push(a,num);break;
         case 2:
             num=pop(a);
             cout<<"Deleted element:"<<num;break;
         case 3:
             stack_display(a);break;
         default: cout<<"invalid";
       }
      cout<<"Do you wnt to continue?(y/n)";
      cin>>ch;
      }while(ch=='y');break;
   
  case 2:
      do
{
cout<<"Enter\n1.Enqueue\n2.Dequeue\n3.Display\n";
cin>>op;
int p;
switch(op)
{
case 1: cout<<"enter the element:";
        cin>>num;
        enqueue(a,num);
     break;
case 2: p=dequeue(a);
    cout<<"Deleted element:"<<p;
    break;
case 3: queuedisplay(a);
    break;

default: cout<<"wrong choice";
}
cout<<"do you want to continue?y/n";
char ch;
cin>>ch;
}while(ch=='y');break;
 
default:cout<<"invalid";
}
}
 
 

