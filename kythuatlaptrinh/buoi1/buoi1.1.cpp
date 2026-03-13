#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;
struct Connguoi {
	int maso;
	string hoten;
	int tuoi;
	string diachi;
};
void Viewpersonlist(vector<Connguoi>p) {
	if (p.size() == 0)
		cout << "An empty list" << endl;
	else {
		for (int i = 0;i < p.size();i++) {
			cout << "Person:" << (i + 1) << endl;
			cout << "\t+ Id:" << p[i].maso << endl;
			cout << "\t+ Hoten:" << p[i].hoten << endl;
			cout << "\t+ Tuoi:" << p[i].tuoi << endl;
			cout << "\t+Dia chi:" << p[i].diachi << endl;

		}
	}
}
void Addperson(vector<Connguoi>p) {
	Connguoi a;
	cout << "+Id:";
	cin >> a.maso;
	cout << "Name:";
	cin.ignore();
	getline(cin, a.hoten);
	cout << "+Age:";
	cin >> a.tuoi;
	cout << "+Address:";
	cin.ignore();
	getline(cin, a.diachi);
	p.push_back(a);
	cout << "Add a person successfully" << endl;
	return;
}
void Removeperson(vector<Connguoi>& p, int id) {
	for (auto i = p.begin();i != p.end();i++) {
		if (i->maso == id) {
			p.erase(i);
			cout << "Remove a person successfully" << endl;
			return;
		}
	}
	cout << "Not found person with id:" << id << endl;
}
int main() {
	vector<Connguoi> list;
	do {
		system("cls");
		cout << "------HUMAN RESOURCE------" << endl;
		cout << "1.View person list" << endl;
		cout << "2. Add a person" << endl;
		cout << "3. Remove a person" << endl;
		cout << "4. Find a person by name" << endl;
		cout << "5. Export to file" << endl;
		cout << "6. Import from file" << endl;
		cout << "0. Exit" << endl;
		cout << "---------------------------" << endl;
		cout << " Your command:  ";
		int cdm;
		cin >> cdm;
		switch (cdm){
		case 1: {
			Viewpersonlist(list);
			break;
		}
		case 2: {
			Addperson(list);
			break;
		}
		case 3: {
			int id;
			cout << "Input ID to remove: ";
			cin >> id;
			Removeperson(list, id);
				break;
		}
		case 4: {
			break;
		}
		case 5: {
			break;
		}
		case 6: {
			break;
		}
		case 0: {
			return 0;
		default:
			cout << " Khong co chuc nang nay!!" << endl;
		}
		}
		cout << "Go enter de tiep tuc...";
		cin.ignore();
		cin.get();
	} while (true);
	return 0;
}


