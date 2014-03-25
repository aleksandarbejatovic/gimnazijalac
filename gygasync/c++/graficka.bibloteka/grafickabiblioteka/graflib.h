#ifndef GRAFLIB_H_INCLUDED
#define GRAFLIB_H_INCLUDED

#define _WIN32_WINNT 0x0500

#include "windows.h"
#include <cmath>
#include <cstdlib>

#define PI = 3.14159265359

using namespace std;

void Pravougaonik(int ax, int ay, int bx, int by, COLORREF boja)
{
    HWND konzola = GetConsoleWindow();
    HDC dc = GetDC(konzola);
    for(int i = ax; i<bx; i++)
    {
        SetPixel(dc, i, ay, boja);
        SetPixel(dc, i, by, boja);
    }
    for(int i = ay; i<by; i++)
    {
        SetPixel(dc, ax, i, boja);
        SetPixel(dc, bx, i, boja);
    }
    ReleaseDC(konzola, dc);
}

void ispunjeniPravougaonik(int ax, int ay, int bx, int by, COLORREF boja)
{
    HWND konzola = GetConsoleWindow();
    HDC dc = GetDC(konzola);
    for(int j = ax; j<bx; j++)
    {
        for(int i = ay; i<by; i++)
        {
            SetPixel(dc, j, i, boja);
        }
    }
    ReleaseDC(konzola, dc);
}


#endif // GRAFLIB_H_INCLUDED
