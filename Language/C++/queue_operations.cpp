#include <iostream>

using namespace std;

class queue
{
  int front, rear, el;
public:
  int A[5];
    queue ()
  {
    front = rear = -1;
  }
  void enqueue (int el);
  int dequeue ();
 
};

void queue::enqueue (int el)
{
  if (rear >= 5)
    {
      cout << "QUEUE IS FULL" << endl;
      rear = -1;
    }
  else
    {
      rear++;
      A[rear] = el;
    }

}

int queue::dequeue ()
{
  if (front >= rear)
    {
      cout << "QUEUE IS EMPTY" << endl;
      front = -1;
      return 0;
    }
  else
    {
      front++;
      cout << A[front]<<" WAS DELETED FROM THE QUEUE" << endl;
      return 1;

    }
}



int main ()
{
  queue q;
  q.enqueue (1);
  q.enqueue (2);
  q.enqueue (3);
  q.enqueue (4);
  q.enqueue (5);
  for (int i = 0; i < 5; i++)
    {
      q.dequeue ();
      cout << endl;
    }

}
