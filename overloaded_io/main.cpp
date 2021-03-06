#include <iostream>
#include <fstream>
using namespace std;
class CPoint {
public:
	CPoint(double p_x=0, double p_y=0) {x=p_x;  y=p_y;};
	friend ostream& operator << (ostream&, const CPoint&);
	friend istream& operator >> (istream&, CPoint&);
private:
	double x,y;
};
ostream& operator <<( ostream& os, const CPoint& point )
{ 
	os << "<" << point.x << "," << point.y << ">";
	return os;
}
istream& operator >>(istream& is, CPoint& point)
{
	char ch;
	is >> ch;
	if ( ch!='<'){
		is.setstate( ios_base::failbit );
		return is;
	}
	is >> point.x >> ch >> point.y >> ch;
}

int main()
{
	CPoint p;

	while ( cin>> p )
		cout << p << endl;
}
