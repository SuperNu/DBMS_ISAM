/*
 * Scan Management Level lib.
 *
 */
 
#include "HF_Defines.h"

/* struct to keep informations */
/* about files' Scans      */
typedef struct Scan_Info{
	int 	fileDesc;
	int 	recordSize;
	char	attrType;
	int	attrLength;
	int 	attrOffset;
	int 	op;
	char    *value;
	int	lastRecId;
	int 	empty;
}Scan_Info;
Scan_Info scan_info[MAXSCANS];


void SMM_Init();
int SMM_OpenFileScan(int, int, char, int, int, int, char*);
int SMM_FindNextRec(int scanDesc, char*);
int SMM_CloseFileScan(int);
BOOLEAN SMM_hasOpenScans(int);
