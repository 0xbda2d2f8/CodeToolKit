// CodeToolKitDoc.h : interface of the CCodeToolKitDoc class
//


#pragma once


class CCodeToolKitDoc : public CDocument
{
protected: // create from serialization only
	CCodeToolKitDoc();
	DECLARE_DYNCREATE(CCodeToolKitDoc)

// Attributes
public:

// Operations
public:

// Overrides
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CCodeToolKitDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};
