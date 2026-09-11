//Programming Project - Alexandrov Timur
#include <iostream>
#include <Windows.h>
#include <string>
#include <format>

using namespace std;

void Section1();
void Section2();
void Section3();

int main()
{
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);

    cout << "The program starts:" << endl;

    Section1();
    //Section2();
    //Section3();

    cout << "The program ends and shuts down automatically." << endl;
}

//Describe the functionality of each section in your own words. Typically, function comments
//explain what the function does, what variables are passed to it, and what it returns...
void Section1(){
    string name, studentID, age, height, weight;
    cout << "Your first name and last name: "; getline(cin, name);
    cout << "Your age: "; cin >> age;
    cout << "Your student ID: "; cin >> studentID;
    cout << "Your height: "; cin >> height;
    cout << "Your weight: "; cin >> weight;

    cout << "Information given:\n\nName: " << name << "\nAge: " << age << "\nStudent ID: " << studentID << "\nHeight: " << height << "\nWeight: " << weight << endl;
}

//...in this course, the comments should also explain what the topic was, what was learned from it,
//what remains unclear, and what you learned about the topic.
void Section2()
{
    cout << "Source code of the second section" << endl;
}

void Section3()
{
    cout << "Source code of the third section" << endl;
}

//After Section 3, continue creating new functions following the same pattern. Also remember,
//that in C/C++, a function must be declared before it is called (so add the declaration above the main function).




