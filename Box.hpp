#ifndef BOX_H
#define BOX_H
 
class Shape 
{
	public:
		void setWidth(int w);
		void setHeight(int h);
	protected:
		int width;
		int height;
};

class Rectangle: public Shape
{
	public:
		int getArea();
};
 
#endif