#ifndef ANIMACIJA_H_INCLUDED
#define ANIMACIJA_H_INCLUDED

#include "graflib.h"

void animirajPravougaonik(int ax, int ay, int bx, int by, COLORREF boja, int krajnjaTacka, int brzina)
{
    for(int i = 0; i<krajnjaTacka; i++)
    {
        Pravougaonik(ax+i, ay, bx+i, by, boja);
        Pravougaonik(ax+i-1, ay-1, bx+i-1, by+1, RGB(0,0,0));
        Sleep(brzina);
    }
}
void progressBar(int ax, int ay, int bx, int by, COLORREF boja, int krajnjaTacka, int brzina)
{
    for(int i = 0; i<krajnjaTacka; i++)
    {
        ispunjeniPravougaonik(ax+i, ay, bx+i, by, boja);
        ispunjeniPravougaonik(ax-ax, ay-1, bx-bx, by+1, RGB(0,0,0));
        Sleep(brzina);
    }
}
void animirajispunjeniPravougaonik(int ax, int ay, int bx, int by, COLORREF boja, int krajnjaTacka, int brzina)
{
    for(int i = 0; i<krajnjaTacka; i++)
    {
        ispunjeniPravougaonik(ax+i, ay, bx+i, by, boja);
        ispunjeniPravougaonik(ax-ax, ay-1, bx-bx, by+1, RGB(0,0,0));
        Sleep(brzina);
    }
}

#endif // ANIMACIJA_H_INCLUDED
