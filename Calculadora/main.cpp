// File: main.cc

#include <iostream>
using namespace std;

int main (){
        int* num1 = new int;
        int* num2 = new int;
        int* resultado = new int;
        //titulo
        cout << endl;
        cout << "CALCULADORA" << endl;
        cout << endl;
        //peticion al usuario
        cout << "Indícame el primer numero : ";
        cin >> *num1;
        cout << endl;
        cout << "Indicame el segundo numero : ";
        cin >> *num2;
        cout << endl;
        cout << " (1)suma\n (2)resta\n (3)multiplicacio\n (4)division\n cual quieres? : ";
        cin >> *resultado;
        cout << endl;
        //resultado
        cout << "RESULTADO" << endl;
        cout << endl;

        switch(*resultado){
            case 1:
                cout << *num1 << " + " << *num2 << " = " << *num1 + *num2;
                break;
            case 2:
                cout << *num1 << " - " << *num2 << " = " << *num1 - *num2;
                break;
            case 3:
                cout << *num1 << " x " << *num2 << " = " << *num1 * *num2;
                break;
            case 4:
                cout << *num1 << " / " << *num2 << " = " << *num1 / *num2;
                break;
        }
        //liberacion de memoria
        delete num1;
        delete num2;
        delete resultado;
        return 0;
}
