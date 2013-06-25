/*
 * File: RMM_Lib.h
 *
 *
 */
int RMM_InsertRec( int ,char* ,int);
int RMM_DeleteRec( int ,int ,int);
int RMM_GetFirstRec(int ,char* ,int);
int RMM_GetNextRec(int ,int ,char* ,int);
int RMM_GetThisRec(int ,int ,char* ,int);

int HF_errno;
