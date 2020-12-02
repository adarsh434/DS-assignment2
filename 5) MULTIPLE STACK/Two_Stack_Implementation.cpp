#include<iostream>
#include<string>
using namespace std;

class TwoStack
{
    private:
        int top1, top2;
        int arr[10];
    public:
        TwoStack()
        {
            top1 = -1;
            top2 = 10;
        }
        bool isEmpty()
        {
            if(top1 == -1 && top2 == 10)
                return true;
            else
                return false;
        }
        bool isFull()
        {
            if( (top1 + 1) == top2 )
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
                int value, a;
                cout<<"Enter in which stack you want to enter value (1/2): ";
                cin>>a;
                cout<<"Enter the value: ";
                cin>>value;
                if(a == 1)
                {  
                    top1++;
                    arr[top1] = value;
                }
                else
                {
                    top2--;
                    arr[top2] = value;
                }
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
                int a;
                cout<<"Enter from which stack you want to delete value (1/2): ";
                cin>>a;
                if(a == 1)
                {   
                    if(top1 == -1)
                        cout<<"Stack 1 is empty"<<endl;
                    else
                    {
                        cout<<"Deleted value is: "<<arr[top1]<<endl;
                        top1--;
                    }
                }
                else
                {
                    if(top2 == 10)
                        cout<<"Stack 2 is empty"<<endl;
                    else
                    {
                        cout<<"Deleted value is: "<<arr[top2]<<endl;
                        top2++;  
                    }
                }
            }
        }
        void displayStacks()
        {
            cout<<"All values in stack 1 and 2 are: "<<endl;
            int i = top1;
            int j = top2;
            cout<<"STACK 1\tSTACK 2"<<endl;
            while(i >= 0 || j <= 9)
            {
                if(i >= 0)
                {
                    cout<<arr[i];
                    i--;
                }
                cout<<"\t";
                if(j <= 9)
                {
                    cout<<arr[j];
                    j++;
                }
                cout<<endl; 
            }
            
        }
};

int main()
{
    int b, a= 0, i = 0;
    cout<<"***************TWO STACKS****************"<<endl;
    cout<<"1) Create Stacks"<<endl;
    cout<<"2) Add value in Stacks"<<endl;
    cout<<"3) Delete value from Stacks"<<endl;
    cout<<"4) Display Stacks"<<endl;
    cout<<"5) Exit"<<endl;
    TwoStack s1;
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
                cout<<"Stacks created"<<endl;
                i++;
            }
            cout<<"Choose any of the operation, which u want to perform: ";
            cin>>b;
            switch (b)
            {
                case 1:
                {
                    cout<<"Stacks are already created"<<endl;
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
                    s1.displayStacks();
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
        cout<<"First create Stacks"<<endl;
    }while (b != 5);
}