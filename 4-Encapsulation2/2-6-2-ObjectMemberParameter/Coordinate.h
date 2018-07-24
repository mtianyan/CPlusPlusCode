class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
public:
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
private:
	int m_iX;
	int m_iY;
};