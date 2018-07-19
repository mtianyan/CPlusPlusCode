class  Array
{
public:
	Array(int count);
	Array(const Array& arr);
	~Array();

	int getCount();
	void setCount(int val);
	void printAddr();
	void printArr();
private:
	int m_iCount;
	int *m_pArr;
};