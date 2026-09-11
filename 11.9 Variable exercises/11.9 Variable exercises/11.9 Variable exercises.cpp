#include <iostream>

using namespace std;

void SelectTask();
int TaskNum;
void Task1();
void Task2();
void Task3();

void main()
{
    SelectTask();
}

void SelectTask() {
    cout << "Which task do you want to run? (Type 1, 2 or 3, or 0 to exit the program)" << endl;
    cin >> TaskNum;

    if (TaskNum == 1) {
        Task1();
    }

    else if (TaskNum == 2) {
        Task2();
    }

    else if (TaskNum == 3) {
        Task3();
    }

    else if (TaskNum == 0) {
        cout << "Thank you for your attention, goodbye!";
    }

    else {
        cout << "Choose 1 2 or 3 you retard\n" << endl;
        SelectTask();
    }
}

void Task1() {
    cout << "This is the first task" << endl;
    int intNum = 5;
    float floatNum = 5.3f, sum; 
    double doubleNum = 10.1f;
    sum = intNum + floatNum + doubleNum;
    cout << "intNum is " << intNum << "\nfloatNum is " << floatNum << "\ndoubleNum is " << doubleNum << endl;
    cout << "Their sum is " << sum << "\n" << endl;

    SelectTask();
}

void Task2() {
    int switchableNum1, switchableNum2, switchableTemp;
    cout << "Give any number\n";
    cin >> switchableNum1;
    cout << "Give another number\n";
    cin >> switchableNum2;

    cout << "Number 1 is " << switchableNum1 << " and number 2 is " << switchableNum2 << endl;

    cout << "Switching their values.." << endl;
    switchableTemp = switchableNum1;
    switchableNum1 = switchableNum2;
    switchableNum2 = switchableTemp;
    cout << "Switched their values" << endl;
    cout << "Number 1 is now " << switchableNum1 << " and number 2 is now " << switchableNum2 << "\n" << endl;
    SelectTask();
}

void Task3() {
    cout << "This is the third task and there was no assignment to do anything here, GET OUT!\n" << endl;
    SelectTask();
}