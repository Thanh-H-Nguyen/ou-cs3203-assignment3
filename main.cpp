#include <iostream>
#include <list>
using namespace std;

list<int> Reverse(list<int> numbers) {
    numbers.reverse();
    return numbers;
}

int main(){
    list<int> numbers;
    int num;
    cout << "Enter numbers: ";
    while(cin >> num){
        numbers.push_back(num);// to add a new number to the end of list
        cout << "Enter numbers: ";
    }
    list<int> reversedNumbers = Reverse(numbers);
    cout << "Reversed: ";
    for (int i : reversedNumbers) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
