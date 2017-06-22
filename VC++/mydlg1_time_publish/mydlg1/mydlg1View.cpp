
// mydlg1View.cpp : Cmydlg1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cmydlg1View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_32771, &Cmydlg1View::On32771)
END_MESSAGE_MAP()

// Cmydlg1View ����/����

Cmydlg1View::Cmydlg1View()
{
	// TODO: �ڴ˴���ӹ������

}

Cmydlg1View::~Cmydlg1View()
{
}

BOOL Cmydlg1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cmydlg1View ����

void Cmydlg1View::OnDraw(CDC* /*pDC*/)
{
	Cmydlg1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cmydlg1View ��ӡ


void Cmydlg1View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cmydlg1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cmydlg1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cmydlg1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
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


// Cmydlg1View ���

#ifdef _DEBUG
void Cmydlg1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmydlg1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmydlg1Doc* Cmydlg1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmydlg1Doc)));
	return (Cmydlg1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmydlg1View ��Ϣ�������

#include "TestDlg.h"
void Cmydlg1View::On32771()
{
	// TODO: �ڴ���������������

	CTestDlg dlg;
	dlg.DoModal();
}
