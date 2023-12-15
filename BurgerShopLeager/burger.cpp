#include <iostream>
using namespace std;
class Sburger {
private:
	int burger{};
	int cabab{};
public:
	void init(int &b, int &c);
	void sale_made();
	void status_display();
};
void Sburger::init(int &b,int &c) {
	while (true) {
		cout << "Enter the burger: ";
		cin >> burger;
		cout << "Enter the number of cabab: ";
		cin >> cabab;
		if (burger > b || cabab > c) {
			cout << "You have: " << b << " burgers and: " << c << " in your stock.\n";
		}
		else {
			b -= burger;
			c -= cabab;
			break;
		}
	}
}
void Sburger::sale_made() {
	--burger;
	--cabab;
}
void Sburger::status_display() {
	cout << "\t" << burger << " :burger left and: " << cabab << " are left" << endl;
}
int main() {
	Sburger s1, s2, s3, s4;
	int b{}, c{};
	cout << "How Many burgers and cabab You have today:-\n";
	cout << "\tEnter number of bugers: ";
	cin >> b;
	cout << "\tEnter number of cababs: ";
	cin >> c;
	int ch1{};
	do {
		cout << "****Menu****\n"
			<< "1: For assigning the burgers and cabab to each shop\n"
			<< "2: For a Sale is made by any four shop\n"
			<< "3: For displaying the how many burger and cabab are left to each shop\n"
			<< "4: For Exit.\n";
		cout << "Enter your choice: ";
		cin >> ch1;
		switch (ch1) {
		case 1:
			cout << "******************************\n";
			cout << "How many burger and cabab you want to assign to Shop1\n";
			s1.init(b , c);
			cout << "******************************\n";
			cout << "How many burger and cabab you want to assign to Shop2\n";
			s2.init(b,c);
			cout << "******************************\n";
			cout << "How many burger and cabab you want to assign to Shop3\n";
			s3.init(b,c);
			cout << "******************************\n";
			cout << "How many burger and cabab you want to assign to Shop4\n";
			s4.init(b,c);
			break;
		case 2: {
			int ch2{};
			cout << endl;
			cout << "1: if Shop1 made a sale\n"
				<< "2: if Shop2 made a sale\n"
				<< "2: if Shop3 made a sale\n"
				<< "2: if Shop4 made a sale\n" << endl;
			cout << "Enter the above choices For which shop made a sale: ";
			cin >> ch2;
			switch (ch2) {
			case 1:
				s1.sale_made();
				break;
			case 2:
				s2.sale_made();
				break;
			case 3:
				s2.sale_made();
				break;
			case 4:
				s2.sale_made();
				break;
			default:
				cout << "Please Enter the correct choice\n";
			}
			break;
		}
		case 3:
			cout << "Current Status of all the Shops\n\n";
			cout << "Shop1 Status:\n";
			s1.status_display();
			cout << "Shop2 Status:\n";
			s2.status_display();
			cout << "Shop3 Status:\n";
			s3.status_display();
			cout << "Shop4 Status:\n";
			s4.status_display();
			cout << "\nAnd You have: " << b << " burger and: " << c << " cabab in your stock.\n";
			break;
		case 4:
			cout << "Allah Hafiz.\n";
			return 0;
		default:
			cout << "Please Enter the correct choice, You enter the wrong choice\n";
			break;
		}
	} while (true);


}