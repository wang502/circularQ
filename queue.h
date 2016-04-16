#ifndef QUEUE.H
#define QUEUE.H

#inlcude <vector>

using namespace std;

class queue{
  int MAX_SIZE;
  int head;
  int tail;
  vector<int> elements;

  public:
    queue(int size);

    bool enqueue(int ele);

    int dequeue();
}
#endif
