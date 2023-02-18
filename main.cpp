#include <iostream>
#include <list>
using namespace std;

int Sum(list<int> numbers){
    int sum = 0;
    for(int i: numbers){
        sum = sum + i;
    }
    return sum;
}
