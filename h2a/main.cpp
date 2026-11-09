#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using std::cout;
using std::endl;

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
    cout << "Luodaan smart pointerina Student-luokan olio myStudent, asetetaan arvot settereilla ja tulostetaan gettereilla" << endl;
    std::unique_ptr<Student> myStudent = std::make_unique<Student>();
    myStudent->setStudentNumber(12345);
    myStudent->setAverage(4.78);
    myStudent->setName("Mauri Moilanen");
    cout << "Opiskelijanumero: " << myStudent->getStudentNumber() << endl;
    cout << "Nimi: " << myStudent->getName() << endl;
    cout << "Keskiarvo: " << myStudent->getAverage() << endl;

    return 0;
}
