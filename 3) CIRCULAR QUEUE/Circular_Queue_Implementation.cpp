#include<iostream>
#include<string>
using namespace std;

class CircularQueue
{
    private:
        int front;
        int rear;
        int arr[10];
    public:
        CircularQueue()
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
            if(front -1 == rear || front == 0 && rear == 9)
                return true;
            else
                return false;   
        }
        void push()
        {
            if(isFull())
                cout<<"Circluar Queue is full"<<endl;
            else
            {
                int value;
                cout<<"Enter the value: ";
                cin>>value;
                if(front == -1)
                    front++;
                rear++;
                rear = rear % 10;
                arr[rear] = value;
            }
        }
        void pop()
        {
            if(isEmpty())
            {
                cout<<"Circluar Queue is empty"<<endl;
            }
            else
            {
                cout<<"Deleted value is: "<<arr[front]<<endl;
                if(front == rear)
                    front = -1, rear = -1;
                else
                    front++;
                    front = front % 10;
            }
        }
        void displayCircularQueue()
        {
            if(isEmpty())
                cout<<"Circluar Queue is empty"<<endl;
            else
            {       
                cout<<"All values in Circluar Queue are: "<<endl;
                int i = front;
                while(i != rear)
                {
                    cout<<arr[i]<<" ";
                    i++;
                    i = i % 10;
                }
                cout<<arr[i]<<endl;
            }
        }
};

int main()
{
    int b, a= 0, i = 0;
    cout<<"***************CIRCULAR QUEUE****************"<<endl;
    cout<<"1) Create Circular Queue"<<endl;
    cout<<"2) Add value in Circular Queue"<<endl;
    cout<<"3) Delete value from Circular Queue"<<endl;
    cout<<"4) Display Circular Queue"<<endl;
    cout<<"5) Exit"<<endl;
    CircularQueue s1;
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
                cout<<"Circular Queue created"<<endl;
                i++;
            }
            cout<<"Choose any of the operation, which u want to perform: ";
            cin>>b;
            switch (b)
            {
                case 1:
                {
                    cout<<"Circluar Queue is already created"<<endl;
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
                    s1.displayCircularQueue();
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
        cout<<"First create a Circluar Queue"<<endl;
    }while (b != 5);
}