#ifndef PRANKPLUGIN_H
#define PRANKPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class PrankPlugin : public Plugin
{
public: 
 std::string toString() {return "Prank";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
