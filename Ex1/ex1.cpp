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
int main() {
	int n;
	cout << "Saisir le nb d'elements " ;
	cin >> n;
	vector<int> v(n);
	saisir(v, n);
	afficher(v);
	return 0;
}