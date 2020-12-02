#include<iostream>
#include<string>
using namespace std;

class Stack
{
    private:
        int top;
        int arr[10];
    public:
        Stack()
        {
            top = -1;
        }
        bool isEmpty()
        {
            if(top == -1)
                return true;
            else
                return false;
        }
        bool isFull()
        {
            if(top == 9)
                return true;
            else
                return false;   
        }
        void push()
        {
            if(isFull())
                cout<<"Stack Overflow"<<endl;
            else
            {
                int value;
                cout<<"Enter the value: ";
                cin>>value;
                top++;
                arr[top] = value;
            }
        }
        void pop()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty"<<endl;
            }
            else
            {
                 cout<<"Deleted value is: "<<arr[top]<<endl;
                top--;
            }
        }
        void displayStack()
        {
            cout<<"All values in stack are: "<<endl;
            int i = top;
            while(i >= 0)
            {
                cout<<arr[i]<<endl;
                i--;
            }
        }
};

int main()
{
    int b, a= 0, i = 0;
    cout<<"***************STACK****************"<<endl;
    cout<<"1) Create Stack"<<endl;
    cout<<"2) Add value in Stack"<<endl;
    cout<<"3) Delete value from Stack"<<endl;
    cout<<"4) Display Stack"<<endl;
    cout<<"5) Exit"<<endl;
    Stack s1;
    do
    {
        if(a != 1)
        {
            cout<<"Choose any of the operation, which u want to perform: ";
            cin>>a;
        }
        else
        {
            while(i <= 0)
            {
                cout<<"Stack created"<<endl;
                i++;
            }
            cout<<"Choose any of the operation, which u want to perform: ";
            cin>>b;
            switch (b)
            {
                case 1:
                {
                    cout<<"Stack is already created"<<endl;
                    break;
                }
                case 2:
                {
                    s1.push();
                    break;
                }
                case 3:
                {
                    s1.pop();
                    break;
                }
                case 4:
                {
                    s1.displayStack();
                    break;
                }
                case 5:
                {
                    cout<<"Exited successfully"<<endl;
                    break;
                }
                default :
                {
                    cout<<"Enter proper option number"<<endl;
                    break;
                }
            }
        }
        if(a != 1)
        cout<<"First create a Stack"<<endl;
    }while (b != 5);
}