#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int n;

    cout << "Quanti atleti ci sono nella competizione? " << endl;
    cin >> n;
    string nomi[n];
    string nazioni[n];
    float tempi[n];
    int i;

    for (i = 0; i <= n - 1; i++) {
        cout << "Inserisci nome Atleta numero " << i + 1 << ":" << endl;
        cin >> nomi[i];
        cout << "Inserisci nazione dell' Atleta numero " << i + 1 << ":" << endl;
        cin >> nazioni[i];
        cout << "(Tempo Atleta numero " << i + 1 << " generato casualmente da 0 a 30 secondi)" << endl;
        tempi[i] = (float) (rand() % 3001) / 100;
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "Nome Atleta numero " << i + 1 << ": " << nomi[i] << "." << endl;
        cout << "Nazione dell' Atleta numero " << i + 1 << ": " << nazioni[i] << "." << endl;
        cout << "Tempo Atleta numero " << i + 1 << ": " << tempi[i] << " secondi." << endl;
    }
    int imin, min;

    imin = 0;
    for (i = 0; i <= n - 1; i++) {
        if (tempi[i] < tempi[imin]) {
            imin = i;
        }
    }
    cout << "Il tempo minimo è: " << tempi[imin] << " e appartiene all'atleta " << nomi[imin] << " della nazione " << nazioni[imin] << "." << endl;
    return 0;
}