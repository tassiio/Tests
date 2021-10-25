#include <iostream>
#include "Class_LIFO.h"

using namespace std;

int input()
{
    while(true)
    {
        int int_num;

        cin >> int_num;

        if(cin.fail() || int_num < 0 || int_num > 100000)
        {
            cin.clear();
            cin.ignore(32767, '\n');

            cout << "Invalid input. Please, enter a number.\n";
        }

        else
        {
            int_num = static_cast<int>(int_num); // type conversion into int if the input is not integer
            return int_num;
        }
    }
}

int input_element()
{
    while(true)
    {
        int int_num;

        cin >> int_num;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');

            cout << "Invalid input. Please, enter a number.\n";
        }

        else
        {
            int_num = static_cast<int>(int_num); // type conversion into int if the input is not integer
            return int_num;
        }
    }
}


int main() {
    cout << "Enter the length of the stack:\n";
    int Length_of_stack = input();
    int element;

    LIFO Stack(Length_of_stack);

    cout << "Enter integer elements of the stack:" << endl;
    for(int k = 0; k < Length_of_stack; k++) {

        element = input_element();

        Stack.L_Push(element);
    }

    cout << endl << "Stack elements (Last in, First out):" << endl;

    for(int k = Length_of_stack; k > 0; k--) {
        Stack.L_Pop();
    }
    return 0;
}
