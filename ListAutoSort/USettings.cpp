#include "usettings.h"

USettings::USettings(QString filePath) : Settings(filePath)
{
	init();
}

void USettings::init()
{
	is_debug = true;

	loadFromFile();
}

void USettings::loadFromFile()
{
	

}


