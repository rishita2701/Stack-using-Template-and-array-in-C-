//USING ARRAY

#include <iostream>
using namespace std;

int stack[100], n=100, top=-1;

bool isFull(){
    if(top==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty(){
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int val) {
   if(isFull())
   cout<<"\nStack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}

void pop() {
   if(isEmpty())
   cout<<"\nStack Underflow"<<endl;
   else {
      cout<<"\nThe popped element is "<< stack[top] <<endl;
      top--;
   }
}

int peek()
{
    return stack[top];
}

void display() {
   if(top>=0) {
      cout<<"\nStack elements are:\n";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"\nStack is empty";
}

int main() {
   int ch, val;
   char choice;
   
   do {
    cout<<"\n1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Peek the topmost element"<<endl;
    cout<<"4) Display stack"<<endl;
    cout<<"5) Exit"<<endl<<endl;
      
      cout<<"\nEnter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"\nEnter value to be pushed : ";
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3:{
            cout<<"\nTopmost value is : "<<peek();
             break;
         }
         case 4: {
            display();
            break;
         }
         case 5: {
            cout<<"\nExit"<<endl;
            break;
         }
         default: {
            cout<<"\nInvalid Choice"<<endl;
         }
      }
      cout<<"\nDo you want to continue? (Y/N)";
      cin>>choice;
   }while(choice=='Y');
   return 0;
}

