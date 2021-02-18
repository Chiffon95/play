#ifndef SETMINEMAP
#define SETMINEMAP

#define EASYAXIS 15
#define EASYMINENUM 50
#define NOLMALAXIS 20
#define NOLMALMINENUM 100
#define HARDAXIS 30
#define HARDMINENUM 150

void setMap();
void setEasyMap(int xAxis, int yAxis);
void setNormalMap(int xAxis, int yAxis);
void setHardMap(int xAxis, int yAxis);
void setCustomMap(int xAxis, int yAxis);

#endif