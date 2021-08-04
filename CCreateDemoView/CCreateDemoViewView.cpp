
// CCreateDemoViewView.cpp: CCCreateDemoViewView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "CCreateDemoView.h"
#endif

#include "CCreateDemoViewDoc.h"
#include "CCreateDemoViewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCCreateDemoViewView

IMPLEMENT_DYNCREATE(CCCreateDemoViewView, CView)

BEGIN_MESSAGE_MAP(CCCreateDemoViewView, CView)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// CCCreateDemoViewView 생성/소멸

CCCreateDemoViewView::CCCreateDemoViewView() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CCCreateDemoViewView::~CCCreateDemoViewView()
{
}

BOOL CCCreateDemoViewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CCCreateDemoViewView 그리기

void CCCreateDemoViewView::OnDraw(CDC* /*pDC*/)
{
	CCCreateDemoViewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CCCreateDemoViewView 진단

#ifdef _DEBUG
void CCCreateDemoViewView::AssertValid() const
{
	CView::AssertValid();
}

void CCCreateDemoViewView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCCreateDemoViewDoc* CCCreateDemoViewView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCCreateDemoViewDoc)));
	return (CCCreateDemoViewDoc*)m_pDocument;
}
#endif //_DEBUG


// CCCreateDemoViewView 메시지 처리기


int CCCreateDemoViewView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	m_wndchild1.Create(TEXT("BUTTON"), TEXT("버튼"), WS_CHILD | WS_VISIBLE | WS_BORDER, CRect(50, 50, 100, 200),this,1234);
	m_wndchild2.Create(TEXT("EDIT"), TEXT("에디트"), WS_CHILD | WS_VISIBLE | WS_BORDER, CRect(150, 50, 200, 200), this, 1234);
	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	m_wndchild2.SetParent(NULL);
	return 0;
}
