#pragma once

class ship :public charactersvehcl, public Engine {
private:
	charactersvehcl _characts;
	Engine _eng;
	bool _has_sail;
public:
	ship(charactersvehcl characts, Engine eng, bool  has_sail) {
		_characts = characts;
		_eng = eng;
		_has_sail =  has_sail;
	}

	void show() {
		_characts.print();
		_eng.print();
		cout << "have sail--" << _has_sail << '\n';
	}
};