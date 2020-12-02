#include<iostream>
#include<string>
using namespace std;

class Queue
{
    private:
        int front;
        int rear;
        int arr[10];
    public:
        Queue()
        {
            front = -1;
            rear = -1;
        }
        bool isEmpty()
        {
            if(front == -1 && rear == -1)
                return true;
            else
                return false;
        }
        bool isFull()
        {
            if(rear == 9)
                return true;
            else
                return false;   
        }
        void push()
        {
            if(isFull())
                cout<<"Queue is full"<<endl;
            else
            {
                int value;
                cout<<"Enter the value: ";
                cin>>value;
                if(front == -1)
                    front++;
                rear++;
                arr[rear] = value;
            }
        }
        void pop()
        {
            if(isEmpty())
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                cout<<"Deleted value is: "<<arr[front]<<endl;
                if(front == rear)
                    front = -1, rear = -1;
                else
                    front++;
            }
        }
        void DisplayQueue()
        {
            if(isEmpty())
                cout<<"Queue is empty"<<endl;
            else
            {       
                cout<<"All values in Queue are: "<<endl;
                int i = front;
                while(i <= rear)
                {
                    cout<<arr[i]<<" ";
                    i++;
                }
                cout<<endl;
            }
        }
};

int main()
{
    int b, a= 0, i = 0;
    cout<<"***************QUEUE****************"<<endl;
    cout<<"1) Create Queue"<<endl;
    cout<<"2) Add value in Queue"<<endl;
    cout<<"3) Delete value from Queue"<<endl;
    cout<<"4) Display Queue"<<endl;
    cout<<"5) Exit"<<endl;
    Queue s1;
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
                cout<<"Queue created"<<endl;
                i++;
            }
            cout<<"Choose any of the operation, which u want to perform: ";
            cin>>b;
            switch (b)
            {
                case 1:
                {
                    cout<<"Queue is already created"<<endl;
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
                    s1.DisplayQueue();
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
        cout<<"First create a Queue"<<endl;
    }while (b != 5);
}