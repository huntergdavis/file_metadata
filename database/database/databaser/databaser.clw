; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDatabaserDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "databaser.h"

ClassCount=5
Class1=CDatabaserApp
Class2=CDatabaserDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_DATABASER_DIALOG
Resource2=IDR_MAINFRAME
Class4=DBmetadata
Resource3=IDD_ABOUTBOX
Class5=addfile
Resource4=IDD_ADD_FILE

[CLS:CDatabaserApp]
Type=0
HeaderFile=databaser.h
ImplementationFile=databaser.cpp
Filter=N

[CLS:CDatabaserDlg]
Type=0
HeaderFile=databaserDlg.h
ImplementationFile=databaserDlg.cpp
Filter=D
LastObject=IDC_RESULTS2
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=databaserDlg.h
ImplementationFile=databaserDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DATABASER_DIALOG]
Type=1
Class=CDatabaserDlg
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,static,1342308352
Control3=IDC_SEARCH_EDIT,edit,1350631552
Control4=IDC_SEARCH,button,1342242816
Control5=IDC_ADDFILETODB,button,1342242816
Control6=IDC_HELPER,button,1342242816
Control7=IDC_LAUNCH,button,1342242816
Control8=IDC_RESULTS2,listbox,1352728835
Control9=IDC_DELETEIT,button,1342242816

[CLS:DBmetadata]
Type=0
HeaderFile=DBmetadata.h
ImplementationFile=DBmetadata.cpp
BaseClass=CDaoRecordset
Filter=N
VirtualFilter=x
LastObject=DBmetadata

[DB:DBmetadata]
DB=1
DBType=DAO
ColumnCount=2
Column1=[FileName], -1, 0
Column2=[MetaData], -1, 0

[DLG:IDD_ADD_FILE]
Type=1
Class=addfile
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_METADATA,edit,1350631556
Control4=IDC_FILENAME,edit,1350631552
Control5=IDC_BROWSE,button,1342242816
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352

[CLS:addfile]
Type=0
HeaderFile=addfile.h
ImplementationFile=addfile.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK
VirtualFilter=dWC

