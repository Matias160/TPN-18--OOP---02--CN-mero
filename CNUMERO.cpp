#include <iostream>

using namespace std;

class CNumber {
private:
    int numero1, numero2, numero3;

public:
    CNumber(int, int, int);
    void maximo();
    void minimo();
    void promedio();
    void pares();
    void impares();
};

CNumber::CNumber(int nu1, int nu2, int nu3) {
    numero1 = nu1;
    numero2 = nu2;
    numero3 = nu3;
}

void CNumber::maximo() {
    if (numero1 >= numero2 && numero1 >= numero3) {
        cout << "El mayor numero es: " << numero1 << endl;
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        cout << "El mayor numero es: " << numero2 << endl;
    } else {
        cout << "El mayor numero es: " << numero3 << endl;
    }
}

void CNumber::minimo() {
    if (numero1 <= numero2 && numero1 <= numero3) {
        cout << "El menor numero es: " << numero1 << endl;
    } else if (numero2 <= numero1 && numero2 <= numero3) {
        cout << "El menor numero es: " << numero2 << endl;
    } else {
        cout << "El menor numero es: " << numero3 << endl;
    }
}

void CNumber::promedio() {
    int promedio = (numero1 + numero2 + numero3) / 3;
    cout << "El promedio de los tres numeros es: " << promedio << endl;
}

void CNumber::pares() {
    if (numero1 % 2 == 0) {
        cout << "El numero " << numero1 << " es par." << endl;
    }
    if (numero2 % 2 == 0) {
        cout << "El numero " << numero2 << " es par." << endl;
    }
    if (numero3 % 2 == 0) {
        cout << "El numero " << numero3 << " es par." << endl;
    }
}

void CNumber::impares() {
    if (numero1 % 2 != 0) {
        cout << "El numero " << numero1 << " es impar." << endl;
    }
    if (numero2 % 2 != 0) {
        cout << "El numero " << numero2 << " es impar." << endl;
    }
    if (numero3 % 2 != 0) {
        cout << "El numero " << numero3 << " es impar." << endl;
    }
}

int main() {
    int num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    CNumber numeros = CNumber(num1, num2, num3);

    numeros.maximo();
    numeros.minimo();
    numeros.promedio();
    numeros.pares();
    numeros.impares();

    return 0;
}
