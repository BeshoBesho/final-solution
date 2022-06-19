#include"Action.h"
class time
{
public:
	time();
	void Record(Action*);
	void UNDO();
	void REDO();

private:
	Action* timeline;
};

time::time()
{
}

time::~time()
{
}