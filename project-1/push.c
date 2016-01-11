void push(int str[], int num)
{
  if(top==size-1)
    cout<<"Stack Overflow";
  else 
    { top++;
      str[top]=num;
    }
}

