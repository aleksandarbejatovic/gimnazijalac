#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin>>input;
    string funkcija;
    size_t broj1 = input.find("(");
    size_t broj2 = input.find(")");
    string broj = input.erase(broj2,input.length());
    broj = broj.erase(0,broj1+1);
    funkcija = input.substr(0,3);
    cout<<broj;

}
