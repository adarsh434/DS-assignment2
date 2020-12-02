#include<iostream>
#include<string>
using namespace std;

class ThreeStack
{
    private:
        int top1, top2, top3;
        int arr[9];
    public:
        ThreeStack()
        {
            top1 = -1;
            top2 = 2;
            top3 = 5;
        }
        bool isEmpty1()
        {
            if(top1 == -1)
                return true;
            else
                return false;
        }
        bool isEmpty2()
        {
            if(top2 == 2)
                return true;
            else
                return false;
        }
        bool isEmpty3()
        {
            if(top3 == 5)
                return true;
            else
                return false;
        }
        bool isFull1()
        {
            if(top1  == 2)
                return true;
            else
                return false;   
        }
        bool isFull2()
        {
            if(top2 == 5)
                return true;
            else
                return false;   
        }
        bool isFull3()
        {
            if(top1 == 8)
                return true;
            else
                return false;   
        }
        void push()
        {
            int a, value;
            cout<<"Enter in which stack u want to enter value(1/2/3): ";
            cin>>a;
            if(a == 1)
            {
                cout<<"Enter the value: ";
                cin>>value;
                if(isFull1())
                    cout<<"Stack 1 is full"<<endl;
                else
                {
                    top1++;
                    arr[top1] = value;
                }
            }
            else if(a == 2)
            {
                cout<<"Enter the value: ";
                cin>>value;
                if(isFull2())
                    cout<<"Stack 2 is full"<<endl;
                else
                {
                    top2++;
                    arr[top2] = value;
                }
            }
            else
            {
                cout<<"Enter the value: ";
                cin>>value;
                if(isFull3())
                    cout<<"Stack 3 is full"<<endl;
                else
                {
                    top3++;
                    arr[top3] = value;
                }
            }
        }
        void pop()
        {
            int a;
            cout<<"Enter in which stack u want to enter value(1/2/3): ";
            cin>>a;
            if(a == 1)
            {
                if(isEmpty1())
                    cout<<"Stack 1 is empty"<<endl;
                else
                {
                    cout<<"Deleted value is: "<<arr[top1]<<endl;
                    top1--;
                }
            }
            else if(a == 2)
            {
                if(isEmpty2())
                    cout<<"Stack 2 is empty"<<endl;
                else
                {
                    cout<<"Deleted value is: "<<arr[top2]<<endl;
                    top2--;
                }
            }
            else
            {
                if(isEmpty3())
                    cout<<"Stack 3 is empty"<<endl;
                else
                {
                    cout<<"Deleted value is: "<<arr[top3]<<endl;
                    top3--;
                }
            }
        }
        void displayStacks()
        {
            cout<<"All values in stack 1, 2 and 3 are: "<<endl;
            int i = top1;
            int j = top2;
            int k = top3;
            cout<<"STACK 1\tSTACK 2\tSTACK 3"<<endl;
            while(i >= 0 || j >= 3 || k >= 6)
            {
                if(i >= 0)
                {
                    cout<<arr[i];
                    i--;
                }
                cout<<"\t";
                if(j >= 3)
                {
                    cout<<arr[j];
                    j--;
                }
                cout<<"\t";
                if(k >= 6) 
                {
                    cout<<arr[k];
                    k--;
                }
                cout<<endl;
            }
        }
};

int main()
{
    int b, a= 0, i = 0;
    cout<<"***************THREE STACKS****************"<<endl;
    cout<<"1) Create Stacks"<<endl;
    cout<<"2) Add value in Stacks"<<endl;
    cout<<"3) Delete value from Stacks"<<endl;
    cout<<"4) Display Stacks"<<endl;
    cout<<"5) Exit"<<endl;
    ThreeStack s1;
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