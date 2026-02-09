#include<iostream>
using namespace std;


class Room{
	public:
		double:length;
		double:breadth;
		double:height;
		
		double CalculateArea(){
			return length*breadth;
			
		};
		double CalculateVolume(){
			return length*breadth*height;
		};
};