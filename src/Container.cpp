#include "Container.h"

int Container::getStorage(){
    {
        return containing;
    }
}

bool Container::isFull(){
    if(containing == capacity)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double Container::getPercent(){
return (capacity/100)*containing;
}
void Container::withdraw(double amount){
    containing = containing - amount;
}
void Container::collection(double amount){
    containing = containing + amount;
}

Container(int storage, int cap){
    containing = storage;
    capacity = cap;
}