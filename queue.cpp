#include<iostream>
 
using namespace std;
 
class queue
{
  public:
  int q[50],front,rear,x,result;
  void entq();
  void deque();
  void display();
  queue()
  {
    front=0;
    rear=0;
  }
};
void queue::entq()
{
  if(rear>=50)
  cout<<"\nQueue overflow!!\n";
  else
  {
    cout<<"\nEnter the number to be inserted: ";
    cin>>x;
    rear++;
    q[rear]=x;
    cout<<"\nNumber pushed in the queue:"<<q[rear];
  }
}
void queue::deque()
{
  if(rear==0)
  cout<<"\nQueue underflow!!\n";
  else
  {
    if(front==rear)
    {
      front=0;
      rear=0;
    }
    else
      front++;
  }
  cout<<"\nDeleted element is:";
  result=q[front];
  cout<<result;
}
void queue::display()
{
  if(rear==0)
    cout<<"\nQueue underflow!!\n";
  else
    cout<<"\nContents of queue is:";
  for(int i=front+1;i<=rear;i++)
    cout<<q[i]<<"\t";
}
 
int main()
{
  int c=0;
  queue que;
 cout<<"\n**********QUEUE**********";
 
  while(c!=4)
  {
    cout<<"\n1.Insertion\n2.Deletion\n3.Display\n4.Quit";
    cout<<"\nEnter your choice:";
    cin>>c;
    switch(c)
    {
      case 1:
        que.entq();
        break;
      case 2:
        que.deque();
        break;
      case 3:
        que.display();
        break;
      case 4:
         c=4;
        cout<<"\nPress any key .. ";
        break;
   
      default:
        cout<<"\nInvalid choice!!\n";
    }
  }
  
  return 0;
}
