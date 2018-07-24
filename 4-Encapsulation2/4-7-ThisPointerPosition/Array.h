class  Array
{
public:
	Array(int len);
	~Array();

	void printAddr();
	void printArr();
	int getLen();
	void setLen(int val);
	void printInfo();
private:
	int len;
};