#include <string>
#include "Farmer.h"
#include "Worker.h"
using namespace std;

class  MigrantWorker :public Worker, public Farmer//此处顺序决定实例化顺序。
{
public:
	MigrantWorker(string name, string code);
	~MigrantWorker();
private:
};