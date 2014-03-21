#ifndef MENI_H_INCLUDED
#define MENI_H_INCLUDED

#include <iostream>
#include "kvadar.h"
#include "lopta.h"

using namespace std;

class Meni
{

private:
        int izbor=1;
public:
        void Prikazi()
        {
            while(izbor!=3)
            {
                system("cls");
                cout<<"Izaberi figuru:\n 1. Kvadar\n 2. Lopta\n 3. Izlaz"<<endl;
                cin>>izbor;
                switch(izbor)
                {
                case 1:
                    {
                        system("cls");
                        KvadarMeni kvadarmeni;
                        cout<<"Unesi dimenzije"<<endl;
                        double k,l,n;
                        cout<<"a=";
                        cin>>k;
                        cout<<"b=";
                        cin>>l;
                        cout<<"c=";
                        cin>>n;
                        cout<<endl;
                        kvadarmeni.Postavi(k,l,n);
                        kvadarmeni.Prikazi();
                    }
                    break;
                case 2:
                    {
                        system("cls");
                        LoptaMeni loptameni;
                        cout<<"Unesi dimenzije"<<endl;
                        double k;
                        cout<<"r=";
                        cin>>k;
                        cout<<endl;
                        loptameni.Postavi(k);
                        loptameni.Prikazi();
                    }
                default:
                    break;
                }
            }
            system("exit");
        }
};



#endif // MENI_H_INCLUDED
