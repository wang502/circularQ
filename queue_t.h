#ifndef QUEUE_T_H
#define QUEUE_T_H
#include <vector>

template<class T>
class queue_t{
  int MAX_SIZE;
  int head;
  int tail;
  std::vector<T> elements;
  public:
    queue_t(int size);

    bool enqueue(T ele);

    T dequeue();

    int get_head();

    int get_tail();
};
#endif
