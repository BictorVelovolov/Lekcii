#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    int a, b, ch1, ch2, ch3, summ;
    string l;
    ifstream file;
    ofstream file2;
    file.open("aboba.txt");
    file2.open("KalAboby.txt");
    file >> a;
    cout << a << " ";
    file >> b;
    cout << b << " ";
    summ = 0;
   while (a > 0)
   {
       a--;
       file >> ch1 >> ch2 >> ch3;
       summ = summ + ch1;
   }
   file2 << summ;
   file2.close();
    file.close();
    return 0;
}
