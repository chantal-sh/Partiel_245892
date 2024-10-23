// matricule : 452222

#include <iostream>
#include <vector>

using namespace std;

void saisir(vector<int>& v, int n) {
	for (int i = 0; i < n; i++) {
		int a;
		cout << "Saisir element " << i + 1 << ":";
		cin >> v[i];
		
	}
}

void afficher(vector<int>& v) {
	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int find(const vector<int>& v, int elt, int occ = 1) {
	if (occ != -1) {
		for (size_t i = 0; i < v.size(); i++) {
			if (v[i] == elt) {
				return i;
			}
		}
		return -1; 
	}
	else {
		for (int i = v.size()-1; i >= 0; i--) {
			if (v[i] == elt) {
				return i;
			}
		}
		return -1;
	}

}
	

int main() {
	int n;
	cout << "Saisir le nb d'elements " ;
	cin >> n;
//	vector<int> v(n);
//	saisir(v, n);
	vector<int> v{ 2,5,6,5,10 };
	afficher(v);
	cout << "Derniere occurence de 5 est à l'indice " << find(v, 5, -1) << endl;

	return 0;
}