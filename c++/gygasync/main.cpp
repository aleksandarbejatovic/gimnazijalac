#include <iostream>
#include <cmath>
#include <cstdlib>

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
        void Prikazi()
        {
            while(p!='n')
            {
                system("cls");
                cout<<"a="<<x<<"   b="<<y<<"   c="<<z<<endl;
                if(x==y&&y==z&&x==z)
                    cout<<"Kvadar je Kocka\n"<<endl;
                cout<<"Izaberi operaciju:\n 1. Zapremina Kvadra\n 2. Povrsina Kvadra\n 3. Glavna dijagonala Kvadra\n 4. Poluprecnik sfere opisane oko kvadra"<<endl;
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
