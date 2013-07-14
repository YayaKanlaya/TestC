//#include "opencv2/core/core.hpp"
#include <iostream>
#include "Box.hpp"

using namespace std;
//using namespace cv;

int main(int,char**)
{

    cout << "M = " << " TestC " << endl;
	Rectangle r;
	r.setWidth(10);
	r.setHeight(5);
	cout << r.getArea();
	
	return 0;
}