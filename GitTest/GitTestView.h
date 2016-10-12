
// GitTestView.h : CGitTestView 类的接口
//

#pragma once


class CGitTestView : public CView
{
protected: // 仅从序列化创建
	CGitTestView();
	DECLARE_DYNCREATE(CGitTestView)

// 特性
public:
	CGitTestDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CGitTestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // GitTestView.cpp 中的调试版本
inline CGitTestDoc* CGitTestView::GetDocument() const
   { return reinterpret_cast<CGitTestDoc*>(m_pDocument); }
#endif

