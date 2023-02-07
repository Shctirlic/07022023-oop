#include <iostream>
#include <memory>


//����� ��������� auto ptr, weak ptr, shared ptr
class A {
public:
	A() {
	std::cout << "Constuctor A" << std:: endl;
		}
	~A() {
		std::cout << "Destructor A" << std:: endl;	
		}
};

class Point {
public:
	Point(int x, int y) : _x(x), _y(y) {
		std::cout << "Point constructor" << std::endl;

	}
	int getX() const {

		return _x;

	}
	~Point() {
		std::cout << "Point destructor" << std::endl;
	}

private:
	int _x;
	int _y;
};

template <class T>
class Smart_ptr {
	T* _ptr;
public:
	Smart_ptr(T* t) : _ptr(t) {}
	T* operator->() {
		return _ptr;

	}
	~Smart_ptr() {
		delete _ptr;

	}
};
// unique_ptr ����� ��� � ����� ���������������� ��� ����� ���������� � ��������� ������� �� ������
void basicFunc(const std::unique_ptr<Point>& p) {

	std::cout << p->getX() << std::endl;
}


//dinamic_cast

class Ivehicle {
public:
	virtual int  getSpeed() const = 0;
	virtual const std::string & getType() const = 0;
	virtual ~Ivehicle() {}
};

class Car : public Ivehicle {
	Car(int speed) : _speed(speed) {
	}
		int getSpeed() const override {
			return _speed;
		}

		const std::string& getType() const override {
			return _type;
		}
private:
	int _speed;
	std::string _type = "Car";
};

	class Van : public Car {
	public:
		Van(int speed) : Car (speed) {
			const std::string& getType() const override {
				return _type;
	private:
		std::string_type = "Van";
			}
		}

		void func(std:: shared_ptr<Car> carPtr) {
			std::cout << "Inside funcCar" << std::endl;
			std::cout << carPtr->getSpeed ()<< std::endl;
			std::cout << carPtr->getSpeed << std::endl;



	class Parent {};
	class Child : public Parent {};


	std::shared_ptr<Parent> SomeMethod() {
		Child b;
	std: share_ptr<Parent> a = std::make_shared<Parent>(b);
		return a;

	}
}



int main() {

	//std::auto_ptr<A> p(new A()); - �� ������������ � 2017 ����
	//share_ptr - ����� ����������� ���� , � ������� ����� ������� ����������
	// 
	//unique_ptr - �����������, ��� ������ ���� ��������� ����� ������� ����� ��������

	/*std::unique_ptr<A> uptr(new A());

	std::unique_ptr <Point> pPoint(new Point(5, 4 ));
	std::cout << pPoint->getX () << std::endl;

	Point* p = new Point(5, 4);


	class Smart_ptr<Point> sm(new Point(5, 4));
	std::cout << sm->getX() << std::endl; //���������� ��������, ���� ���������� ���������, �� � ���� ������, �� ��������� ����� ���������� ���������� ��������
	                                      //���������� �� ��� ��� ���� �� �������� ������

	std::unique_ptr<Point> p5 = std::make_unique<Point>(5, 4); // ���������� �������� ������ ���������

		std::shared_ptr<Point> sp1 = std::make_shared<Point>(1, 2);
		std::shared_ptr<Point> sp2 = sp1;*/

	std::shared_ptr<Van> v = std::make_shared<Van>(30);

	
	std::cout << carPtr->getSpeed() << std::endl;
	std::cout << carPtr->getType() << std::endl;
	std::cout << "==============================" << std::endl;
	















}