class Coordinate
{
	friend Coordinate &operator-(Coordinate &c);

public:
	Coordinate(int x, int y);
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};