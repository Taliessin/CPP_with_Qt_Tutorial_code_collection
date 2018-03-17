#include <QCoreApplication>
#include <stdio.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char    myoutput [60];
    int     stringlength,
            x=4,
            y=10,
            c1='A',
            c2='B',
            c3='C',
            nl='\n';

    stringlength = sprintf(myoutput, "%d plus %d equals %d", x, y, x+y);
    printf ("[%s] is a string that is %d characters long.\n", myoutput, stringlength);

    putc(c1, stdout);
    putc(c2, stdout);
    putc(c3, stdout);
    putc(nl, stdout);

    return a.exec();
}
