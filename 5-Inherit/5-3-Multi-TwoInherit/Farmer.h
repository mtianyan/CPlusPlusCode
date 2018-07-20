#include <string>
using namespace std;

class Farmer
{
public:
	Farmer(string name = "jack");
	virtual ~Farmer();
	void sow();
protected:
	string m_strName;
};