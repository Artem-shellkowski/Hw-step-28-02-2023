#include <iostream>
using namespace std;

class Vino {
private:
	string color;
	double weight;
public:
	Vino() {
		color = "";
		weight = 0.0;
	}
	Vino(string fcolor, double fweight) {
		color = fcolor;
		weight = fweight;
	}
	string getVariety() { return color; }
	void setVariety(string fcolor) { color = fcolor; }
	double getWeight() { return weight; }
	void setWeight(double fweight) { weight = fweight; }
	void print() {
		cout << color << " " << weight << " литр " << endl;
	}

};

int main() {

	setlocale(LC_ALL, "Russian");

	Vino a1;
	a1.setVariety("red");
	a1.setWeight(0.9);
	Vino a2("white", 1.5);
	a1.print();
	a2.print();
}