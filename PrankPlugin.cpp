#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "PrankPlugin.h"


void PrankPlugin::input(std::string file) 
{
 inputfile = file;
}

void PrankPlugin::run() {
   
}

void PrankPlugin::output(std::string file) {
	std::string command;
	command = "prank -d="+inputfile+" -o="+file;
 std::cout << command << std::endl;
 system(command.c_str());
}

PluginProxy<PrankPlugin> PrankPluginProxy = PluginProxy<PrankPlugin>("Prank", PluginManager::getInstance());
