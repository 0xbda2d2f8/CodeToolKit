// CodeToolKitView.cpp : implementation of the CCodeToolKitView class
//

#include "stdafx.h"
#include "CodeToolKit.h"

#include "CodeToolKitDoc.h"
#include "CodeToolKitView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCodeToolKitView

IMPLEMENT_DYNCREATE(CCodeToolKitView, CFormView)

BEGIN_MESSAGE_MAP(CCodeToolKitView, CFormView)
END_MESSAGE_MAP()

// CCodeToolKitView construction/destruction

CCodeToolKitView::CCodeToolKitView()
	: CFormView(CCodeToolKitView::IDD)
{
	// TODO: add construction code here

}

CCodeToolKitView::~CCodeToolKitView()
{
}

void CCodeToolKitView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL CCodeToolKitView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CCodeToolKitView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}


// CCodeToolKitView diagnostics

#ifdef _DEBUG
void CCodeToolKitView::AssertValid() const
{
	CFormView::AssertValid();
}

void CCodeToolKitView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CCodeToolKitDoc* CCodeToolKitView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCodeToolKitDoc)));
	return (CCodeToolKitDoc*)m_pDocument;
}
#endif //_DEBUG


// CCodeToolKitView message handlers
