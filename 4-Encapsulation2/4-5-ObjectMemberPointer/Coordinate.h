class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
public:
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};