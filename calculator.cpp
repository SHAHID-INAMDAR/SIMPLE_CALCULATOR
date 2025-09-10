#include <iostream>
#include <string>
#include <tuple>
using namespace std;
int main() {
    //FINALLY MAKING SOMETHING (SMILEY EMOJI) :)

    char x;
    do{

        float num1;
        cout << "ENTER YOUR FIRST NUMBER : ";
        cin >> num1;
        char i;
        cout << "PLEASE SELECT THE OPERATOR :( + , - , * , / ) : ";
        cin >> i;

        if (i == '+')
        {
            cout << "YOU CHOOSE TO ADD " << endl;
            float num2;
            cout << "ENTER SECOND NUMBER : ";
            cin >> num2;
            cout << "YOUR RESULT IS : ";
            cout << num1 + num2 <<endl;
        }

        else if (i == '-')
        {
            cout << "YOU CHOOSE TO SUBSTRACT" << endl;
            float num2;
            cout << "ENTER YPUR SECOND NUMBER : ";
            cin >> num2;
            cout <<  "YOUR RESULT IS : "<< num1 - num2 << endl;
        }

        else if (i == '*')
        {
            cout << "YOU CHOOSE MULTIPLICATION " << endl;
            float num2;
            cout << "ENTER YOUR SECOND NUMBER : ";
            cin >> num2;
            cout << "YOUR RESULT IS : " << num1 * num2 <<endl;
        }
        else if (i == '/')
        {
            cout << "YOU CHOOSE DIVISION " << endl;
            float num2;
            cout << "ENTER YOUR SECOND NUMBER : ";
            cin >> num2;

            //ECEPTION FOR DIVISION BY 0
            if (num2 == 0){
                cout << " IT'S BEYOND MY CAPABILITIES ";
            }
            cout <<"YOUR RESULT IS : "<< num1 / num2 << endl;
        }
        else
        {
            cout << "INVALID OPERATOR PLEASE TRY AGAIN " << endl;
        }
        cout <<"IF YOU WANT TO CONTINUE PRESS 'Y' "<< endl << "IF NOT PRESS ANY KEY ON YOUR KEYBOARD  : ";
        cin>> x;

    } while(x == 'Y'|| x == 'y');
    cout << "THANK YOU FOR USING THIS CALCULATOR SEE YOU LATER :-)";
    
    return 0;
}
