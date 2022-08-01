//#include "stdafx.h"//vc++ 6.0? Maybe should add this line.

#include <stdlib.h>

#include <string>

#include <iostream>

#include "time.h"

using namespace std;

int main(int argc,char *argv[]){

string ple[44]={"A1","A2","A3","A4","A5","A6","A7","A8","A9","A10",

"A11","A12","A13","A14","A15","A16","A17","A18","A19","A20",

"A21","A22","B1","B2","B3","B4","B5","B6","B7","B8",

"B9","B10","B11","B12","B13","B14","B15","B16","B17","B18",

"B19","B20","B21","B22"};

int f[44],i,k,t;

for(i=0;i<44;f[i]=i++);

cout << "Lucky dog this time:\n";

srand((unsigned)time(NULL));

for(i=0;i<1;i++){

cout << ple[f[k=rand()%(43-i)]] << (i<0 ? ' ' : '\n');



}

return 0;

}