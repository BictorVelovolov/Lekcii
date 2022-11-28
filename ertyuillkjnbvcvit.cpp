#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    string l;
    ifstream file;
    file.open("aboba.txt");
    file >> a;
    cout << a << " ";
    file >> b;
    cout << b << " ";;
   while (a > 0)
   {
       a--;
       getline (file, l);
       cout << l << endl;
   }
    file.close();


    return 0;
}
