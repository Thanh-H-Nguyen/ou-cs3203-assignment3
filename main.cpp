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

int Multiplies(list<int> numbers){
    int mult = 1;
    for(int i : numbers){
        mult = mult * i;
    }
    return mult;
}

list<int> Reverse(list<int> numbers) {
    numbers.reverse();
    return numbers;
}

int main(){
    list<int> numbers;
    int num;
    cout << "Enter numbers: ";
    while(cin >> num){
        numbers.push_back(num);
        cout << "Enter numbers: ";
    }
    cout << endl;
    cout <<"Sum: " << Sum(numbers) << endl;
    cout <<"Mult: " << Multiplies(numbers) << endl;
    
    list<int> reversedNumbers = Reverse(numbers);
    cout << "Reversed: ";
    for (int i : reversedNumbers) {
        cout << i << " ";
    }
    cout << endl;
    return 0;

}
