//write cpp programm  that will implement a class named cylinder with three data members radius and height and two memeber function to determine and output the surface area anf volume
#include<iostream>
#include<math.h>
using namespace std;

class Cylinder{
	public:
		double pi;
		double radius;
		double height;
		
		
		
		double surfaceArea(){
			return 2*pi*radius*radius+2*pi*radius*height;
		}
		double Volume(){
			return pi*radius*radius*height;
		}
};

int nain(){
	Cylinder cylinder ;
	
	double Area;
	double Volume;
	
	cylinder.pi= 3.142;
	cylinder.radius = 7;
	cylinder.height = 21;	
	
	Area=cylinder.surfaceArea();
	
	Volume= cylinder.Volume();

cout<<"the surface area is "<<Area<<endl;
cout<<"the volume is "<<Volume<<endl;



};