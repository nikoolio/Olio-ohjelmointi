/*
 * Kirjoita C++-sovellus, joka kysyy kaksi kokonaislukua (a ja b)
 * ja tulostaa niiden summan ja osamäärän.
 * Osamäärä tulostetaan kahdella desimaalilla.
 */

#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    int a, b, sum, division;

    cout << "Anna ensimmainen luku: ";
    cin >> a;
    cout << "Anna toinen luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    sum = retSum(a, b);
    cout << "Summa retSum: " << sum << endl;

    try
    {
        division = retDiv(a,b);
        cout << "retDiv jakolaskun tulos: " << division << endl;
    }
    catch(runtime_error& error)
    {
        cout << "Virhe: " << error.what()<<endl;
    }

    return 0;
}

