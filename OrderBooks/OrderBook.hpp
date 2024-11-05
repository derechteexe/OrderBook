#include <iostream>
#include <string>


class OrderBook{
private: 
    int cash_; 
    int counter_; 

    OrderBook(int input_cash, int input_counter) : cash_(input_cash), counter_(input_counter) {}

};