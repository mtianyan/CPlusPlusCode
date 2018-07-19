class  Array
{
public:
	Array(int len);
	~Array();

	void printAddr();
	void printArr();
	int getLen();
	Array& setLen(int val);
	Array& printInfo();
private:
	int len;
};