// CodeToolKitView.h : interface of the CCodeToolKitView class
//


#pragma once

#include "Resource.h"

class CCodeToolKitView : public CFormView
{
protected: // create from serialization only
	CCodeToolKitView();
	DECLARE_DYNCREATE(CCodeToolKitView)

public:
	enum{ IDD = IDD_CODETOOLKIT_FORM };

// Attributes
public:
	CCodeToolKitDoc* GetDocument() const;

// Operations
public:

// Overrides
	public:
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CCodeToolKitView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CodeToolKitView.cpp
inline CCodeToolKitDoc* CCodeToolKitView::GetDocument() const
   { return reinterpret_cast<CCodeToolKitDoc*>(m_pDocument); }
#endif
