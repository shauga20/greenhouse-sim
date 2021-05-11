#pragma once

class Container {
public:
    int getStorage();
    bool isFull();
    double getPercent();
    void withdraw(double amount);
    void collection(double amount);
    explicit Container(int storage, int cap);


private:
    int capacity;
    int containing;
};
