#pragma once

#include <iostream>
#include <3ds.h>
#include <vector>
#include "file.h"
#include "application.h"

using namespace std;

extern vector<Application_s> topApps;
extern vector<Application_s> topGames;
extern vector<Application_s> overviewApps;
extern vector<Application_s> staffSelectApps;

Result updateAppList(vector<Application_s> *AppList, char* json);