
#include <iostream>
using namespace std;
int health = 5, level = 0, level_1;
int damage() {
	if (level > level_1 + 5) {
		health = 5;
		cout << "Your character cannot jump that high. You missed the jump and ended up on a different level. You came back. " << endl;
		cout << "You have left: " << health << "lives." << endl;
		level = level_1;
	}


	else if (level > level - 5) {
		health = 5;
		cout << "You fell into a rather deep hole. Left: " << health << "lives." << endl;
		level = level_1;
	}
	else (health == 0);
	return health;
}
 void up() {
	cout << "Your character jumps up." << endl;
	 health = damage();
	level = level_1;
}

void constancy() {
	cout << "Your character walks and does not jump." << endl;
	level = level_1;
}

void down() {
	cout << "Your character jumps down." << endl;
	health = damage();
	level = level_1;
}

int main() {
	cout << "Your game has started. Press only numbers to make your character start the action." << endl;
	while (level < 40)
	cin >> level_1;
	{
		if (level_1 > level) {
			up();
	}
		else if (level_1 == level) {
			constancy();
		}
		else {
			down();
		}



	}
}