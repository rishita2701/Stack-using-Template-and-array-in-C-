//USING TEMPLATE

#include <iostream>
using namespace std;
#define SIZE 20
template <class T>
class stack
{
T *a;
int top;
int max_size;

public:
stack(int max = SIZE);

void push(T);
T pop();
T peek();
int max();
bool isEmpty();
bool isFull();

~stack(){
delete[] a;
}
};

template <class T>
stack<T>::stack(int max)
{
a = new T[max];
max_size = max;
top = -1;
}

template <class T>
void stack<T>::push(T x)
{
if (isFull())
{
cout << " Stack OverFlow \n";
exit(EXIT_FAILURE);
}

cout << "Push : " << x << endl;
a[++top] = x;
}

template <class T>
T stack<T>::pop()
{

if (isEmpty())
{
cout << " Stack Underflow  \n";
exit(EXIT_FAILURE);
}

cout << "pop  : " << peek() << endl;

return a[top--];
}

template <class T>
T stack<T>::peek()
{
if (!isEmpty())
return a[top];
else
exit(EXIT_FAILURE);
}

template <class T>
int stack<T>::max()
{
return top + 1;
}
template <class T>
bool stack<T>::isEmpty()
{
return top == -1;
}
template <class T>
bool stack<T>::isFull()
{
return top == max_size - 1;
}
int main()
{
    stack<int> stk(20);
    int ch, val;
    char choice;
      do {
    cout<<"\n1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Peek the topmost element"<<endl;
    cout<<"4) Check whether the stack is empty"<<endl<<endl;
      
      cout<<"\nEnter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"\nEnter value to be pushed : ";
            cin>>val;
            stk.push(val);
            break;
         }
         case 2: {
            stk.pop();
            break;
         }
         case 3:{
            cout<<"\nTopmost value is : "<<stk.peek();
             break;
         }
         case 4: {
            if (stk.isEmpty())
                cout << "Stack Is Empty\n";
            else
                cout << "Stack Is Not Empty\n";
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

