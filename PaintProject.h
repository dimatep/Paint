//Assigned by:
//Student_Full_Name: Dima_Tepliakov,    #ID: 314245564, #Group:61307-3, #Lecturer: Dr. Ben-Av Radal
//Student_Full_Name: Aleksey_Smolyarov, #ID: 304742943, #Group:61307-3, #Lecturer: Dr. Ben-Av Radal
// PaintProject.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CPaintProjectApp:
// See PaintProject.cpp for the implementation of this class
//

class CPaintProjectApp : public CWinApp
{
public:
	CPaintProjectApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CPaintProjectApp theApp;
