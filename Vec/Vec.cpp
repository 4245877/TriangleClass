#include "FileName.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
    cout << "Enter A, B, C, Alpha, Beta, Gamma: ";
    double A, B, C, Alpha, Beta, Gamma;
    cin >> A >> B >> C >> Alpha >> Beta >> Gamma;
    Triangle Triangle1(A, B, C, Alpha, Beta, Gamma);


 
    while (true) {
        cout << "\n\n1. otrymannya i zmina poliv\n";
        cout << "2. obchyslennya ploshchi\n";
        cout << "3. obchyslennya perymetra\n";
        cout << "4. obchyslennya vysot\n";
        cout << "5. vyznachennya vydu trykutnyka\n";
        short num; cin >> num;

        switch (num)
        {
        case 1:
            cin >> A >> B >> C >> Alpha >> Beta >> Gamma;
            Triangle1.SetA(A);
            Triangle1.SetA(B);
            Triangle1.SetA(C);
            Triangle1.SetA(Alpha);
            Triangle1.SetA(Beta);
            Triangle1.SetA(Gamma);
            break;
        case 2:
            cout << "Area: " << Triangle1.area(A, B, C) << endl;
            break;
        case 3:
            cout << "Perimeter: " << Triangle1.perimeter();
            break;
        case 4:
            cout << "Height A: " << Triangle1.heightA(A, B, C) << endl;
            cout << "Height B: " << Triangle1.heightB(A, B, C) << endl;
            cout << "Height C: " << Triangle1.heightC(A, B, C) << endl;
        case 5:
            //Triangle1.type(A, B, C);

        default:
            break;
        }
    }

    return 0;
}

