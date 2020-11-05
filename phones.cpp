#include <iostream>
#include <string.h>

using namespace std;

char litery [20], cyfry [21], cyfra;
int a,dlugosc, b;


int main()
{
    cin>>a;
    for (int i=1;i<=a;i++)
    {
        cin>>litery;
        dlugosc=strlen(litery);
        int *tab;
        tab=new int [dlugosc];
        for (int j=0;j<dlugosc;j++)
        {
            if ((litery[j]=='A')||(litery[j]=='B')||(litery[j]=='C'))
            {
            cyfry[j]='2';
            cyfra = cyfry[j];
            b = cyfra-'0';
            tab[j]=b;
            }
            if ((litery[j]=='D')||(litery[j]=='E')||(litery[j]=='F'))
            {
            cyfry[j]='3';
            cyfra = cyfry[j];
            b = cyfra-'0';
            tab[j]=b;
            }
            if ((litery[j]=='G')||(litery[j]=='H')||(litery[j]=='I'))
            {
            cyfry[j]='4';
            cyfra = cyfry[j];
            b = cyfra-'0';
            tab[j]=b;
            }
            if ((litery[j]=='J')||(litery[j]=='K')||(litery[j]=='L'))
            {
            cyfry[j]='5';
            cyfra = cyfry[j];
            b = cyfra-'0';
            tab[j]=b;
            }
            if ((litery[j]=='M')||(litery[j]=='N')||(litery[j]=='O'))
            {
            cyfry[j]='6';
            cyfra = cyfry[j];
            b = cyfra-'0';
            tab[j]=b;
            }
            if ((litery[j]=='P')||(litery[j]=='Q')||(litery[j]=='R')||(litery[j]=='S'))
            {
            cyfry[j]='7';
            cyfra = cyfry[j];
            b = cyfra-'0';
            tab[j]=b;
            }
            if ((litery[j]=='T')||(litery[j]=='U')||(litery[j]=='V'))
            {
            cyfry[j]='8';
            cyfra = cyfry[j];
            b = cyfra-'0';
            tab[j]=b;
            }
            if ((litery[j]=='W')||(litery[j]=='X')||(litery[j]=='Y')||(litery[j]=='Z'))
            {
            cyfry[j]='9';
            cyfra = cyfry[j];
            b = cyfra-'0';
            tab[j]=b;
            }
        }
        for (int j=0;j<dlugosc; j++)
        {
        cout<<tab[j];
        }
        cout<<endl;
    }
    return 0;
}
