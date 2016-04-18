#ifndef QUEUE_T_H
#define QUEUE_T_H
#include <vector>
Template<T>
class queue_t{
  int MAX_SIZE;
  int head;
  int tail;
  vector<T> elements;
  public:
    queue(int size);

    bool enqueue(T ele);

    int dequeue();

    int get_head();

    int get_tail();
};
#endif
