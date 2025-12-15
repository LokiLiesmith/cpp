#include <iostream>

class Rectangle {
	int width, height;
	
	public:
		Rectangle();
		Rectangle (int width, int height);
		// void set_values (int,int);
		int area() {return width*height;}
		int get_height(){return height;}
		int get_width(){return width;}
		void set_h(int new_height);
		void print_things();
};


void Rectangle::print_things(void)
{
	std::cout << "Height:	" << get_height() << std::endl;
	std::cout << "Width:	" << width << std::endl;
	std::cout << "Area:	" << area() << std::endl;
}

Rectangle::Rectangle()
{
	width = 5;
	height = 5;
}

Rectangle::Rectangle(int a, int b)
{
	width = a;
	height = b;
}

// void Rectangle::set_values (int x, int y) {
// 	width = x;
// 	height = y;
// }

// int Rectangle::get_height(void)
// {
// 	return (height);
// }

void Rectangle::set_h(int new_height)
{
	std::cout << "Setting new H: " << new_height << std::endl;
	height = new_height;
}

int main () {
	Rectangle rect;
	Rectangle rectb(3, 4);
	Rectangle rectc = {4, 4};
	Rectangle rectd {5, 6};
	// rect.set_values (3,4);
	// std::cout << "area: " << rect.area() << std::endl;
	// std::cout << "Height: " << rect.get_height() << std::endl;
	// rect.set_h(80);
	// std::cout << "Height: " << rect.get_height() << std::endl;
	std::cout << "1: rect" << std::endl;
	rect.print_things();
	std::cout << "2: rectb(3, 4)" << std::endl;
	rectb.print_things();
	std::cout << "3: rectc{4, 4}" << std::endl;
	rectc.print_things();
	std::cout << "4: rectd{5, 6}" << std::endl;
	rectd.print_things();
	return 0;
}
