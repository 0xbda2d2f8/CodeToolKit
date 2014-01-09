#pragma once


// CExplorerBar

class CExplorerBar : public CXTPTaskPanel
{
	DECLARE_DYNAMIC(CExplorerBar)

public:
	CExplorerBar();
	virtual ~CExplorerBar();
//Operations
public:
	void Create(CWnd *pParentWnd);
//Implementation
public:
	void OnItemClick(UINT nID);

	void* AddGroup(LPCTSTR lpszGroup);
	void AddLinkItem(void* pGroup, UINT nID, LPCTSTR lpszCaption);

protected:
	DECLARE_MESSAGE_MAP()
};


