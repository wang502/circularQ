#ifndef QUEUE_H
#define QUEUE_H

#include <vector>

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

    int get_head();

    int get_tail();
};

#endif
