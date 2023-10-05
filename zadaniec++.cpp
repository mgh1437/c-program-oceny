#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<double> mojeOceny;
    int n;
    double suma = 0.0;

    cout << "Podaj ilosc ocen do wpisania: ";
    cin >> n;


    for (int i = 0; i < n; ++i) {
        double ocena;
        cout << "Podaj ocene " << i + 1 << ": ";
        cin >> ocena;
        mojeOceny.push_back(ocena);
        suma += ocena;
    }
    cout << "Wprowadzone oceny: ";
    for (const auto &ocena : mojeOceny) {
        cout << ocena << " ";
    }
    double srednia = suma / mojeOceny.size();
    cout << "\nSrednia arytmetyczna ocen: " << srednia << endl;

    if (!mojeOceny.empty()) {
        double minOcena = mojeOceny[0];
        int indeks = 0;
        for (int i = 1; i < mojeOceny.size(); ++i) {
            if (mojeOceny[i] < minOcena) {
                minOcena = mojeOceny[i];
                indeks = i;
            }
        }
        mojeOceny.erase(mojeOceny.begin() + indeks);
    }

    double nowaOcena;
    cout << "Podaj poprawion¹ ocene: ";
    cin >> nowaOcena;
    mojeOceny.push_back(nowaOcena);


    suma = 0.0;
    for (const auto &ocena : mojeOceny) {
        suma += ocena;
    }
    srednia = suma / mojeOceny.size();
    cout << "Srednia arytmetyczna ocen po dodaniu poprawionej oceny: " << srednia << endl;

    cout << "Liczba ocen: " << mojeOceny.size() << endl;

    return 0;
}
