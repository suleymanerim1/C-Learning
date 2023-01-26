#include <iostream>


using namespace std;


void sayHi (string name, int age){
        cout << "Hello " << name << ". You are " << age << endl;
}

int main()
{

/*
    int num1, num2;
    cin >> num1;
    cin >> num2;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num1 + num2 <<endl;
*/

/*
int lucky_number[10] = {1,2,3,4,5};
    cout << lucky_number[6] << endl;
    cout << lucky_number[4] << endl;
*/

    sayHi("Zeynep", 29);
    sayHi("Suleyman", 27);


    return 0;
}