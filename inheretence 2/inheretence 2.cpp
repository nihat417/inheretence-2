#include<iostream>
#include<stack>
#include<string>

using namespace std;

#include"characts.h"
#include"engine.h"
#include"cars.h"
#include"planes.h"
#include"ship.h"



int main() {

	stack<Car>cars;
	charactersvehcl cn(1, "bmw", "germany");
	Engine eng(2, "2jz", 2.3f);
	Car car(cn, eng, true);
	Car car(cn, eng, true);
	
	cars.push(car);
	car.show();

	//charactersvehcl cn1(1, "bmw", "germany");
	//Engine eng1(2, "2jz", 2.3f);
	//Car car2(cn1, eng1, true);
	//
	//cars.push(car2);
	//car2.show();

	//stack<plane>planes;
	//charactersvehcl cn2(4, "lls", "canada");
	//Engine eng2(3, "4v", 3.5f);
	//plane pl(cn2, eng2, 22);
	//planes.push(pl);
	//pl.show();
	//
	//
	//stack<ship>ships;
	//charactersvehcl cn(2, "llsls", "canada");
	//Engine eng(6, "2ww3jz", 4.5f);
	//ship sh(cn, eng, false);
	//
	//ships.push(sh);
	//sh.show();
}