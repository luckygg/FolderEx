
// FTech_FolderExDlg.h : header file
//

#pragma once


// CFTech_FolderExDlg dialog
class CFTech_FolderExDlg : public CDialogEx
{
// Construction
public:
	CFTech_FolderExDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_FTECH_FOLDEREX_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnCheckexe();
	afx_msg void OnBnClickedBtnCreate();
	afx_msg void OnBnClickedBtnRemove();
	afx_msg void OnBnClickedBtnClear();
};
