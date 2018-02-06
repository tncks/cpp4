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

	virtual void beep(); //�ڹٷ� ġ�� abstract �߻�ȭ�� ���� ������, �������̵�
	//�θ�Ŭ������ beep�� virtual�̱� ������ ȣ���ϸ� �������̵��� �ڽ�Ŭ������ beep�� ȣ��ȴ�.

	Car& operator=(const Car&);
	friend std::ostream& operator<<(std::ostream&, const Car&);

	template <class T> friend class Engineer;
};

#endif