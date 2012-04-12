// DBmetadata.cpp : implementation file
//

#include "stdafx.h"
#include "databaser.h"
#include "DBmetadata.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DBmetadata

IMPLEMENT_DYNAMIC(DBmetadata, CDaoRecordset)

DBmetadata::DBmetadata(CDaoDatabase* pdb)
	: CDaoRecordset(pdb)
{
	//{{AFX_FIELD_INIT(DBmetadata)
	m_FileName = _T("");
	m_MetaData = _T("");
	m_nFields = 2;
	//}}AFX_FIELD_INIT
	m_nDefaultType = dbOpenDynaset;
}


CString DBmetadata::GetDefaultDBName()
{
	return _T("metadata.mdb");
}

CString DBmetadata::GetDefaultSQL()
{
	return _T("[MetaData]");
}

void DBmetadata::DoFieldExchange(CDaoFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(DBmetadata)
	pFX->SetFieldType(CDaoFieldExchange::outputColumn);
	DFX_Text(pFX, _T("[FileName]"), m_FileName);
	DFX_Text(pFX, _T("[MetaData]"), m_MetaData);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// DBmetadata diagnostics

#ifdef _DEBUG
void DBmetadata::AssertValid() const
{
	CDaoRecordset::AssertValid();
}

void DBmetadata::Dump(CDumpContext& dc) const
{
	CDaoRecordset::Dump(dc);
}
#endif //_DEBUG
