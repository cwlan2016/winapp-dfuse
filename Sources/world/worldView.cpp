
// worldView.cpp : CworldView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "world.h"
#endif

#include "worldDoc.h"
#include "worldView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CworldView

IMPLEMENT_DYNCREATE(CworldView, CView)

BEGIN_MESSAGE_MAP(CworldView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CworldView ����/����

CworldView::CworldView()
{
	// TODO: �ڴ˴���ӹ������

}

CworldView::~CworldView()
{
}

BOOL CworldView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CworldView ����

void CworldView::OnDraw(CDC* /*pDC*/)
{
	CworldDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CworldView ��ӡ

BOOL CworldView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CworldView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CworldView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CworldView ���

#ifdef _DEBUG
void CworldView::AssertValid() const
{
	CView::AssertValid();
}

void CworldView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CworldDoc* CworldView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CworldDoc)));
	return (CworldDoc*)m_pDocument;
}
#endif //_DEBUG


// CworldView ��Ϣ�������
