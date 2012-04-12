#if !defined(AFX_ADDFILE_H__C2A427FF_8AC0_445D_8292_512EFAFD19E3__INCLUDED_)
#define AFX_ADDFILE_H__C2A427FF_8AC0_445D_8292_512EFAFD19E3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// addfile.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// addfile dialog

class addfile : public CDialog
{
// Construction
public:
	addfile(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(addfile)
	enum { IDD = IDD_ADD_FILE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(addfile)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(addfile)
	afx_msg void OnBrowse();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDFILE_H__C2A427FF_8AC0_445D_8292_512EFAFD19E3__INCLUDED_)
