// databaserDlg.h : header file
//

#if !defined(AFX_DATABASERDLG_H__27BBD95D_861F_4914_9D95_8F2A53F5EBB7__INCLUDED_)
#define AFX_DATABASERDLG_H__27BBD95D_861F_4914_9D95_8F2A53F5EBB7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CDatabaserDlg dialog

class CDatabaserDlg : public CDialog
{
// Construction
public:
	CDatabaserDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CDatabaserDlg)
	enum { IDD = IDD_DATABASER_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDatabaserDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CDatabaserDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnAddfiletodb();
	afx_msg void OnSearch();
	afx_msg void OnHelper();
	afx_msg void OnClose();
	afx_msg void OnLaunch();
	afx_msg void OnDeleteit();
	afx_msg void OnDblclkResults2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATABASERDLG_H__27BBD95D_861F_4914_9D95_8F2A53F5EBB7__INCLUDED_)
