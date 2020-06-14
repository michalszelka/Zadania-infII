#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

void poteguj() {

    int a,b;
    cout << "Podaj A:";
    cin >> a;
    cout << "Podaj B:";
    cin >> b;
    cout << pow(a,b) << endl;

}

void hello () {

    string imie;
    cout << "Jak masz na imie, ksiaze?  ";
    cin >> imie;
    cout << "Witaj " << imie << endl;
}

unsigned silnia (unsigned n) {

    if (n == 0)
        return 1;
    else
        return n * silnia(n - 1);

}

int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

void tablica() {

    int n;

    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    int tab[n];

    for (int i=0; i < n; i++) {
    tab[i] = (rand() % 5) + 1;

    }
    cout << "Przed sortowaniem: " << endl;
    for (int i=0; i < n; i++){
    cout << tab[i] << "\t";
    }
    qsort(tab,n,sizeof(int),compare);

    cout << endl << "Po sortowaniu: " << endl;
    for (int i=0; i < n; i++){
    cout << tab[i] << "\t";
    }

}


int main(){
    int wybor;

    do {

        cout << endl << "1. Poteguj" << endl << "2. Przywitaj" << endl << "3. Silnia" << endl << "4. Sortuj" << endl << "5. Zakoncz" << endl;
        cin >> wybor; if(cin){{
            switch(wybor) {

                case 1: {
                    poteguj();
                    break;}

                case 2: {
                    hello(); // wykrzacza sie przy podaniu imienia ze spacja
                    break;}

                case 3: {
                    int n;
                    cout << "Podaj liczbe do silni: " << endl;
                    cin >> n;
                    cout << silnia(n) << endl;
                break;}

                case 4: {
                    tablica();
                    break;}
                default: {
                    break;
                }
            }
        }}
        else {cout << "!!! ERRRORRRRR !!!! Podaj liczbe nie literke"; break;}
        }
    while (wybor !=5);

    return 0;
}


