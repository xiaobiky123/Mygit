
// mydlg1View.cpp : Cmydlg1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "mydlg1.h"
#endif

#include "mydlg1Doc.h"
#include "mydlg1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmydlg1View

IMPLEMENT_DYNCREATE(Cmydlg1View, CView)

BEGIN_MESSAGE_MAP(Cmydlg1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cmydlg1View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_32771, &Cmydlg1View::On32771)
END_MESSAGE_MAP()

// Cmydlg1View 构造/析构

Cmydlg1View::Cmydlg1View()
{
	// TODO: 在此处添加构造代码

}

Cmydlg1View::~Cmydlg1View()
{
}

BOOL Cmydlg1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cmydlg1View 绘制

void Cmydlg1View::OnDraw(CDC* /*pDC*/)
{
	Cmydlg1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cmydlg1View 打印


void Cmydlg1View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cmydlg1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void Cmydlg1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void Cmydlg1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void Cmydlg1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cmydlg1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	//theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cmydlg1View 诊断

#ifdef _DEBUG
void Cmydlg1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmydlg1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmydlg1Doc* Cmydlg1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmydlg1Doc)));
	return (Cmydlg1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmydlg1View 消息处理程序

#include "TestDlg.h"
void Cmydlg1View::On32771()
{
	// TODO: 在此添加命令处理程序代码

	CTestDlg dlg;
	dlg.DoModal();
}
