#include<iostream>
using namespace std;
int main()
{
    string name;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, name);
    if (age > 18)
    {
        cout << "Hello " << name << ", you are an adult!";
    }
    else {
        cout << "Hello " << name << ", you are a minor!";
    }
    return 0;
}
