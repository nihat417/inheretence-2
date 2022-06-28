#pragma once

class plane:public charactersvehcl,public Engine {
private:
	charactersvehcl _characts;
	Engine _eng;
	size_t _passanger_capacity;
public:
	plane(charactersvehcl characts, Engine eng, size_t passanger_capacity) {
		_characts = characts;
		_eng = eng;
		_passanger_capacity = passanger_capacity;
	}

	void show() {
		_characts.print();
		_eng.print();
		cout << "capacity passanger--" << _passanger_capacity << '\n';
	}
};