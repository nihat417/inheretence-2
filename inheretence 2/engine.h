#pragma once

class Engine:public charactersvehcl {
private:
	int _engine_no;
	string _model_motor;
	float _volume;
public:
	Engine() = default;
	Engine(int engine_no, string model_motor, float volume){
		set_engine_no(engine_no);
		set_model_motor(model_motor);
		set_volume(volume);
	}

	void set_engine_no(int engine_no) {
		if (engine_no < 0)
			throw"wrong id!";
		else
			_engine_no = engine_no;
	}

	void set_model_motor(string model_motor) {
		if (model_motor.length() < 0)
			throw "wrong name model";
		else
			_model_motor = model_motor;
	}

	void set_volume(float volume) {
		if (volume < 0)
			throw"wrong volume";
		else
			_volume = volume;
	}

	int get_engine_no() { return _engine_no; }
	string get_model_motor() { return _model_motor; }
	float get_volume() { return _volume; }


	void print() {
		cout << "engine no--" << _engine_no << '\n';
		cout << "model motor--" << _model_motor << '\n';
		cout << "volume--" << _volume << '\n';
	}
};