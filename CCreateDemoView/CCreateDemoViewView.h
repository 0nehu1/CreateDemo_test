
// CCreateDemoViewView.h: CCCreateDemoViewView 클래스의 인터페이스
//

#pragma once


class CCCreateDemoViewView : public CView
{
protected: // serialization에서만 만들어집니다.
	CCCreateDemoViewView() noexcept;
	DECLARE_DYNCREATE(CCCreateDemoViewView)

// 특성입니다.
public:
	CCCreateDemoViewDoc* GetDocument() const;

// 작업입니다.
public:
	CWnd m_wndchild1;
	CWnd m_wndchild2;
// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 구현입니다.
public:
	virtual ~CCCreateDemoViewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#ifndef _DEBUG  // CCreateDemoViewView.cpp의 디버그 버전
inline CCCreateDemoViewDoc* CCCreateDemoViewView::GetDocument() const
   { return reinterpret_cast<CCCreateDemoViewDoc*>(m_pDocument); }
#endif

