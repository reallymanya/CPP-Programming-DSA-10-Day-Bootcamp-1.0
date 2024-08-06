/*//Assignment -> make a basic calculator using + - * / %
//optional  = take user input of two numbers, take input for operation to perform, print the ans*/
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter first number"<< endl;
    cin >> a;
    cout << "Enter second number"<< endl;
    cin >> b;

    char op;
    cout << "Enter operator: "<<endl;
    cin >> op;

    if(op == '+'){
        cout << "Answer is: "<< a + b << endl;
    }
    else if(op == '-'){
        cout << "Answer is: "<< a - b << endl;
    }
    else if(op == '*'){
        cout << "Answer is: "<< a * b << endl;
    }
    else{
        cout << "Answer is: "<< a/b << endl;
    }
return 0;
}
