#include<iostream>
using namespace std;
int main()
{



    int  sodau, socuoi;
    int tong = 0;
    cout << "nhap sodau ; ";
    cin >> sodau;
    cout << "nhap socuoi;";
    cin >> socuoi;


    {
        while (sodau <= socuoi);

        cout << sodau << "  ";
        tong = tong + sodau;
        sodau++;
    }
    cout << "\ntong=" << tong;

    cout << "\n vong lap do while";
    do
    {
        cout << sodau << " ";
        tong = tong + sodau ;
        sodau++;
        cout << "\ntong=" << tong;
    } while (sodau <= socuoi);
   return 0;
}

