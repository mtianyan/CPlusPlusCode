#include <string>
using namespace std;
#include "Person.h"

class Farmer : virtual public Person
{
public:
	Farmer(string name = "jack", string color = "blue");

	virtual ~Farmer();
	void sow();
protected:
	string m_strName;
};