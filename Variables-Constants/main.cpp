#include <QCoreApplication>
#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main (int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  const string inputmessage = "Please enter the circle radius:";
  const string outputmessage = "The circle area is: ";
  double radius = 0.0;
  double circle;

  cout << inputmessage << newline;
  cin >> radius;
  circle = 2 * pi * radius;
  cout << outputmessage << circle;
  cout << newline;

  return a.exec();
}
