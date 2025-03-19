#include <iostream>
using namespace std;
int main(){
    char operators;
    int num1, num2, answer ;

    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter the operation to be performed : ";
    cin>>operators;

    switch(operators){
        case '+': 
        answer = num1 + num2;
        cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<answer<<endl;
        break;

        case '-':
        answer = num1 - num2;
        cout<<"The difference of "<<num1<<" and "<<num2<<" is "<<answer<<endl;
        break;

        case '*':
        answer = num1 * num2;
        cout<<"The multiplication result of "<<num1<<" and "<<num2<<" is "<<answer<<endl;
        break;

        case '/':
        if(num2 != 0){
            answer=num1/num2;
            cout<<"The division of "<<num1<<" and "<<num2<<" is "<<answer<<endl;
        } else {
            cout<<"Division by 0 is not possible ";
        }

        break;

        default: 
        cout<<"Error: The given number or operator is invalid"<<endl;
        break;
    }

    return 0;

}
