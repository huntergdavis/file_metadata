// addfile.cpp : implementation file
//

#include "stdafx.h"
#include "databaser.h"
#include "addfile.h"
#include "database.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// addfile dialog


addfile::addfile(CWnd* pParent /*=NULL*/)
	: CDialog(addfile::IDD, pParent)
{
	//{{AFX_DATA_INIT(addfile)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void addfile::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(addfile)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(addfile, CDialog)
	//{{AFX_MSG_MAP(addfile)
	ON_BN_CLICKED(IDC_BROWSE, OnBrowse)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// addfile message handlers

void addfile::OnBrowse() 
{
		// luanch the file selection dialog so that the user can show us which database to extract from
	CFileDialog *fdlg = (CFileDialog *) new CFileDialog(TRUE,_T("*"),NULL,OFN_OVERWRITEPROMPT,_T("Product Thumbnail (*.*)|*.*"), NULL);

	if(fdlg->DoModal() == IDOK)
	{
		CString cFileName = fdlg->GetPathName();
		CEdit * pEdit;
		pEdit = (CEdit*)GetDlgItem(IDC_FILENAME);
		pEdit->SetWindowText(cFileName);
	}
	
}

void addfile::OnOK() 
{

	CEdit *pEdit, *pEdit2;
	pEdit = (CEdit*)GetDlgItem(IDC_FILENAME);
	pEdit2 = (CEdit*)GetDlgItem(IDC_METADATA);
	CString cbuffer = "",cbuffer2 = "";

	pEdit->GetWindowText(cbuffer);
	cbuffer.Replace("'","*");
	pEdit2->GetWindowText(cbuffer2);

	CString cFilter;
	cFilter.Format("[MetaData].[FileName] = '%s'",cbuffer);
	if(m_my_DBmetadata->FindFirst(cFilter))
	{	
		m_my_DBmetadata->Edit();
		m_my_DBmetadata->m_MetaData = cbuffer2;
		m_my_DBmetadata->Update();
			
	}
	else
	{
		if(!m_my_DBmetadata->IsBOF() && m_my_DBmetadata->IsEOF())
			m_my_DBmetadata->MoveFirst();
		
		m_my_DBmetadata->AddNew();
		m_my_DBmetadata->m_FileName = cbuffer;
		m_my_DBmetadata->m_MetaData = cbuffer2;
		m_my_DBmetadata->Update();
	}

	CDialog::OnOK();
}
