
// FTech_FolderExDlg.cpp : implementation file
//

#include "stdafx.h"
#include "FTech_FolderEx.h"
#include "FTech_FolderExDlg.h"
#include "afxdialogex.h"
#include "FolderEx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFTech_FolderExDlg dialog




CFTech_FolderExDlg::CFTech_FolderExDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CFTech_FolderExDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CFTech_FolderExDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CFTech_FolderExDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_CHECKEXE, &CFTech_FolderExDlg::OnBnClickedBtnCheckexe)
	ON_BN_CLICKED(IDC_BTN_CREATE, &CFTech_FolderExDlg::OnBnClickedBtnCreate)
	ON_BN_CLICKED(IDC_BTN_REMOVE, &CFTech_FolderExDlg::OnBnClickedBtnRemove)
	ON_BN_CLICKED(IDC_BTN_CLEAR, &CFTech_FolderExDlg::OnBnClickedBtnClear)
END_MESSAGE_MAP()


// CFTech_FolderExDlg message handlers

BOOL CFTech_FolderExDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CFTech_FolderExDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CFTech_FolderExDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CFTech_FolderExDlg::OnBnClickedBtnCheckexe()
{
	CString path = CFolderEx::GetExeDir();
	AfxMessageBox(path);
}


void CFTech_FolderExDlg::OnBnClickedBtnCreate()
{
	CString path = CFolderEx::GetExeDir();
	CString folderName = L"TEST";

	path+=folderName;

	CFolderEx::CreateDir(folderName);
}


void CFTech_FolderExDlg::OnBnClickedBtnRemove()
{
	CString path = CFolderEx::GetExeDir();
	CString folderName = L"TEST";

	path+=folderName;

	CFolderEx::RemoveDir(folderName);
}

void CFTech_FolderExDlg::OnBnClickedBtnClear()
{
	CString path = CFolderEx::GetExeDir();
	CString folderName = L"TEST";

	path+=folderName;

	CFolderEx::ClearDir(folderName);
}
