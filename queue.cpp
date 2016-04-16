#include "queue.h"

using namespace std;

queue::queue(int size){
  MAX_SIZE = SIZE;
  head = 0;
  tail = -1;
  elements(MAX_SIZE);
}
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
        elements[tail] == ele;
        return true;
      }
    }
    else {
      elements[++tail] = ele;
      return true;
    }
}

int queue::dequeue(){
  
}
