
// GitTestView.h : CGitTestView ��Ľӿ�
//

#pragma once


class CGitTestView : public CView
{
protected: // �������л�����
	CGitTestView();
	DECLARE_DYNCREATE(CGitTestView)

// ����
public:
	CGitTestDoc* GetDocument() const;

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
	virtual ~CGitTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // GitTestView.cpp �еĵ��԰汾
inline CGitTestDoc* CGitTestView::GetDocument() const
   { return reinterpret_cast<CGitTestDoc*>(m_pDocument); }
#endif

