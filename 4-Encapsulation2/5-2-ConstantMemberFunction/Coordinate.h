class Coordinate
{
public:
	Coordinate(int x, int y);
	~Coordinate();
public:
	int getX() const;//�˴������ó�Ա����Ϊ����Ա����
	void setX(int x);
	int getY() const;//ͬ��
	void setY(int y);
private:
	int m_iX;
	int m_iY;
};