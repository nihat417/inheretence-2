#pragma once

class Car:public charactersvehcl,public Engine{
private:
	charactersvehcl _characts;
	Engine _eng;
	bool _has_spoiler;
public:
	Car(charactersvehcl characts, Engine eng, bool has_spoiler) {
		_characts = characts;
		_eng = eng;
		_has_spoiler = has_spoiler;
	}

	//Car(int id, string vendor, string model, int engine_no, string model_motor, float volume,bool has_spoiler)
	//:charactersvehcl(id,vendor,model),Engine(engine_no,model_motor,volume) {
	//	_has_spoiler = has_spoiler;
	//}
	void hasspiler() { cout << _has_spoiler; }

	void show() {
		_characts.print();
		_eng.print();
		cout <<"has spoiler--"<<_has_spoiler<<'\n';
	}
};