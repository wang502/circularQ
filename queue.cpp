#include <iostream>
#include <vector>
#include "queue.h"

using namespace std;

// constructor
queue::queue(int size) : elements(size),MAX_SIZE(size),head(0),tail(-1){}

bool queue::enqueue(int ele){
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

int queue::dequeue(){
    if (tail == -1 && head == 0){
      return false;
    }
    else if (head == tail){
      int ele = elements[head];
      head = 0;
      tail = -1;
      return ele;
    }
    else if (head == MAX_SIZE-1){
      int ele = elements[head];
      head = 0;
      return ele;
    }
    else {
      int ele = elements[head];
      head ++;
      return ele;
    }
}

int queue::get_head(){
  return head;
}

int queue::get_tail(){
  return tail;
}

int main(){
  queue q(3);
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
}
