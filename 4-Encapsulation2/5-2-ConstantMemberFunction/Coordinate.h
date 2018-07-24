class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
public:
	int getX() const;//此处声明该成员函数为常成员函数
	void setX(int x);
	int getY() const;//同上
	void setY(int y);
private:
	int m_iX;
	int m_iY;
};