
// mydlg1View.h : Cmydlg1View ��Ľӿ�
//

#pragma once


class Cmydlg1View : public CView
{
protected: // �������л�����
	Cmydlg1View();
	DECLARE_DYNCREATE(Cmydlg1View)

// ����
public:
	Cmydlg1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cmydlg1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // mydlg1View.cpp �еĵ��԰汾
inline Cmydlg1Doc* Cmydlg1View::GetDocument() const
   { return reinterpret_cast<Cmydlg1Doc*>(m_pDocument); }
#endif

