
// FTech_FolderEx.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CFTech_FolderExApp:
// See FTech_FolderEx.cpp for the implementation of this class
//

class CFTech_FolderExApp : public CWinApp
{
public:
	CFTech_FolderExApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CFTech_FolderExApp theApp;