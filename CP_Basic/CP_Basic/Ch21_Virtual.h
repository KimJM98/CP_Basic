#pragma once
class Parent
{
public:
	void PrintClass();

};

class Child:public Parent
{
public:
	void PrintClass();//<=재정의 (오버라이딩)
};

class VParent
{
public:
	virtual void PrintClass();
};

class VChild:public VParent
{
public:
	virtual void PrintClass();//<=재정의 (오버라이딩)
};