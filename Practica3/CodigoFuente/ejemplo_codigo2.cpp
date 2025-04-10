#include <iostream>
class Laboratorio
{
	int num;
};

class Practica
{
	int a; 
	Laboratorio lab;

	public:
	operator Laboratorio () { return lab; }
	operator int () { return a;}

};
void funcion (int a) {
	std::cout << "funcion (int) executada" << std::endl;
}
void funcion1 (Laboratorio la){
	std::cout << "funcion (Laboratorio) executada" << std::endl;
}
int main()
{
	Practica p;
	funcion(p);
	funcion1(p);
	return 0;
}
