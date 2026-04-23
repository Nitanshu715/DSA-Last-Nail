#include<iostream>
using namespace std;
int main()
{
    int age;
    string name;
    cout << "Tell your age and name!\n";
    cin >> age;
    cin.ignore();
    getline(cin, name);
    cout << "Hello " << name << " You are " << age << " Years old!";
    return 0;
}
