// CodeToolKitDoc.cpp : implementation of the CCodeToolKitDoc class
//

#include "stdafx.h"
#include "CodeToolKit.h"

#include "CodeToolKitDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif




// CCodeToolKitDoc

IMPLEMENT_DYNCREATE(CCodeToolKitDoc, CDocument)

BEGIN_MESSAGE_MAP(CCodeToolKitDoc, CDocument)
END_MESSAGE_MAP()


// CCodeToolKitDoc construction/destruction

CCodeToolKitDoc::CCodeToolKitDoc()
{
	// TODO: add one-time construction code here

}

CCodeToolKitDoc::~CCodeToolKitDoc()
{
}

BOOL CCodeToolKitDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;
	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	return TRUE;
}




// CCodeToolKitDoc serialization

void CCodeToolKitDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CCodeToolKitDoc diagnostics

#ifdef _DEBUG
void CCodeToolKitDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCodeToolKitDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CCodeToolKitDoc commands
