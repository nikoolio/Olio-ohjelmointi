#include <iostream>
#include "car.h"
#include "rectangle.h"

using namespace std;

int main()
{
    cout << "Sovellus luo olioita pinoon, kekoon ja smart pointerilla. Sovellus tulostaa tiedon olion tuhoamisesta, kun tuhoaja suoritetaan." << endl << endl;
    cout << "Luodaan Car-luokan olio myCar pinoon, annetaan sille tiedot ja tulostetaan tiedot." << endl;

    Car myCar;
    myCar.setBrand("Opel");
    myCar.setModel("Astra");
    myCar.setYearModel(2005);
    myCar.printData();

    cout << endl;
    cout << "Luodaan Rectangle-luokan olio-osoitin *myRect, annetaan korkeus ja leveys ja tulostetaan pinta-ala ja keha. Olio tarvitsee tuhota koodissa." << endl;

    Rectangle *myRect = new Rectangle(2.5, 5.7);

    cout << "Ala: " << myRect->getArea() << endl;
    cout << "Keha: " << myRect->getCircum() << endl;

    delete myRect;
    myRect=nullptr;

    cout << endl;
    cout << "Luodaan smart pointerina Student-luokan olio, asetetaan arvot settereilla ja tulostetaan gettereilla" << endl;


    return 0;
}
