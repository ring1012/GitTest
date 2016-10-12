
// GitTestView.cpp : CGitTestView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "GitTest.h"
#endif

#include "GitTestDoc.h"
#include "GitTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGitTestView

IMPLEMENT_DYNCREATE(CGitTestView, CView)

BEGIN_MESSAGE_MAP(CGitTestView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CGitTestView ����/����

CGitTestView::CGitTestView()
{
	// TODO: �ڴ˴���ӹ������

}

CGitTestView::~CGitTestView()
{
}

BOOL CGitTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CGitTestView ����

void CGitTestView::OnDraw(CDC* /*pDC*/)
{
	CGitTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CGitTestView ��ӡ

BOOL CGitTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CGitTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CGitTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CGitTestView ���

#ifdef _DEBUG
void CGitTestView::AssertValid() const
{
	CView::AssertValid();
}

void CGitTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGitTestDoc* CGitTestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGitTestDoc)));
	return (CGitTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CGitTestView ��Ϣ�������
