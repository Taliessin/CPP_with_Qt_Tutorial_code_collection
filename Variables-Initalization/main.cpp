#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  int apples;
  double price;
  double special;

  QCoreApplication a(argc, argv);

  apples = 0;
  price = 0.50;
  special = 0.2;

  cout << "How many apples do you want?";
  cin >> apples;
  cout << apples << " apples cost " << ( apples * price ) << endl;
  cout << "But today the special price is " << ( special * apples * price ) << endl;

  return a.exec();
}
