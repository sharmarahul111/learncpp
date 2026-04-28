#include<iostream>
using namespace std;

class Player {
	private:
		char name[20];
		char address[20];
		char club[20];
		int balls_scored;
		int jersey_no;
	public:
		void input();
		void output();
		
};

void Player::input(){
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter address: ";
	cin >> address;
	cout << "Enter club: ";
	cin >> club;
	cout << "Enter balls scored: ";
	cin >> balls_scored;
	cout << "Enter jersey number: ";
	cin >> jersey_no;
}

void Player::output(){
	cout << "Name = " << name << endl
	<< "Address = " << address << endl
	<< "Club = " << club << endl
	<< "Balls Scored = " << balls_scored << endl
	<< "Jersey Number = " << jersey_no << endl;
}

int main(){
	Player p;
	p.input();
	p.output();
}