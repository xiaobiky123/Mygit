// TestDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "mydlg1.h"
#include "TestDlg.h"
#include "afxdialogex.h"
#include "MainFrm.h"

// CTestDlg 对话框

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


// CTestDlg 消息处理程序


void CTestDlg::OnClickedStatic0()
{
	// TODO: 在此添加控件通知处理程序代码
	//GetDlgItem(IDC_STATIC0)->SetWindowText(_T("90"));
	
	CMainFrame myfram;
	CTime m_time;  CString m_strDate,m_strTime,m_strDateTime;
    m_time=CTime::GetCurrentTime();             //获取当前时间日期  
    //m_strDate=m_time.Format(_T("%x"));          //格式化日期  
    //m_strTime=m_time.Format(_T("%X"));          //格式化时间  
	int data=m_time.GetDay();
	//m_strDate=m_time.Format(_T("%x")); 
   // m_strDateTime=m_time.Format(_T("%Y-%m-%d %H:%M:%S %A"));   //格式化日期时间 
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
	// TODO: 在此添加命令处理程序代码
	//GetDlgItem(IDC_STATIC)->SetWindowText(_T("90"));
		CMainFrame myfram;
	CTime m_time;  CString m_strDate,m_strTime,m_strDateTime;
    m_time=CTime::GetCurrentTime();             //获取当前时间日期  
    //m_strDate=m_time.Format(_T("%x"));          //格式化日期  
    //m_strTime=m_time.Format(_T("%X"));          //格式化时间  
	int data=m_time.GetDay();
	//m_strDate=m_time.Format(_T("%x")); 
   // m_strDateTime=m_time.Format(_T("%Y-%m-%d %H:%M:%S %A"));   //格式化日期时间 
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
	// 该功能要求使用 Windows XP 或更高版本。
	// 符号 _WIN32_WINNT 必须 >= 0x0501。
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
	//GetDlgItem(IDC_STATIC0)->SetWindowText(_T("90"));
}
