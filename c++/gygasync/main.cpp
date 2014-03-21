#include <iostream>
#include <cmath>

using namespace std;

class Klasa{
private:
        double x,y,z;
public:
        void Postavi(double a, double b, double c){x=a;y=b;z=c;};
        void ZapreminaKvadra(){cout<<"Zapremina Kvadra je: "<<x*y*z<<endl;};
        void PovrsinaKvadra(){cout<<"Povrsina Kvadra je: "<<2*x*y+2*x*z+2*y*z<<endl;};
        void GlavnaDijagonalaKvadra(){cout<<"Glavna dijagonala Kvadra je: "<<sqrt(x*x+y*y+z*z)<<endl;};
        void BoolKocka()
        {
            if(x==y&&y==z&&x==z)
                cout<<"Kvadar je Kocka"<<endl;
        }
        void SferaKvadra() {cout<<"Sfera opisana oko kvadra ima poluprecnik: "<<sqrt(x*x+y*y+z*z)/2<<endl;};
};

int main()
{
    Klasa rad;
    cout<<"Unesi dimenzije"<<endl;
    double k,l,n;
    cin>>k;
    cin>>l;
    cin>>n;
    rad.Postavi(k,l,n);
    rad.ZapreminaKvadra();
    rad.PovrsinaKvadra();
    rad.GlavnaDijagonalaKvadra();
    rad.SferaKvadra();
    rad.BoolKocka();
    return 0;
}
