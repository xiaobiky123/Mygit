// TestDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "mydlg1.h"
#include "TestDlg.h"
#include "afxdialogex.h"
#include "MainFrm.h"

// CTestDlg �Ի���

IMPLEMENT_DYNAMIC(CTestDlg, CDialogEx)

CTestDlg::CTestDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTestDlg::IDD, pParent)
{

}

CTestDlg::~CTestDlg()
{
}

void CTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTestDlg, CDialogEx)
	ON_STN_CLICKED(IDC_STATIC0, &CTestDlg::OnClickedStatic0)
	ON_COMMAND(IDC_STATIC, &CTestDlg::OnStatic)
	ON_NOTIFY(NM_THEMECHANGED, IDC_STATIC0, &CTestDlg::OnThemechangedStatic0)
END_MESSAGE_MAP()


// CTestDlg ��Ϣ�������


void CTestDlg::OnClickedStatic0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//GetDlgItem(IDC_STATIC0)->SetWindowText(_T("90"));
	
	CMainFrame myfram;
	CTime m_time;  CString m_strDate,m_strTime,m_strDateTime;
    m_time=CTime::GetCurrentTime();             //��ȡ��ǰʱ������  
    //m_strDate=m_time.Format(_T("%x"));          //��ʽ������  
    //m_strTime=m_time.Format(_T("%X"));          //��ʽ��ʱ��  
	int data=m_time.GetDay();
	//m_strDate=m_time.Format(_T("%x")); 
   // m_strDateTime=m_time.Format(_T("%Y-%m-%d %H:%M:%S %A"));   //��ʽ������ʱ�� 
	data=30-data;
	char text[4];
	sprintf(text,"%d",data);
	CString mydate(text);
	//m_strDate.format("%s",text);
	GetDlgItem(IDC_STATIC0)->SetWindowText(mydate);
    UpdateData(false);
}


void CTestDlg::OnStatic()
{
	// TODO: �ڴ���������������
	//GetDlgItem(IDC_STATIC)->SetWindowText(_T("90"));
		CMainFrame myfram;
	CTime m_time;  CString m_strDate,m_strTime,m_strDateTime;
    m_time=CTime::GetCurrentTime();             //��ȡ��ǰʱ������  
    //m_strDate=m_time.Format(_T("%x"));          //��ʽ������  
    //m_strTime=m_time.Format(_T("%X"));          //��ʽ��ʱ��  
	int data=m_time.GetDay();
	//m_strDate=m_time.Format(_T("%x")); 
   // m_strDateTime=m_time.Format(_T("%Y-%m-%d %H:%M:%S %A"));   //��ʽ������ʱ�� 
	data=30-data;
	char text[4];
	sprintf(text,"%d",data);
	CString mydate(text);
	//m_strDate.format("%s",text);
	GetDlgItem(IDC_STATIC0)->SetWindowText(mydate);
    UpdateData(false);
}


void CTestDlg::OnThemechangedStatic0(NMHDR *pNMHDR, LRESULT *pResult)
{
	// �ù���Ҫ��ʹ�� Windows XP ����߰汾��
	// ���� _WIN32_WINNT ���� >= 0x0501��
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
	//GetDlgItem(IDC_STATIC0)->SetWindowText(_T("90"));
}
