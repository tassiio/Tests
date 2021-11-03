
#include "Class_Slice.h"

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

    cout << "Enter the length of the array:\n";
    int Length_of_array = input();
    int *My_Array = new int [Length_of_array-1];
    int element;

    Class_Slice String(Length_of_array);

    cout << "Enter integer elements of the array:" << endl;
    for(int k = 0; k < Length_of_array; k++) {

        element = input_element();
        My_Array[k] = element;

        String.S_Push(element);
    }
    cout << "Your array: " << endl;

    for(int i = 0; i < Length_of_array; i++) {
        cout << My_Array[i] << " ";
    }
    cout << endl;

    String.S_Parse("-5");

    delete []My_Array;

    return 0;
}
