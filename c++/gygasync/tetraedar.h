#ifndef TETRAEDAR_H_INCLUDED
#define TETRAEDAR_H_INCLUDED
#include <iostream>

using namespace std;

class TetraedarRacunanje
{
private:
    double r;
public:
    void Postavi(double e){r=e;};
    void Zapremina(){cout<<"Zapremina Tetraedra: "<<sqrt(2)*r*r*r/12<<endl;};
    void Povrsina(){cout<<"Povrsina Tetraedra: "<<sqrt(3)*r*r<<endl;};
};
class TetraedarCrtanje
{
private:
    HWND konzola = GetConsoleWindow();
    HDC dc = GetDC(konzola);
    COLORREF boja = RGB(255,255,255);
    COLORREF boja2 = RGB(0,0,255);
    double r;
public:
    void Postavi(double e){r=e;};
    void Crtaj()
    {
        for(int i = 0;i<(int)(r*10);i++)
        {
            SetPixel(dc,i,-i*(sqrt(3)/2+1)+(int)(r*10)+sqrt(3)/2*(int)(r*10),boja);
            SetPixel(dc,i+(int)(r*10),i*(sqrt(3)/2+1)-(int)(r*10)+sqrt(3)/2+1*(int)(r*10),boja);
            SetPixel(dc,i*2,(sqrt(3)/2+1)*(int)(r*10),boja);
            SetPixel(dc,(int)(r*10),1.17*i,boja2);
            SetPixel(dc,i,(1+sqrt(3)/2)*(int)(r*10)-i*(sqrt(2)/2),boja2);
            SetPixel(dc,(int)(r*10)+i,i*(sqrt(2)/2)+1.17*(int)(r*10),boja2);
        }
        ReleaseDC(konzola,dc);
        Sleep(4000);
        for(int i=0;i<50;i++) cout<<"\n";
        system("cls");
    }
};
class TetraedarMeni
{
private:
    double r;
    int i;
    char p='d';
    TetraedarRacunanje tetraedar;
    TetraedarCrtanje tetraedarcrtanje;
public:
    void Postavi(double e){r=e;}
    void Prikazi()
    {
        while(p!='n')
            {
                system("cls");
                cout<<"r="<<r<<endl;
                cout<<"Izaberi operaciju:\n 1. Zapremina Tetraedra\n 2. Povrsina Tetraedra\n 3. Nacrtaj tetraedar"<<endl;
                cin>>i;
                tetraedar.Postavi(r);
                switch(i)
                {
                case 1:
                    tetraedar.Zapremina();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 2:
                    tetraedar.Povrsina();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 3:
                    system("cls");
                    tetraedarcrtanje.Postavi(r);
                    tetraedarcrtanje.Crtaj();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                default:
                    break;
                }
            }

    };
};
#endif // TETRAEDAR_H_INCLUDED
