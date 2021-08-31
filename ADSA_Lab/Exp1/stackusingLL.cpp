#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
};
struct Node *top = NULL;

void push(int val)
{
  struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
  newnode->data = val;
  newnode->next = top;
  top = newnode;
}

void pop()
{
  if (top == NULL)
  {
    cout << "Stack Underflow" << endl;
  }
  else
  {
    cout << "The Popped element is " << top->data << endl;
    top = top->next;
  }
}

void display()
{
  struct Node *ptr;
  if (top == NULL)
  {
    cout << "Stack is Empty!" << endl;
  }
  else
  {
    ptr = top;
    cout << "Stack elements are: ";
    while (ptr != NULL)
    {
      cout << ptr->data << " ";
      ptr = ptr->next;
    }
  }
  cout << endl;
}
int main()
{
  int choice, val;
  cout << "1. Push in Stack" << endl;
  cout << "2. Pop from Stack" << endl;
  cout << "3. Display Stack Elements" << endl;
  cout << "4. Exit" << endl;

  do
  {
    cout << "Enter Choice: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "Enter value to be pushed: " << endl;
      cin >> val;
      push(val);
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      cout << "Exit" << endl;
      break;
    default:
      cout << "Invald Choice!" << endl;
    }
  } while (choice != 4);
  return 0;
}
