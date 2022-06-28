#pragma once

class charactersvehcl {
private:
	int _id;
	string _vendor;
	string _model;

public:
	charactersvehcl() = default;
	charactersvehcl(int id, string vendor, string model) {
		set_id(id);
		set_vendor(vendor);
		set_model(model);
	}

	void set_id(int id) {
		if (id < 0)
			throw"wrong id!";
		else
			_id = id;
	}

	void set_vendor(string vendor) {
		if (vendor.length() < 0)
			throw "wrong name vendor";
		else
			_vendor = vendor;
	}

	void set_model(string model) {
		if (model.length() < 0)
			throw "wrong name model";
		else
			_model = model;
	}

	int get_id(){ return _id; };
	string get_vendor() { return _vendor; };
	string get_model() { return _model; };

	void print() {
		cout << "id--" << _id << '\n';
		cout << "vendor--" << _vendor << '\n';
		cout << "model--" << _model << '\n';
	}
};

