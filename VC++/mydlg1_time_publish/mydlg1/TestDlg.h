#pragma once


// CTestDlg �Ի���

class CTestDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTestDlg)

public:
	CTestDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CTestDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedStatic0();
	afx_msg void OnStatic();
	afx_msg void OnThemechangedStatic0(NMHDR *pNMHDR, LRESULT *pResult);
};
