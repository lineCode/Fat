
#ifndef FAPI
#define FAPI

#include <windows.h>


typedef enum
{
	FAPI_OK,
	FAPI_ERROR
} FAPI_RES;

// ��ʼ��
FAPI_RES Fapi_Init(int nIndex);
FAPI_RES Fapi_UnInit(int nIndex);

// �����ļ����ӱ��ص��Ե����̣�
FAPI_RES Fapi_CopyFile(TCHAR* pDes, TCHAR* pSrc);

// �����ļ��У��ӱ��ص���pSrc��������ݸ��Ƶ�����pDes�£�
FAPI_RES Fapi_CopyDir(TCHAR* pDes, TCHAR* pSrc);

#endif


