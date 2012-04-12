// databaser.h : main header file for the DATABASER application
//

#if !defined(AFX_DATABASER_H__12554D08_E7DE_49D2_AC9E_77246BAB8B31__INCLUDED_)
#define AFX_DATABASER_H__12554D08_E7DE_49D2_AC9E_77246BAB8B31__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include "database.h"

extern DBmetadata * m_my_DBmetadata;

/////////////////////////////////////////////////////////////////////////////
// CDatabaserApp:
// See databaser.cpp for the implementation of this class
//

class CDatabaserApp : public CWinApp
{
public:
	CDatabaserApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaserApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDatabaserApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATABASER_H__12554D08_E7DE_49D2_AC9E_77246BAB8B31__INCLUDED_)
