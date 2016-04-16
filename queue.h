#ifndef QUEUE.H
#define QUEUE.H

using namespace std;

class queue{
  int MAX_SIZE;
  int front;
  int rear;
  vector<int> elements;

  public:
    queue(int size);

    bool enqueue(int ele);

    int dequeue(int ele);
}
#endif
