/************************************************************************************************
*	This file basically is generated by VC++ at the time project is created as an application	*
*	Functions:																					*
*	InitInstance() does initialization that are required in order to run this application		*
*	according to the features we have chosen. for instance to create a dialog box as the main   *
*	window and this is done in InitInstance() Function. Any other features such as supporting   *
*	the  creation of ATL objects in the PDC_Process_Dlg application, require the initia�ization	*
*	and loading of Microsoft ATL Library.														*
*************************************************************************************************/
// PDC_Process_Dlg.h : main header file for the PROJECT_NAME application
//


#pragma once    //Automatic: generated by VC++, for compiler macros, which means that this code includes the "#include" files only once in this

// begining of header file always needed since if you want AFXWIN_H, the code needs the stdafx.h,
// i.e. the #include<stdafx.h> must be included here or in any of the files that are included here.
// AFXWIN_H is the Microsoft Foudnation Class (MFC) Library header file, has many MS classes to
// MFC applications, like PDC_Process_Dlg application, which appears on the top of the VC++ window

#ifndef __AFXWIN_H__  
	#error "include 'stdafx.h' before including this file for PCH"
#endif



#include "resource.h"		// main symbols
#include "Module1_i.c"		//Module1_i.c contains GUIDs and IIDs (unique global numbers to name an object) of the interfaces in the Module1 module
#include "DecodInf_i.c"		//DecodInf_i.c contains GUIDs and IIDs (unique global numbers to name and object) of the interfaces in the DecodInf module

// CPDC_Process_DlgApp:
// See PDC_Process_Dlg.cpp for the implementation of this class
//

// The CPDC_Process_AldApp is automatically generated, and it is derived from the CWinApp, which has functionality of 
// MFC Windows Application. Tt is part of a series of calsses that implement MFC Applications architetures.
class CPDC_Process_DlgApp : public CWinApp
{
public:
	CPDC_Process_DlgApp(); //constructor

// Overrides
public:
	virtual BOOL InitInstance();	//virtual means this function is overridable for customization of the MFC Application
									// implementation

	DECLARE_MESSAGE_MAP()//this is a MACRO (a function Macro) that introduces the message handling of the MFC applcations.
};

extern CPDC_Process_DlgApp theApp;	//theApp is a class that can be her and defined in another place outside of 
									// the Application class.