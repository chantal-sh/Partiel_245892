// matricule : 452222

#include <iostream>


using namespace std;


void afficher(const int tab[], int n) {
	for (size_t i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
}

int find(const int tab[], int n, int elt, int occ = 1) {
	if (occ != -1) {
		for (int i = 0; i < n; i++) {
			if (tab[i] == elt) {
				return i;
			}
		}
		return -1;
	}
	else {
		for (int i = n - 1; i >= 0; i--) {
			if (tab[i] == elt) {
				return i;
			}
		}
		return -1;
	}

}
void remove(int tab[], int& n, int elt) {
	int indice = find(tab, n, elt);
	for (int i = indice; i < n-1; i++) {
		tab[i] = tab[i + 1];
	}
	n--;
}

int main() {
	int n;
	cout << "Ex2" << endl;
	//cout << "Saisir le nb d'elements " ;
//	cin >> n;
//	vector<int> v(n);
//	saisir(v, n);
	n = 5;
	int tab[] { 2,5,6,5,10 };
	afficher(tab, n);
	cout << "Derniere occurence de 5 est à l'indice " << find(tab, n,5, -1) << endl;
	remove(tab, n, 6);
	cout << "Apres remove" << endl;
	afficher(tab, n);
	return 0;
}