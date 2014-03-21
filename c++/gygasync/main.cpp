//potrebno da bi GetConsoleWindow() radio
#define _WIN32_WINNT 0x0500

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <windows.h>
#include <conio.h> //samo zbog sleep funkcije :)

using namespace std;

class Klasa{
private:
        double x,y,z;
public:
        void Postavi(double a, double b, double c){x=a;y=b;z=c;};
        void Zapremina(){cout<<"Zapremina Kvadra je: "<<x*y*z<<endl;};
        void Povrsina(){cout<<"Povrsina Kvadra je: "<<2*x*y+2*x*z+2*y*z<<endl;};
        void GlavnaDijagonala(){cout<<"Glavna dijagonala Kvadra je: "<<sqrt(x*x+y*y+z*z)<<endl;};
        void Sfera() {cout<<"Sfera opisana oko kvadra ima poluprecnik: "<<sqrt(x*x+y*y+z*z)/2<<endl;};
};
class Meni{
private:
        double x,y,z;
        int i;
        char p='d';
        Klasa kvadar;
public:
        void Postavi(double a, double b, double c){x=a;y=b;z=c;};
        int Crtanje(double ax, double bx, double cx)
        {
            system("cls");
            int visina=(int)(bx*10*sqrt(2)/2);
            HWND konzola = GetConsoleWindow();
            HDC dc = GetDC(konzola);
            COLORREF boja = RGB(255,255,255);
            COLORREF boja2 = RGB(0,0,255);
            for(int i=0;i<(int)(ax*10);i++)
            {
                SetPixel(dc,i,0+visina,boja);
                SetPixel(dc,i,(int)(cx*10)+visina,boja);
                SetPixel(dc,i+visina,0,boja);
                SetPixel(dc,i+visina,(int)(cx*10),boja2);
            }
            for(int i=0;i<(int)(cx*10);i++)
            {
                SetPixel(dc,0,i+visina,boja);
                SetPixel(dc,(int)(ax*10),i+visina,boja);
                SetPixel(dc,(int)(ax*10)+visina,i,boja);
                SetPixel(dc,visina,i,boja2);
            }
            for(int i=0;i<visina;i++)
            {
                SetPixel(dc,i,visina-i+(int)(cx*10),boja2);
                SetPixel(dc,i,visina-i,boja);
                SetPixel(dc,i+(int)(ax*10),visina-i,boja);
                SetPixel(dc,i+(int)(ax*10),visina-i+(int)(cx*10),boja);
            }
            ReleaseDC(konzola, dc);
            Sleep(4000);
            system("pause");
            for(int i=0;i<50;i++) cout<<"\n"; //Izbrise kvadar sa ekrana posto cls ne brise
            system("cls");
        };
        void Prikazi()
        {
            while(p!='n')
            {
                system("cls");
                cout<<"a="<<x<<"   b="<<y<<"   c="<<z<<endl;
                if(x==y&&y==z&&x==z)
                    cout<<"Kvadar je Kocka\n"<<endl;
                cout<<"Izaberi operaciju:\n 1. Zapremina Kvadra\n 2. Povrsina Kvadra\n 3. Glavna dijagonala Kvadra\n 4. Poluprecnik sfere opisane oko kvadra\n 5. Nacrtaj Kvadar"<<endl;
                cin>>i;
                kvadar.Postavi(x,y,z);
                switch(i)
                {
                case 1:
                    kvadar.Zapremina();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 2:
                    kvadar.Povrsina();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 3:
                    kvadar.GlavnaDijagonala();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 4:
                    kvadar.Sfera();
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                case 5:
                    Crtanje(x,y,z);
                    cout<<"Nastaviti dalje (d/n)? ";
                    cin>>p;
                    break;
                default:
                    break;
                }
            }
            system("exit");
        }
};


int main()
{
    Klasa rad;
    Meni meni;
    cout<<"Unesi dimenzije"<<endl;
    double k,l,n;
    int i;
    cout<<"a=";
    cin>>k;
    cout<<"b=";
    cin>>l;
    cout<<"c=";
    cin>>n;
    cout<<endl;
    meni.Postavi(k,l,n);
    meni.Prikazi();
    return 0;
}
