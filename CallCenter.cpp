#include <iostream>
using namespace std;

float pagomenor(float x, float y);
float pagomayor(float x, float y);
float pagoigual(float x, float y);

int main()
{

    int numero, nuevoNum, puntaje;
    int opt, opt1, opt2;
    float deuda = 100;
    float pago, total;
    string mensaje;

    cout << "---BIENVENIDO AL CALL-CENTER DE C++---" << endl;

    cout << "1) Pago de facturas " << endl;
    cout << "2) Cambio de numero " << endl;
    cout << "3) Atencion al cliente" << endl;

    cout << "----------------------------" << endl;

    cout << "Elige una opcion de servicio: ";
    cin >> opt;

    cout << "----------------------------" << endl;

    switch (opt)
    {
    case 1:

        cout << "---PAGO DE FACTURAS---" << endl;

        cout << "1) Cable" << endl;
        cout << "2) Internet" << endl;
        cout << "3) Telefono" << endl;

        cout << "----------------------------" << endl;

        cout << "Elige una opcion de servicio: ";
        cin >> opt1;

        cout << "----------------------------" << endl;

        switch (opt1)
        {
        case 1:
            cout << "Ingrese el monto a pagar: $";
            cin >> pago;
            if (pago < deuda)
            {

                pagomenor(pago, deuda);
            }

            else if (pago > deuda)
            {
                pagomayor(pago, deuda);
            }

            else if (pago == deuda)
            {
                pagoigual(pago, deuda);
            }
            break;

        case 2:
            cout << "Ingrese el monto a pagar: $";
            cin >> pago;
            if (pago < deuda)
            {

                pagomenor(pago, deuda);
            }

            else if (pago > deuda)
            {
                pagomayor(pago, deuda);
            }

            else if (pago == deuda)
            {
                pagoigual(pago, deuda);
            }
            break;

        case 3:
            cout << "Ingrese el monto a pagar: $";
            cin >> pago;
            if (pago < deuda)
            {

                pagomenor(pago, deuda);
            }

            else if (pago > deuda)
            {
                pagomayor(pago, deuda);
            }

            else if (pago == deuda)
            {
                pagoigual(pago, deuda);
            }

        default:
            cout << "INGRESE OPCION VALIDA" << endl;
            break;
        }

        break;

    case 2:
        cout << "---CAMBIO DE NUMERO---" << endl;

        cout << "Ingrese su numero actual: ";
        cin >> numero;
        cout << "Ingrese su numero nuevo: ";
        cin >> nuevoNum;

    compa:
        cout << "1) TIGO" << endl;
        cout << "2) CLARO" << endl;
        cout << "3) MOVISTAR" << endl;

        cout << "A que compania desea cambiar: ";
        cin >> opt2;

        switch (opt2)
        {
        case 1:
            cout << "---A CAMBIADO A TIGO---" << endl;
            cout << "SU NUEVO NUMERO TIGO: " << nuevoNum;
            break;
        case 2:
            cout << "---A CAMBIADO A CLARO---" << endl;
            cout << "SU NUEVO NUMERO CLARO: " << nuevoNum;
            break;
        case 3:
            cout << "--A CAMBIADO A MOVISTAR--" << endl;
            cout << "SU NUEVO NUMERO MOVISTAR: " << nuevoNum;
            break;

        default:
            cout << "----------------------------" << endl;
            cout << "INGRESE UNA COMPANIA VALIDA." << endl;
            cout << "----------------------------" << endl;
            goto compa;
            break;
        }

        break;

    case 3: 
        cout << "---ATENCION AL CLIENTE---" << endl;
        cout<<"Bienvenido a atencion al cliente en que podemos ayudarle. "<<endl;
        cout<<"Mensaje: ";
        cin>>mensaje;

        cout<<"Gracias por tu aporte, puntea el servicio del 1-10: ";
        cin>>puntaje;

        if (puntaje<=10)
        {
            cout<<"Gracias por tu opinion :D";
        }
        else
        {
            cout<<"Puntuacion no valida";
        }
        

        break;

    default:
        cout << "----------------------------" << endl;
        cout << "OPCION NO VALIDA" << endl;
        cout << "----------------------------" << endl;
        break;
    }

    return 0;
}

// FUNCIONES

float pagomenor(float x, float y)
{
    float totalPago;

    totalPago = y - x;
    cout << "Pago realizado, deuda actual: $" << totalPago << endl;
    cout << "----------------------------" << endl;

    return totalPago;
}

float pagomayor(float x, float y)
{
    float totalPago;

    totalPago = x - y;
    cout << "Pago realizado, su cambio es: $" << totalPago << endl;
    cout << "----------------------------" << endl;

    return totalPago;
}

float pagoigual(float x, float y)
{
    float totalPago;

    totalPago = x - y;
    cout << "Su pago ha sido procesado, deuda saldada" << endl;
    cout << "deuda actual del servicio: $" << totalPago<<endl;
    cout << "----------------------------" << endl;

    return totalPago;
}
