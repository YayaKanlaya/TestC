class Shape 
{
	public:
		void setWidth(int w)
		{
			width = w;
		}
		void setHeight(int h)
		{
			height = h;
		}
	protected:
		int width;
		int height;
};

class Rectangle: public Shape
{
	public:
		int getArea()
		{ 
			return (width * height); 
		}
};