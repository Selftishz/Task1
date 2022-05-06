//#include "Complex.h"
//#include <iostream>
//#include <fstream>
//#include <windows.h>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string line, real, imagin;
//    double I, R;
//    int c, n = 0, j = 0;
//    ComplexNumber a, b;
//    ifstream in("Complex.txt");
//
//
//    if (in.is_open())
//    {
//        while (getline(in, line))
//        {
//            n++;
//        }
//    }
//
//    in.close();
//    ComplexNumber* P = new ComplexNumber[n];
//    ifstream in2("Complex.txt");
//
//
//    if (in2.is_open())
//    {
//        while (getline(in2, line))
//        {
//            for (int i = 0; i < line.length() - 1; i++)
//            {
//                if (line[i] == ' ') { c = i; }
//            }
//            for (int i = 0; i < line.length() - 1; i++)
//            {
//                if (i < c) { real += line[i]; }
//                else if (i > c) { imagin += line[i]; }
//            }
//            R = atof(real.c_str());
//            I = atof(imagin.c_str());
//            P[j] = ComplexNumber(R, I);
//            real = "";
//            imagin = "";
//            j++;
//        }
//        in2.close();
//    }
//
//    cout << "complex count = " << n << endl;
//    cout << "P = " << endl;
//    double Max_abs = 0;
//    ComplexNumber Max;
//
//    for (int i = 0; i < n; i++)
//    {
//        P[i].print();
//        if (P[i].abs() > Max_abs) {
//            Max_abs = P[i].abs();
//            Max = P[i];
//        }
//
//    }
//
//    cout << "Max abs = ";
//    Max.print();
//}