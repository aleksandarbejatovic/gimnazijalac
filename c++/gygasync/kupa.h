#ifndef KUPA_H_INCLUDED
#define KUPA_H_INCLUDED

#include <iostream>

using namespace std;

class KupaRacunanje
{
private:
    double r,h,s;
public:
    void Postavi(double e, double g){r=e;h=g;s=sqrt(r*r+h*h);};
    void Zapremina(){cout<<"Zapremina Kupe: "<<r*r*h*3.14/3<<endl;};
    void Povrsina(){cout<<"Povrsina Kupe: "<<r*3.14*(r+s)<<endl;};
};
class KupaCrtanje
{
private:
    HWND konzola = GetConsoleWindow();
    HDC dc = GetDC(konzola);
    COLORREF boja = RGB(255,255,255);
    COLORREF boja2 = RGB(0,255,0);
    COLORREF boja3 = RGB(0,0,255);
    double r,h,s;
public:
    void Postavi(double e, double g){r=e;h=g;s=sqrt(r*r+h*h);};
    void Crtaj()
    {
        for(int i = 0;i<(int)(r*10);i++)
        {
            SetPixel(dc,i,(int)(i*sin(h/s)),boja);
        }
        for(int i = 0;i<(int)(h*10);i++)
        {
            SetPixel(dc,(int)(r*10),i,boja3);
        }
        for(double i=0.0; i<=360.0*r;i+=0.1)
        {
            double ugao = i*3.14159265359/180;
            SetPixel(dc,(int)(r*cos(ugao)*10+r*10),(int)(r*sin(ugao)*2),boja2);
        }
        ReleaseDC(konzola,dc);
        Sleep(4000);
        for(int i=0;i<50;i++) cout<<"\n";
        system("cls");
    }
};
class KupaMeni
{
private:
    double r,h,s;
    int i;
    char p='d';
    KupaRacunanje kupa;
    KupaCrtanje kupacrtanje;
public:
    void Postavi(double e, double g){r=e;h=g;s=sqrt(r*r+h*h);}
    void Prikazi()
    {
        while(p!='n')
            {
                system("cls");
                cout<<"r="<<r<<"   h="<<h<<"   s="<<s<<endl;
                cout<<"Izaberi operaciju:\n 1. Zapremina Kupe\n 2. Povrsina Kupe\n 3. Nacrtaj Kupu"<<endl;
                cin>>i;
                kupa.Postavi(r,h);
                switch(i)
                {
                case 1:
                    kupa.Zapremina();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 2:
                    kupa.Povrsina();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 3:
                    system("cls");
                    kupacrtanje.Postavi(r,h);
                    kupacrtanje.Crtaj();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                default:
                    break;
                }
            }

    };
};
#endif // KUPA_H_INCLUDED
