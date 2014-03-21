#ifndef LOPTA_H_INCLUDED
#define LOPTA_H_INCLUDED

#include <iostream>

using namespace std;

class LoptaRacunanje
{
private:
    double r;
public:
    void Postavi(double e){r=e;};
    void Zapremina(){cout<<"Zapremina Lopte: "<<(4/3)*r*r*r*3.14<<endl;};
    void Povrsina(){cout<<"Povrsina Lopte: "<<4*r*r*3.14<<endl;};
};
class LoptaCrtanje
{
private:
    HWND konzola = GetConsoleWindow();
    HDC dc = GetDC(konzola);
    COLORREF boja = RGB(255,255,255);
    COLORREF poluprecnik = RGB(0,255,0);
    COLORREF boja2 = RGB(0,0,255);
    double r;
public:
    void Postavi(double e){r=e;};
    void Crtaj()
    {
        for(double i=0.0; i<=360.0*r;i+=0.1)
        {
            double ugao = i*3.14159265359/180;
            SetPixel(dc,(int)(r*cos(ugao)*10+r*10),(int)(r*sin(ugao)*10+r*10),boja);
            SetPixel(dc,(int)(i/36),(int)(r*10),poluprecnik);
            SetPixel(dc,(int)(r*cos(ugao)*2+r*10),(int)(r*sin(ugao)*10+r*10),boja2);
            SetPixel(dc,(int)(r*cos(ugao)*10+r*10),(int)(r*sin(ugao)*2+r*10),boja2);
        }
        ReleaseDC(konzola,dc);
        Sleep(4000);
    }
};
class LoptaMeni
{
private:
    double r;
    int i;
    char p='d';
    LoptaRacunanje lopta;
    LoptaCrtanje loptacrtanje;
public:
    void Postavi(double e){r=e;}
    void Prikazi()
    {
        while(p!='n')
            {
                system("cls");
                cout<<"r="<<r<<endl;
                cout<<"Izaberi operaciju:\n 1. Zapremina Lopte\n 2. Povrsina Lopte\n 3. Nacrtaj loptu"<<endl;
                cin>>i;
                lopta.Postavi(r);
                switch(i)
                {
                case 1:
                    lopta.Zapremina();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 2:
                    lopta.Povrsina();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 3:
                    system("cls");
                    loptacrtanje.Postavi(r);
                    loptacrtanje.Crtaj();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                default:
                    break;
                }
            }

    };
};
#endif // LOPTA_H_INCLUDED
