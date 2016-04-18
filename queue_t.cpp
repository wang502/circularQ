#include <iostream>
#include <vector>
#include <cstring>
#include "queue_t.h"

using namespace std;

template <class T>
queue_t<T>::queue_t(int size):elements(size), MAX_SIZE(size), head(0),tail(-1){}

template <class T>
bool queue_t<T>::enqueue(T ele){
  if (tail == -1 && head == 0){
    elements[++tail] = ele;
    return true;
  }
  else if (tail == head - 1){
    return false;
  }
  else if (tail == MAX_SIZE-1){
    if (head == 0){
      return false;
    }
    else {
      tail = 0;
      elements[tail] = ele;
      return true;
    }
  }
  else {
    elements[++tail] = ele;
    return true;
  }
}

template<class T>
T queue_t<T>::dequeue(){
  if (tail == -1 && head == 0){
    exit(0);
  }
  else if (head == tail){
    T ele = elements[head];
    head = 0;
    tail = -1;
    return ele;
  }
  else if (head == MAX_SIZE-1){
    T ele = elements[head];
    head = 0;
    return ele;
  }
  else {
    T ele = elements[head];
    head ++;
    return ele;
  }
}

template<class T>
int queue_t<T>::get_head(){
  return head;
}

template<class T>
int queue_t<T>::get_tail(){
  return tail;
}

int main(){
  queue_t<int> q(3);
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  cout<<"head: "<<q.get_head()<<endl;
  cout<<"tail: "<<q.get_tail()<<endl;
  q.dequeue();
  cout<<"head: "<<q.get_head()<<endl;
  cout<<"tail: "<<q.get_tail()<<endl;
  q.enqueue(5);
  cout<<"head: "<<q.get_head()<<endl;
  cout<<"tail: "<<q.get_tail()<<endl;
  cout<<q.dequeue()<<endl;
  q.dequeue();
  cout<<"head: "<<q.get_head()<<endl;
  cout<<"tail: "<<q.get_tail()<<endl;

  queue_t<string> q2(3);
  q2.enqueue("one");
  q2.enqueue("two");
  cout<<"first: "<<q2.dequeue()<<endl;
  cout<<"second: "<<q2.dequeue()<<endl;
}
