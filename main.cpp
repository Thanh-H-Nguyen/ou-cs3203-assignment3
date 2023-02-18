#include <iostream>
#include <list>
using namespace std;

// sum of a list
int Sum(list<int> numbers){
    int sum = 0;
    for(int i: numbers){
        sum = sum + i;
    }
    return sum;
}
//computes the product (multiplication) of all of a list
int Multiplies(list<int> numbers){
    int mult = 1;
    for(int i : numbers){
        mult = mult * i;
    }
    return mult;
}

//reverse order
list<int> Reverse(list<int> numbers) {
    numbers.reverse();
    return numbers;
}

int main(){
    //create a list
    list<int> numbers;
    int num;
    cout << "Enter numbers: ";
    while(cin >> num){
        numbers.push_back(num);// to add a new number to the end of list
        cout << "Enter numbers: ";
    }
    cout << endl;
    cout <<"Sum: " << Sum(numbers) << endl;
    cout <<"Mult: " << Multiplies(numbers) << endl;
    // call reversedNumbers to passing from numbers
    list<int> reversedNumbers = Reverse(numbers);
    cout << "Reversed: ";
    for (int i : reversedNumbers) {
        cout << i << " ";
    }
    cout << endl;
    return 0;

}
