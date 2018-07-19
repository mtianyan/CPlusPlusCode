class  Array
{
public:
	Array();
	Array(const Array& arr);
	~Array();

	int getCount();
	void setCount(int val);
private:
	int m_iCount;
};