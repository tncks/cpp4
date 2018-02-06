#pragma once

#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car {
protected:
	int wheels;
	int price;
public:
	Car();
	Car(int, int);
	~Car();

	void setWheels(int);
	void setPrice(int);
	int getWheels();
	int getPrice();

	virtual void beep(); //자바로 치면 abstract 추상화를 통한 다형성, 오버라이딩
	//부모클래스의 beep은 virtual이기 때문에 호출하면 오버라이딩된 자식클래스의 beep이 호출된다.

	Car& operator=(const Car&);
	friend std::ostream& operator<<(std::ostream&, const Car&);

	template <class T> friend class Engineer;
};

#endif