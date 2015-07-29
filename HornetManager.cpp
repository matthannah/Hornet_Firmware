#include "HornetManager.h"
#include "Coms.h"
#include "ComsEncoder.h"
#include "AccGyro.h"

HornetManager::HornetManager()
{
}

//-------------------------------------------------------------------------------------------------------------------------------------

void HornetManager::attachComs(Coms* theComs)
{
	_coms = theComs;
}

void HornetManager::attachComsEncoder(ComsEncoder* theComsEncoder)
{
	_comsEncoder = theComsEncoder;
}

void HornetManager::attachAccGyro(AccGyro* theAccGyro)
{
	_accGyro = theAccGyro;
}

//-------------------------------------------------------------------------------------------------------------------------------------

void HornetManager::run()
{
	_coms->run();
	_comsEncoder->run();
	_accGyro->run();
}
