#include <iostream> 
#include <string> 

using namespace std;

class Car
{
private:
	string model;
	int engine_size;
	string color;
	int speed;
public:
	Car()
	{
		model = "vaz";
		engine_size = 1600;
		color = "red";
		speed = 60;
	}
	Car(string model, int engine_size, string color, int speed)
	{
		this->model = model;
		this->engine_size = engine_size;
		this->color = color;
		this->speed = speed;
	}
	void acc(int speed_plus)
	{
		speed += speed_plus;
	}
	void braking(int speed_min)
	{
		speed -= speed_min;
	}
	void Print()
	{
		cout << "Car model : " << model << "\n Engine power : " << engine_size << "\n Car color : " << color << "\n Car speed : " << speed << endl<< endl;
	}
	~Car()
	{
		cout << "destructor completed";
	}

};

int main()
{
	int new_avto = 1;
	string x;
	int i = 0;
	string model;
	int engine_size;
	string color;
	int speed;
	int speed_plus, speed_min;
	cout << "Enter car model: " << endl;
	getline(cin, model);
	cout << "Enter the volume of the car engine: " << endl;
	cin >> engine_size;
	cout << "Enter car color : " << endl;
	cin >> color;
	cout << "Enter car speed: " << endl;
	cin >> speed;
	Car avto(model, engine_size, color, speed);
	avto.Print();
	cout << "Enter car acceleration : ";
	cin >> speed_plus;
	avto.acc(speed_plus);
	avto.Print();
	cout << "/n Enter car braking : ";
	cin >> speed_min;
	avto.braking(speed_min);
	avto.Print();
	return 0;
}