#include <string>
#include "Farmer.h"
#include "Worker.h"
using namespace std;

class  MigrantWorker :public Worker, public Farmer//�˴�˳�����ʵ����˳��
{
public:
	MigrantWorker(string name, string code, string color);
	~MigrantWorker();
private:
};