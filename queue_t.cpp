#include <iostream>
#include <vector>
#include "queue_t.h"

using namespace std;

queue_t::queue_t(int size):elements(size), MAX_SIZE(size), head(0),tail(-1){}
