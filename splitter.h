#ifndef SPLITTER_H
#define SPLITTER_H


#include "hashtable.h"

void splitter(int splitterIndex, int numOfSplitters, int numOfBuilders, char *inputFile, int inputFileLines, int splitterToBuilder[numOfSplitters][numOfBuilders][2]);

void trim_newline(char *str);
void clean_text(char *str);
#endif