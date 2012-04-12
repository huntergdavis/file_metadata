#if !defined(AFX_DBMETADATA_H__230F8D4D_A7BF_430D_9B30_7FADC59E9D22__INCLUDED_)
#define AFX_DBMETADATA_H__230F8D4D_A7BF_430D_9B30_7FADC59E9D22__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DBmetadata.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DBmetadata DAO recordset

class DBmetadata : public CDaoRecordset
{
public:
	DBmetadata(CDaoDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(DBmetadata)

// Field/Param Data
	//{{AFX_FIELD(DBmetadata, CDaoRecordset)
	CString	m_FileName;
	CString	m_MetaData;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DBmetadata)
	public:
	virtual CString GetDefaultDBName();		// Default database name
	virtual CString GetDefaultSQL();		// Default SQL for Recordset
	virtual void DoFieldExchange(CDaoFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DBMETADATA_H__230F8D4D_A7BF_430D_9B30_7FADC59E9D22__INCLUDED_)
