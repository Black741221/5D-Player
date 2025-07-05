/*
 * 封包生成與解析模組
 * 行數範圍：16001-20000
 */

  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b776d8;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_18 = uVar2;
  pCStack_14 = CWnd::GetDesktopWindow();
  if (pCStack_14 == (CWnd *)0x0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxcolordialog.cpp"
                                ,0x1a0);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else {
    *(CMFCColorDialog **)(this + 0x74) = param_1;
    thunk_FUN_00b31aa0(uVar2);
    ptVar4 = (tagPOINT *)thunk_FUN_00b31df0();
    CWnd::ClientToScreen(pCStack_14,ptVar4);
    uVar11 = 0;
    lpCursorName = (LPCWSTR)0x10;
    hInstance = (HINSTANCE)0x3f11;
    AfxGetApp();
    pHVar5 = FID_conflict_LoadCursorW(hInstance,lpCursorName);
    uVar11 = AfxRegisterWndClass(0x800,pHVar5,lpCursorName,uVar11);
    thunk_FUN_006c4270(uVar11);
    uStack_8 = 0;
    uVar12 = 0;
    uVar10 = 0;
    uVar9 = 0;
    puVar8 = auStack_28;
    uVar7 = 0x90000000;
    puVar6 = &DAT_00b899f7;
    uVar11 = thunk_FUN_006bf040(&DAT_00b899f7,0x90000000,puVar8,0,0,0);
    uVar11 = ::CreateEx(0xa0,uVar11,puVar6,uVar7,puVar8,uVar9,uVar10,uVar12);
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70(uVar2,this,uVar11);
  }
  ExceptionList = pvStack_10;
  iVar3 = __security_check_cookie(uStack_18 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



void __thiscall
CMFCVisualManager::OnDrawMenuShadow
          (CMFCVisualManager *this,CDC *param_1,CRect *param_2,CRect *param_3,int param_4,
          int param_5,int param_6,CBitmap *param_7,CBitmap *param_8,int param_9)

{
  CDrawingManager aCStack_18 [8];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b59a58;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x19a);
  AfxAssertValidObject
            ((CObject *)param_7,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x19b);
  AfxAssertValidObject
            ((CObject *)param_8,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x19c);
  CDrawingManager::CDrawingManager(aCStack_18,param_1);
  uStack_8 = 0;
  CDrawingManager::DrawShadow
            (aCStack_18,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_4,param_5,param_6,
             param_7,param_8,0xffffffff,param_9 == 0);
  uStack_8 = 0xffffffff;
  thunk_FUN_00943a10();
  ExceptionList = pvStack_10;
  return;
}



void __thiscall CMFCRibbonBaseElement::SetVisible(CMFCRibbonBaseElement *this,int param_1)

{
  *(int *)(this + 0x8c) = param_1;
  return;
}



CGestureConfig * __thiscall CGestureConfig::CGestureConfig(CGestureConfig *this)

{
  void *pvVar1;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4db88;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  thunk_FUN_006c9880(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 8) = 5;
  pvVar1 = operator_new__(-(uint)((int)((ulonglong)*(uint *)(this + 8) * 0xc >> 0x20) != 0) |
                          (uint)((ulonglong)*(uint *)(this + 8) * 0xc),
                          "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wincore.cpp",0x141b);
  *(void **)(this + 4) = pvVar1;
  for (iStack_14 = 0; iStack_14 < *(int *)(this + 8); iStack_14 = iStack_14 + 1) {
    *(int *)(iStack_14 * 0xc + *(int *)(this + 4)) = iStack_14 + 3;
    *(undefined4 *)(*(int *)(this + 4) + 4 + iStack_14 * 0xc) = 1;
    *(undefined4 *)(*(int *)(this + 4) + 8 + iStack_14 * 0xc) = 0;
  }
  EnableRotate(this,0);
  EnablePan(this,1,0x1a);
  ExceptionList = pvStack_10;
  return this;
}



bool __thiscall thunk_FUN_00825db0(int *param_1,int param_2)

{
  return *param_1 == param_2;
}



void __thiscall CMFCRibbonCheckBox::OnDraw(CMFCRibbonCheckBox *this,CDC *param_1)

{
  int iVar1;
  CMFCVisualManager *pCVar2;
  undefined4 uVar3;
  tagRECT *ptVar4;
  double dVar5;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  uStack_c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncheckbox.cpp",0x3a);
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncheckbox.cpp",0x3b);
  iVar1 = thunk_FUN_00b31e30();
  if (iVar1 == 0) {
    dVar5 = AFX_GLOBAL_DATA::GetRibbonImageScale((AFX_GLOBAL_DATA *)&DAT_00c55790);
    if (NAN(dVar5) == (dVar5 == 1.0)) {
      uStack_60 = 0x14;
    }
    else {
      uStack_60 = 0x10;
    }
    dVar5 = AFX_GLOBAL_DATA::GetRibbonImageScale((AFX_GLOBAL_DATA *)&DAT_00c55790);
    if (NAN(dVar5) == (dVar5 == 1.0)) {
      uStack_64 = 0x14;
    }
    else {
      uStack_64 = 0x10;
    }
    thunk_FUN_00b31090(uStack_64,uStack_60);
    iStack_1c = *(int *)(this + 0x18);
    iStack_18 = *(int *)(this + 0x1c);
    iStack_14 = *(int *)(this + 0x20);
    iStack_10 = *(int *)(this + 0x24);
    CRect::DeflateRect((CRect *)&iStack_1c,*(tagSIZE *)(this + 0xbc));
    iStack_1c = iStack_1c + 1;
    iStack_14 = iStack_1c + iStack_38;
    iVar1 = CRect::CenterPoint((CRect *)&iStack_1c);
    iStack_18 = *(int *)(iVar1 + 4) - iStack_38 / 2;
    iStack_10 = iStack_18 + iStack_34;
    iVar1 = (**(code **)(*(int *)this + 0x34))();
    if (((iVar1 == 0) && (iVar1 = (**(code **)(*(int *)this + 0x38))(), iVar1 == 0)) ||
       (iVar1 = (**(code **)(*(int *)this + 0x40))(), iVar1 != 0)) {
      iStack_68 = 0;
    }
    else {
      iStack_68 = 1;
    }
    iStack_8 = iStack_68;
    iVar1 = (**(code **)(*(int *)this + 0x3c))();
    if ((iVar1 == 0) || (iStack_8 == 0)) {
      uStack_6c = 0;
    }
    else {
      uStack_6c = 1;
    }
    iVar1 = (**(code **)(*(int *)this + 0x44))();
    if ((iVar1 == 0) &&
       ((iVar1 = (**(code **)(*(int *)this + 0x3c))(), iVar1 == 0 || (iStack_8 == 0)))) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = 1;
    }
    pCVar2 = CMFCVisualManager::GetInstance();
    iVar1 = (**(code **)(*(int *)this + 0x40))();
    (**(code **)(*(int *)pCVar2 + 0x1a8))
              (param_1,iStack_1c,iStack_18,iStack_14,iStack_10,uStack_70,iStack_8,uStack_6c,
               iVar1 == 0);
    iStack_20 = -1;
    if (*(int *)(this + 0x78) != 0) {
      if (*(int *)(this + 0x68) == 0) {
        pCVar2 = CMFCVisualManager::GetInstance();
        uVar3 = (**(code **)(*(int *)pCVar2 + 0xcc))();
        iStack_20 = (**(code **)(*(int *)param_1 + 0x38))(uVar3);
      }
      else {
        pCVar2 = CMFCVisualManager::GetInstance();
        uVar3 = (**(code **)(*(int *)pCVar2 + 0x25c))(1);
        iStack_20 = (**(code **)(*(int *)param_1 + 0x38))(uVar3);
      }
    }
    uStack_2c = *(undefined4 *)(this + 0x1c);
    uStack_28 = *(undefined4 *)(this + 0x20);
    uStack_24 = *(undefined4 *)(this + 0x24);
    iStack_30 = iStack_14 + 4;
    (**(code **)(*(int *)this + 0x1c4))
              (param_1,this + 4,iStack_30,uStack_2c,uStack_28,uStack_24,0x24,0xffffffff);
    if (iStack_20 != -1) {
      (**(code **)(*(int *)param_1 + 0x38))(iStack_20);
    }
    iVar1 = (**(code **)(*(int *)this + 0x38))();
    if (iVar1 != 0) {
      iStack_48 = iStack_30;
      uStack_44 = uStack_2c;
      uStack_40 = uStack_28;
      uStack_3c = uStack_24;
      CRect::OffsetRect((CRect *)&iStack_48,-2,0);
      CRect::DeflateRect((CRect *)&iStack_48,0,2);
      ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
      CDC::DrawFocusRect(param_1,ptVar4);
    }
  }
  __security_check_cookie(uStack_c ^ (uint)&stack0xfffffffc);
  return;
}



CDockingPanesRow * __thiscall
CDockSite::FindNextVisibleRow(CDockSite *this,__POSITION **param_1,int param_2)

{
  __POSITION *p_Var1;
  int iVar2;
  undefined4 *puVar3;
  CObject **ppCVar4;
  CObject *pCStack_1c;
  __POSITION *p_Stack_14;
  
  iVar2 = CObList::IsEmpty((CObList *)(this + 0x11c));
  if (iVar2 == 0) {
    if (*param_1 == (__POSITION *)0x0) {
      if (param_2 == 0) {
        p_Stack_14 = (__POSITION *)thunk_FUN_006ccbc0();
      }
      else {
        p_Stack_14 = (__POSITION *)thunk_FUN_006ccba0();
      }
      *param_1 = p_Stack_14;
    }
    else if (param_2 == 0) {
      CObList::GetPrev((CObList *)(this + 0x11c),param_1);
    }
    else {
      ::GetNext(param_1);
    }
    do {
      if (*param_1 == (__POSITION *)0x0) {
        return (CDockingPanesRow *)0x0;
      }
      p_Var1 = *param_1;
      if (param_2 == 0) {
        ppCVar4 = CObList::GetPrev((CObList *)(this + 0x11c),param_1);
        pCStack_1c = *ppCVar4;
      }
      else {
        puVar3 = (undefined4 *)::GetNext(param_1);
        pCStack_1c = (CObject *)*puVar3;
      }
      AfxAssertValidObject
                (pCStack_1c,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdocksite.cpp",
                 0x133);
      iVar2 = (**(code **)(*(int *)pCStack_1c + 0x60))();
    } while (iVar2 == 0);
    *param_1 = p_Var1;
  }
  else {
    *param_1 = (__POSITION *)0x0;
    pCStack_1c = (CObject *)0x0;
  }
  return (CDockingPanesRow *)pCStack_1c;
}



ushort * __cdecl ___pctype_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptStack_8;
  
  p_Var1 = __getptd();
  ptStack_8 = p_Var1->ptlocinfo;
  if ((ptStack_8 != (pthreadlocinfo)PTR_DAT_00c4b7a4) && ((p_Var1->_ownlocale & DAT_00c4b4e8) == 0))
  {
    ptStack_8 = (pthreadlocinfo)thunk_FUN_00aef510();
  }
  return (ushort *)ptStack_8[1].lc_category[0].locale;
}



void __fastcall thunk_FUN_00a15140(undefined4 *param_1)

{
  *param_1 = _AFX_OLE_STATE::vftable;
  thunk_FUN_006e40b0();
  return;
}



CDockablePane * __thiscall CPaneFrameWnd::DockPaneStandard(CPaneFrameWnd *this,int *param_1)

{
  CObject *pCVar1;
  int iVar2;
  uint uVar3;
  
  pCVar1 = (CObject *)(**(code **)(*(int *)this + 0x1ac))();
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_00c46610,pCVar1);
  if ((pCVar1 != (CObject *)0x0) && (iVar2 = (**(code **)(*(int *)this + 0x1a0))(), iVar2 != 0)) {
    iVar2 = CWnd::IsWindowVisible((CWnd *)pCVar1);
    if ((iVar2 == 0) && (uVar3 = (**(code **)(*(int *)pCVar1 + 0x1bc))(), (uVar3 & 2) != 0)) {
      CWnd::ShowWindow((CWnd *)pCVar1,5);
    }
    pCVar1 = (CObject *)(**(code **)(*(int *)pCVar1 + 0x2b8))(param_1);
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_00c46610,pCVar1);
    return (CDockablePane *)pCVar1;
  }
  return (CDockablePane *)0x0;
}



void __CrtDbgReportV(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  __VCrtDbgReportA(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



ANIMATION_TYPE CMFCPopupMenu::GetAnimationType(int param_1)

{
  ANIMATION_TYPE AVar1;
  
  AVar1 = DAT_00c57f54;
  if ((DAT_00c57f54 == 999) && (param_1 == 0)) {
    if (DAT_00c55920 == 0) {
      AVar1 = 0;
    }
    else {
      AVar1 = (DAT_00c55924 != 0) + 2;
    }
  }
  return AVar1;
}



undefined4
FID_conflict___CrtDbgReport
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FID_conflict___CrtDbgReportTV(param_1,param_2,param_3,param_4,param_5,&stack0x00000018);
  return uVar1;
}



void __thiscall
CMFCRibbonCollector::GetCategoryImages
          (CMFCRibbonCollector *this,CMFCRibbonCategory *param_1,XImage *param_2,XImage *param_3)

{
  uint uVar1;
  CMFCToolBarImages *pCVar2;
  uint uVar3;
  XImage *pXVar4;
  
  uVar1 = thunk_FUN_00a51990();
  uVar3 = (uint)((uVar1 & 0x10) == 0x10);
  pXVar4 = param_2;
  uVar1 = uVar3;
  pCVar2 = CMFCRibbonCategory::GetSmallImages(param_1);
  (**(code **)(*(int *)this + 0x3c))(pCVar2,pXVar4,uVar1);
  if ((*(int *)(param_2 + 4) == 0) && (uVar3 != 0)) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x624);
  }
  pXVar4 = param_3;
  uVar1 = uVar3;
  pCVar2 = CMFCRibbonCategory::GetLargeImages(param_1);
  (**(code **)(*(int *)this + 0x3c))(pCVar2,pXVar4,uVar1);
  if ((*(int *)(param_3 + 4) == 0) && (uVar3 != 0)) {
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x628);
  }
  return;
}



CMFCCustomizeButton * __thiscall CMFCToolBar::GetCustomizeButton(CMFCToolBar *this)

{
  return *(CMFCCustomizeButton **)(this + 0xca0);
}



AFX_CHECK_DATA * __thiscall AFX_CHECK_DATA::AFX_CHECK_DATA(AFX_CHECK_DATA *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  return this;
}



int __thiscall
CTooltipManager::CreateToolTipObject(CTooltipManager *this,CToolTipCtrl **param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  CToolTipCtrl *this_00;
  CObject *pCVar3;
  CToolTipCtrl *pCStack_2c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b61254;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (param_2 < 0xb) {
    if (*(int *)(this + param_2 * 4 + 0x240) == 0) {
      this_00 = (CToolTipCtrl *)
                CObject::operator_new
                          (0x90,
                           "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtooltipmanager.cpp"
                           ,0xe0);
      uStack_8 = 0;
      if (this_00 == (CToolTipCtrl *)0x0) {
        pCStack_2c = (CToolTipCtrl *)0x0;
      }
      else {
        pCStack_2c = (CToolTipCtrl *)CToolTipCtrl::CToolTipCtrl(this_00);
      }
      uStack_8 = 0xffffffff;
      *param_1 = pCStack_2c;
    }
    else {
      pCVar3 = (CObject *)thunk_FUN_00714560(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CToolTipCtrl_00ba605c,pCVar3);
      *param_1 = (CToolTipCtrl *)pCVar3;
    }
    if (*param_1 == (CToolTipCtrl *)0x0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtooltipmanager.cpp"
                                  ,0xe9);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      iVar2 = 0;
    }
    else {
      AfxAssertValidObject
                ((CObject *)*param_1,
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtooltipmanager.cpp",0xed);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolTipCtrl_00bc9920,
                                  (CObject *)*param_1);
      if (pCVar3 != (CObject *)0x0) {
        CMFCToolTipCtrl::SetParams
                  ((CMFCToolTipCtrl *)pCVar3,(CMFCToolTipInfo *)(this + param_2 * 0x34 + 4));
      }
      iVar2 = 1;
    }
  }
  else {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtooltipmanager.cpp"
                                ,0xd7);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    iVar2 = 0;
  }
  ExceptionList = pvStack_10;
  return iVar2;
}



CMFCRibbonKeyTip ** __thiscall CArray<>::operator[](CArray<> *this,int param_1)

{
  CMFCRibbonKeyTip **ppCVar1;
  
  ppCVar1 = (CMFCRibbonKeyTip **)::ElementAt(param_1);
  return ppCVar1;
}



void __fastcall thunk_FUN_00717a90(CDllIsolationWrapperBase *param_1)

{
  CDllIsolationWrapperBase::~CDllIsolationWrapperBase(param_1);
  return;
}



void SerializeElementsInsertExtract<>(CArchive *param_1,CComBSTR *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((param_3 == 0) || (param_2 != (CComBSTR *)0x0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x71
                                 ), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (!bVar2) {
    thunk_FUN_007113e0();
  }
  if (((param_3 != 0) && (iVar3 = AfxIsValidAddress(param_2,param_3 << 2,1), iVar3 == 0)) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x73
                                 ), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_3 != 0) && (param_2 != (CComBSTR *)0x0)) {
    iVar3 = CArchive::IsStoring(param_1);
    if (iVar3 == 0) {
      while (param_3 != 0) {
        operator>>(param_1,param_2);
        param_2 = param_2 + 4;
        param_3 = param_3 + -1;
      }
    }
    else {
      while (param_3 != 0) {
        ATL::CComBSTR::CComBSTR((CComBSTR *)&stack0xffffffe8,param_2);
        operator<<(param_1);
        param_2 = param_2 + 4;
        param_3 = param_3 + -1;
      }
    }
  }
  return;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

undefined4 thunk_FUN_006c0570(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_d0 [51];
  
  puVar2 = auStack_d0;
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iVar1 = thunk_FUN_006bf890();
  return *(undefined4 *)(iVar1 + 8);
}



void __thiscall
CMFCVisualManager::OnDrawTask
          (CMFCVisualManager *this,CDC *param_1,CMFCTasksPaneTask *param_2,CImageList *param_3,
          int param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  tagPOINT *ptVar4;
  tagRECT *ptVar5;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined *puStack_84;
  int iStack_80;
  undefined1 auStack_68 [16];
  CStringT<> aCStack_58 [4];
  CPen *pCStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  ulong uStack_1c;
  CObject *pCStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b59d68;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_4c = (uint)(param_2 != (CMFCTasksPaneTask *)0x0);
  uStack_30 = uVar2;
  if ((uStack_4c == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp"
                                  ,0x886), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uStack_4c == 0) {
    thunk_FUN_007113e0(uVar2);
  }
  uStack_50 = (uint)(param_3 != (CImageList *)0x0);
  if ((uStack_50 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp"
                                  ,0x887), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uStack_50 == 0) {
    thunk_FUN_007113e0(uVar2);
  }
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x889);
  AfxAssertValidObject
            ((CObject *)param_3,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x88a);
  AfxAssertValidObject
            ((CObject *)param_2,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x88b);
  iStack_40 = *(int *)(param_2 + 0xc);
  uStack_3c = *(undefined4 *)(param_2 + 0x10);
  iStack_38 = *(int *)(param_2 + 0x14);
  uStack_34 = *(undefined4 *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x3c) == 0) {
    thunk_FUN_00b31090(0,0);
    ImageList_GetIconSize(*(HIMAGELIST *)(param_3 + 4),&iStack_28,&iStack_24);
    if ((-1 < *(int *)(param_2 + 0x1c)) && (0 < iStack_28)) {
      ptVar4 = (tagPOINT *)CRect::TopLeft((CRect *)&iStack_40);
      CImageList::Draw(param_3,param_1,*(int *)(param_2 + 0x1c),*ptVar4,1);
    }
    iStack_2c = CMFCTasksPane::GetTasksIconHorzOffset
                          (*(CMFCTasksPane **)(*(int *)(*(int *)(param_2 + 4) + 4) + 8));
    iStack_80 = iStack_2c;
    if (iStack_2c == -1) {
      iStack_80 = *(int *)(this + 0xb8);
    }
    iStack_40 = iStack_28 + iStack_80 + iStack_40;
    uStack_48 = (uint)(*(int *)(param_2 + 0x24) == 0);
    uStack_44 = 0;
    uStack_1c = CDC::GetTextColor(param_1);
    if (uStack_48 == 0) {
      if (*(int *)(param_2 + 0x38) == 0) {
        (**(code **)(*(int *)param_1 + 0x38))(DAT_00c557c0);
        uStack_44 = (**(code **)(*(int *)param_1 + 0x30))(&DAT_00c558a4);
      }
      else if (param_4 == 0) {
        uStack_44 = (**(code **)(*(int *)param_1 + 0x30))(&DAT_00c558a4);
        if (*(int *)(param_2 + 0x44) == -1) {
          uStack_90 = DAT_00c557f8;
        }
        else {
          uStack_90 = *(undefined4 *)(param_2 + 0x44);
        }
        (**(code **)(*(int *)param_1 + 0x38))(uStack_90);
      }
      else {
        uStack_44 = (**(code **)(*(int *)param_1 + 0x30))(&DAT_00c558c4);
        if (*(int *)(param_2 + 0x48) == -1) {
          uStack_8c = DAT_00c557f8;
        }
        else {
          uStack_8c = *(undefined4 *)(param_2 + 0x48);
        }
        (**(code **)(*(int *)param_1 + 0x38))(uStack_8c);
      }
    }
    else {
      if (*(int *)(param_2 + 0x40) == 0) {
        puStack_84 = &DAT_00c558a4;
      }
      else {
        puStack_84 = &DAT_00c558b4;
      }
      uStack_44 = (**(code **)(*(int *)param_1 + 0x30))(puStack_84);
      if (*(int *)(param_2 + 0x44) == -1) {
        uStack_88 = DAT_00c557f8;
      }
      else {
        uStack_88 = *(undefined4 *)(param_2 + 0x44);
      }
      (**(code **)(*(int *)param_1 + 0x38))(uStack_88);
    }
    iStack_20 = CDC::SetBkMode(param_1,1);
    pCStack_18 = *(CObject **)(*(int *)(*(int *)(param_2 + 4) + 4) + 8);
    AfxAssertValidObject
              (pCStack_18,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",
               0x8c5);
    if (uStack_48 == 0) {
      iStack_94 = FID_conflict_IsWrapLabelsEnabled();
    }
    else {
      iStack_94 = FID_conflict_IsWrapLabelsEnabled();
    }
    iStack_14 = iStack_94;
    if (iStack_94 == 0) {
      thunk_FUN_006c9150(param_2 + 8);
      uStack_8 = 0;
      ATL::CStringT<>::Remove(aCStack_58,'\n');
      ATL::CStringT<>::Remove(aCStack_58,'\r');
      uVar2 = 0x8024;
      ptVar5 = (tagRECT *)thunk_FUN_00b31df0();
      CDC::DrawTextA(param_1,aCStack_58,ptVar5,uVar2);
      uStack_8 = 0xffffffff;
      thunk_FUN_006bef70();
    }
    else {
      uVar2 = 0x10;
      ptVar5 = (tagRECT *)thunk_FUN_00b31df0();
      CDC::DrawTextA(param_1,(CStringT<> *)(param_2 + 8),ptVar5,uVar2);
    }
    CDC::SetBkMode(param_1,iStack_20);
    (**(code **)(*(int *)param_1 + 0x30))(uStack_44);
    (**(code **)(*(int *)param_1 + 0x38))(uStack_1c);
  }
  else {
    pCStack_54 = CDC::SelectObject(param_1,(CPen *)&DAT_00c55868);
    CRect::CenterPoint((CRect *)&iStack_40);
    CDC::MoveTo(param_1,(int)auStack_68,iStack_40);
    iVar3 = CRect::CenterPoint((CRect *)&iStack_40);
    CDC::LineTo(param_1,iStack_38,*(int *)(iVar3 + 4));
    CDC::SelectObject(param_1,pCStack_54);
  }
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_30 ^ (uint)&stack0xfffffffc);
  return;
}



undefined ** thunk_FUN_00a30830(void)

{
  return &PTR_thunk_FUN_00869070_00bcde4c;
}



void __thiscall CMFCTasksPane::CreateFonts(CMFCTasksPane *this)

{
  void *pvVar1;
  HFONT__ *pHStack_50;
  tagLOGFONTA tStack_48;
  uint uStack_c;
  CFont *pCStack_8;
  
  uStack_c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  pvVar1 = CGdiObject::GetSafeHandle((CGdiObject *)(this + 0x3c4));
  if (pvVar1 != (void *)0x0) {
    CGdiObject::DeleteObject((CGdiObject *)(this + 0x3c4));
  }
  pvVar1 = CGdiObject::GetSafeHandle((CGdiObject *)(this + 0x3cc));
  if (pvVar1 != (void *)0x0) {
    CGdiObject::DeleteObject((CGdiObject *)(this + 0x3cc));
  }
  pvVar1 = CGdiObject::GetSafeHandle((CGdiObject *)(this + 0x3d4));
  if (pvVar1 != (void *)0x0) {
    CGdiObject::DeleteObject((CGdiObject *)(this + 0x3d4));
  }
  if (*(int *)(this + 0x3c0) == 0) {
    pHStack_50 = (HFONT__ *)GetStockObject(0x11);
  }
  else {
    pHStack_50 = *(HFONT__ **)(this + 0x3c0);
  }
  pCStack_8 = CFont::FromHandle(pHStack_50);
  AfxAssertValidObject
            ((CObject *)pCStack_8,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtaskspane.cpp",0x816);
  _memset(&tStack_48,0,0x3c);
  CFont::GetLogFont(pCStack_8,&tStack_48);
  tStack_48.lfWeight = 700;
  CFont::CreateFontIndirectA((CFont *)(this + 0x3c4),&tStack_48);
  tStack_48.lfUnderline = '\x01';
  CFont::CreateFontIndirectA((CFont *)(this + 0x3cc),&tStack_48);
  tStack_48.lfWeight = 400;
  tStack_48.lfUnderline = '\x01';
  CFont::CreateFontIndirectA((CFont *)(this + 0x3d4),&tStack_48);
  __security_check_cookie(uStack_c ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall CBasePane::StretchPane(CBasePane *this,int param_1,int param_2)

{
  thunk_FUN_00b31090(0,0);
  return param_1;
}



CDockBar * __thiscall thunk_FUN_00834680(CDockBar *param_1,uint param_2)

{
  CDockBar::~CDockBar(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



void __thiscall CDockContext::EndDrag(CDockContext *this)

{
  undefined4 uVar1;
  code *pcVar2;
  CDockBar *this_00;
  int iVar3;
  uint uVar4;
  CPoint *pCVar5;
  CDockContext *pCStack_2c;
  tagRECT tStack_18;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  CancelLoop(this);
  if (*(int *)(this + 0x74) == 0) {
    if ((((*(uint *)(this + 0x78) & 4) == 0) &&
        (((*(uint *)(this + 0x78) & 0xa000) == 0 || (*(int *)(this + 0x7c) != 0)))) &&
       (((*(uint *)(this + 0x78) & 0x5000) == 0 || (*(int *)(this + 0x7c) == 0)))) {
      *(uint *)(this + 0xa4) = *(uint *)(this + 0x70) & 0x40 | 0x1000;
      pCVar5 = CRect::TopLeft((CRect *)(this + 0x58));
      uVar1 = *(undefined4 *)(pCVar5 + 4);
      *(undefined4 *)(this + 0xa8) = *(undefined4 *)pCVar5;
      *(undefined4 *)(this + 0xac) = uVar1;
      CFrameWnd::FloatControlBar
                (*(CFrameWnd **)(this + 0x6c),*(undefined4 *)(this + 0x68),
                 *(undefined4 *)(this + 0xa8),*(undefined4 *)(this + 0xac),
                 *(undefined4 *)(this + 0xa4));
    }
    else {
      *(uint *)(this + 0xa4) = *(uint *)(this + 0x70) & 0x40 | 0x2000;
      pCVar5 = CRect::TopLeft((CRect *)(this + 0x48));
      uVar1 = *(undefined4 *)(pCVar5 + 4);
      *(undefined4 *)(this + 0xa8) = *(undefined4 *)pCVar5;
      *(undefined4 *)(this + 0xac) = uVar1;
      CFrameWnd::FloatControlBar
                (*(CFrameWnd **)(this + 0x6c),*(undefined4 *)(this + 0x68),
                 *(undefined4 *)(this + 0xa8),*(undefined4 *)(this + 0xac),
                 *(undefined4 *)(this + 0xa4));
    }
  }
  else {
    this_00 = GetDockBar(this,*(ulong *)(this + 0x74));
    if (this_00 == (CDockBar *)0x0) {
      iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dockcont.cpp",
                                  0xca);
      if (iVar3 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*(uint *)(this + 0x74) & 0x5000) == 0) {
      pCStack_2c = this + 0x28;
    }
    else {
      pCStack_2c = this + 0x38;
    }
    tStack_18.left = *(LONG *)pCStack_2c;
    tStack_18.top = *(LONG *)(pCStack_2c + 4);
    tStack_18.right = *(LONG *)(pCStack_2c + 8);
    tStack_18.bottom = *(LONG *)(pCStack_2c + 0xc);
    uVar4 = GetDlgCtrlID(*(HWND *)(this_00 + 0x20));
    if ((0xe81a < uVar4) && (uVar4 < 0xe81f)) {
      *(uint *)(this + 0x90) = uVar4;
      *(LONG *)(this + 0x94) = tStack_18.left;
      *(LONG *)(this + 0x98) = tStack_18.top;
      *(LONG *)(this + 0x9c) = tStack_18.right;
      *(LONG *)(this + 0xa0) = tStack_18.bottom;
      CWnd::ScreenToClient((CWnd *)this_00,(tagRECT *)(this + 0x94));
    }
    CFrameWnd::DockControlBar
              (*(CFrameWnd **)(this + 0x6c),*(CControlBar **)(this + 0x68),this_00,&tStack_18);
    (**(code **)(**(int **)(this + 0x6c) + 0x17c))(1);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __thiscall thunk_FUN_00a92a50(undefined4 param_1,uint param_2)

{
  thunk_FUN_00a92a90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



undefined4 __fastcall thunk_FUN_0091d000(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



undefined4 * __fastcall thunk_FUN_00717780(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

void thunk_FUN_006c3f60(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_c4 [48];
  
  puVar2 = auStack_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (void *)0x0) {
    thunk_FUN_006c3fd0(0);
    __msize(param_1);
  }
  return;
}



void __thiscall COleLinkingDoc::OnCloseDocument(COleLinkingDoc *this)

{
  int iVar1;
  
  iVar1 = CDocument::IsSearchAndOrganizeHandler((CDocument *)this);
  if ((iVar1 == 0) || (*(int *)(this + 0x4c) != 0)) {
    CCmdTarget::InternalAddRef((CCmdTarget *)this);
    UpdateVisibleLock(this,0,0);
    Revoke(this);
    if (*(int *)(this + 300) != 0) {
      *(undefined4 *)(this + 300) = 0;
      LockExternal(this,0,0);
    }
    iVar1 = *(int *)(this + 0x9c);
    *(undefined4 *)(this + 0x9c) = 0;
    COleDocument::OnCloseDocument((COleDocument *)this);
    AfxAssertValidObject
              ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olelink.cpp",0xf3)
    ;
    InterlockedDecrement((LONG *)(this + 4));
    if ((iVar1 != 0) && (this != (COleLinkingDoc *)0x0)) {
      (**(code **)(*(int *)this + 4))(1);
    }
  }
  return;
}



CMDIChildWndEx * __thiscall
CMDIClientAreaWnd::FindNextRegisteredWithTaskbarMDIChild
          (CMDIClientAreaWnd *this,CMDIChildWndEx *param_1)

{
  HWND__ *pHVar1;
  int *piVar2;
  int iStack_10;
  CMDIChildWndEx *pCStack_c;
  CMFCTabCtrl *pCStack_8;
  
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmdiclientareawnd.cpp",0x375);
  iStack_10 = -1;
  piVar2 = &iStack_10;
  pHVar1 = (HWND__ *)thunk_FUN_006d9400();
  pCStack_8 = FindTabWndByChild(this,pHVar1,piVar2);
  if (pCStack_8 == (CMFCTabCtrl *)0x0) {
    pCStack_c = (CMDIChildWndEx *)0x0;
  }
  else {
    AfxAssertValidObject
              ((CObject *)pCStack_8,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmdiclientareawnd.cpp",0x37d);
    pCStack_c = FindNextRegisteredWithTaskbarMDIChild(this,pCStack_8,iStack_10 + 1);
    if (pCStack_c == (CMDIChildWndEx *)0x0) {
      while ((pCStack_8 = GetNextTabWnd(this,pCStack_8,1), pCStack_8 != (CMFCTabCtrl *)0x0 &&
             (pCStack_c == (CMDIChildWndEx *)0x0))) {
        AfxAssertValidObject
                  ((CObject *)pCStack_8,
                   "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmdiclientareawnd.cpp",0x386
                  );
        pCStack_c = FindNextRegisteredWithTaskbarMDIChild(this,pCStack_8,0);
      }
    }
  }
  return pCStack_c;
}



undefined4 thunk_FUN_007af4a0(void)

{
  return 0;
}



int __fastcall GetStartPosition(int param_1)

{
  return -(uint)(*(int *)(param_1 + 0xc) != 0);
}



HICON__ * __cdecl COleClientItem::GetIconFromRegistry(_GUID *param_1)

{
  LSTATUS LVar1;
  LPCSTR lpSubKey;
  CWinApp *pCVar2;
  HICON__ *pHVar3;
  DWORD ulOptions;
  REGSAM samDesired;
  char *pcVar4;
  HKEY *phkResult;
  UINT nIconIndex;
  DWORD aDStack_258 [2];
  CStringT<> aCStack_250 [4];
  UINT UStack_24c;
  HRESULT HStack_248;
  wchar_t *pwStack_244;
  BYTE aBStack_240 [268];
  HKEY pHStack_134;
  HKEY pHStack_130;
  HKEY pHStack_12c;
  HICON pHStack_128;
  DWORD DStack_124;
  char acStack_120 [268];
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6e66b;
  pvStack_10 = ExceptionList;
  uStack_14 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  pHStack_128 = (HICON)0x0;
  DStack_124 = 0;
  HStack_248 = StringFromCLSID(param_1,&pwStack_244);
  if (-1 < HStack_248) {
    LVar1 = RegOpenKeyExW((HKEY)0x80000000,L"CLSID",0,0x20019,&pHStack_12c);
    if (LVar1 == 0) {
      ATL::CStringT<>::CStringT<>(aCStack_250,pwStack_244);
      uStack_8 = 0;
      phkResult = &pHStack_130;
      samDesired = 0x20019;
      ulOptions = 0;
      lpSubKey = (LPCSTR)thunk_FUN_006c03b0();
      LVar1 = RegOpenKeyExA(pHStack_12c,lpSubKey,ulOptions,samDesired,phkResult);
      if (LVar1 == 0) {
        LVar1 = RegOpenKeyExW(pHStack_130,L"DefaultIcon",0,0x20019,&pHStack_134);
        if (LVar1 == 0) {
          aDStack_258[1] = 0x105;
          LVar1 = RegQueryValueExA(pHStack_134,(LPCSTR)0x0,(LPDWORD)0x0,&DStack_124,aBStack_240,
                                   aDStack_258 + 1);
          if (LVar1 == 0) {
            AfxGetIconInfo((char *)aBStack_240,acStack_120,&UStack_24c);
            pcVar4 = acStack_120;
            nIconIndex = UStack_24c;
            pCVar2 = AfxGetApp();
            pHStack_128 = ExtractIconA(*(HINSTANCE *)(pCVar2 + 0x44),pcVar4,nIconIndex);
            if (pHStack_128 == (HICON)0x1) {
              pHStack_128 = (HICON)0x0;
            }
          }
          RegCloseKey(pHStack_134);
        }
        RegCloseKey(pHStack_130);
      }
      RegCloseKey(pHStack_12c);
      uStack_8 = 0xffffffff;
      thunk_FUN_006bef70();
    }
    if ((pHStack_128 == (HICON)0x0) &&
       (LVar1 = RegOpenKeyExW((HKEY)0x80000000,L"DocShortcut",0,0x20019,&pHStack_130), LVar1 == 0))
    {
      LVar1 = RegOpenKeyExW(pHStack_130,L"DefaultIcon",0,0x20019,&pHStack_134);
      if (LVar1 == 0) {
        aDStack_258[0] = 0x105;
        LVar1 = RegQueryValueExA(pHStack_134,(LPCSTR)0x0,(LPDWORD)0x0,&DStack_124,aBStack_240,
                                 aDStack_258);
        if (LVar1 == 0) {
          AfxGetIconInfo((char *)aBStack_240,acStack_120,&UStack_24c);
          pcVar4 = acStack_120;
          pCVar2 = AfxGetApp();
          pHStack_128 = ExtractIconA(*(HINSTANCE *)(pCVar2 + 0x44),pcVar4,UStack_24c);
          if (pHStack_128 == (HICON)0x1) {
            pHStack_128 = (HICON)0x0;
          }
        }
        RegCloseKey(pHStack_134);
      }
      RegCloseKey(pHStack_130);
    }
    CoTaskMemFree(pwStack_244);
  }
  ExceptionList = pvStack_10;
  pHVar3 = (HICON__ *)__security_check_cookie(uStack_14 ^ (uint)&stack0xfffffffc);
  return pHVar3;
}



void __thiscall
CMFCVisualManager::OnDrawCheckBox
          (CMFCVisualManager *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  (**(code **)(*(int *)this + 0x1a8))
            (param_1,param_3,param_4,param_5,param_6,param_8 != 0,param_7,0,param_9);
  return;
}



void __thiscall thunk_FUN_00714d20(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4e8cc;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  thunk_FUN_006e4850();
  uStack_8 = 0;
  *param_1 = AFX_MODULE_STATE::vftable;
  thunk_FUN_00715d80(0);
  thunk_FUN_00715db0(0);
  thunk_FUN_006bef10();
  uStack_8._0_1_ = 1;
  thunk_FUN_00715de0(0);
  CTypeLibCache::CTypeLibCache((CTypeLibCache *)(param_1 + 0x13));
  uStack_8._0_1_ = 2;
  CSimpleList::Construct((CSimpleList *)(param_1 + 9),0x20);
  CSimpleList::Construct((CSimpleList *)(param_1 + 7),0x14);
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = param_2;
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  iVar1 = AfxEnableMemoryTracking(0);
  thunk_FUN_00717ab0(0x1000);
  AfxEnableMemoryTracking(iVar1);
  FUN_00714e5e();
  return;
}



undefined4 thunk_FUN_008b23a0(void)

{
  return 0;
}



undefined ** thunk_FUN_009c1f80(void)

{
  return &PTR_s_CMFCShowAllButton_00bc1bd8;
}



int __thiscall CDockingPanesRow::HasPane(CDockingPanesRow *this,CBasePane *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = CObList::Find((CObList *)(this + 0x24),(CObject *)param_1,(__POSITION *)0x0);
  return (uint)(p_Var1 != (__POSITION *)0x0);
}



undefined ** thunk_FUN_00853dc0(void)

{
  return &PTR_s_CMFCPropertyGridFileProperty_00ba914c;
}



int __thiscall AFX_GLOBAL_DATA::IsHighContrastMode(AFX_GLOBAL_DATA *this)

{
  int iStack_c;
  
  if ((*(int *)(this + 0x188) == 0) && (*(int *)(this + 0x184) == 0)) {
    iStack_c = 0;
  }
  else {
    iStack_c = 1;
  }
  return iStack_c;
}



void __thiscall CFile::Flush(CFile *this)

{
  BOOL BVar1;
  undefined4 uVar2;
  DWORD DVar3;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\filecore.cpp",0x178)
  ;
  if ((*(int *)(this + 4) != -1) && (BVar1 = FlushFileBuffers(*(HANDLE *)(this + 4)), BVar1 == 0)) {
    uVar2 = thunk_FUN_006bf040();
    DVar3 = GetLastError();
    ThrowOsError(DVar3,uVar2);
  }
  return;
}



void __thiscall CRecentDockSiteInfo::~CRecentDockSiteInfo(CRecentDockSiteInfo *this)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
  puStack_c = &LAB_00b70683;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 1;
  CRecentPaneContainerInfo::~CRecentPaneContainerInfo((CRecentPaneContainerInfo *)(this + 0x70));
  uStack_8 = uStack_8 & 0xffffff00;
  CRecentPaneContainerInfo::~CRecentPaneContainerInfo((CRecentPaneContainerInfo *)(this + 0x30));
  uStack_8 = 0xffffffff;
  thunk_FUN_006c98a0(uVar1);
  ExceptionList = pvStack_10;
  return;
}



CMiniFrameWnd * __thiscall
CMFCPopupMenu(CMiniFrameWnd *param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b62266;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  CMiniFrameWnd::CMiniFrameWnd(param_1);
  uStack_8 = 0;
  *(undefined ***)param_1 = CMFCPopupMenu::vftable;
  CPoint::CPoint((CPoint *)(param_1 + 0x128));
  CPoint::CPoint((CPoint *)(param_1 + 0x130));
  CSize::CSize((CSize *)(param_1 + 0x138));
  thunk_FUN_006c4270(param_3);
  uStack_8._0_1_ = 1;
  *(undefined4 *)(param_1 + 0x144) = param_2;
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)(param_1 + 0x14c));
  uStack_8._0_1_ = 2;
  CSize::CSize((CSize *)(param_1 + 0xed8));
  thunk_FUN_00b31aa0();
  thunk_FUN_00b31aa0();
  CScrollBar::CScrollBar((CScrollBar *)(param_1 + 0xf28));
  uStack_8._0_1_ = 3;
  CBitmap::CBitmap((CBitmap *)(param_1 + 0xf9c));
  uStack_8._0_1_ = 4;
  CBitmap::CBitmap((CBitmap *)(param_1 + 0xfa4));
  uStack_8._0_1_ = 5;
  CBitmap::CBitmap((CBitmap *)(param_1 + 0xfac));
  uStack_8._0_1_ = 6;
  CBitmap::CBitmap((CBitmap *)(param_1 + 0xfc4));
  uStack_8._0_1_ = 7;
  CBitmap::CBitmap((CBitmap *)(param_1 + 0xfcc));
  uStack_8._0_1_ = 8;
  thunk_FUN_00b31aa0();
  CToolTipCtrl::CToolTipCtrl((CToolTipCtrl *)(param_1 + 0xff0));
  uStack_8 = CONCAT31(uStack_8._1_3_,9);
  CSize::CSize((CSize *)(param_1 + 0x1090));
  CSize::CSize((CSize *)(param_1 + 0x1098));
  thunk_FUN_00b31aa0();
  CMFCPopupMenu::Initialize((CMFCPopupMenu *)param_1);
  ExceptionList = pvStack_10;
  return param_1;
}



CUserTool * __thiscall CUserToolsManager::CreateNewTool(CUserToolsManager *this)

{
  code *pcVar1;
  int iVar2;
  CUserTool *pCVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  CTraceFileAndLineInfo *this_00;
  char *pcVar8;
  int iStack_14;
  int iStack_10;
  CObject *pCStack_c;
  uint uStack_8;
  
  if (*(int *)(this + 0x2c) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxusertoolsmanager.cpp"
                                ,0x72);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar3 = (CUserTool *)(*pcVar1)();
      return pCVar3;
    }
    pCStack_c = (CObject *)0x0;
  }
  else {
    iVar2 = thunk_FUN_006cca30();
    iVar4 = GetMaxTools(this);
    if (iVar2 < iVar4) {
      for (uStack_8 = *(uint *)(this + 0x24); uStack_8 <= *(uint *)(this + 0x28);
          uStack_8 = uStack_8 + 1) {
        iStack_10 = 1;
        iStack_14 = thunk_FUN_006ccba0();
        do {
          if (iStack_14 == 0) goto LAB_008a51b7;
          puVar6 = (undefined4 *)::GetNext(&iStack_14);
          AfxAssertValidObject
                    ((CObject *)*puVar6,
                     "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxusertoolsmanager.cpp",
                     0x87);
          uVar7 = thunk_FUN_008a5290();
        } while (uVar7 != uStack_8);
        iStack_10 = 0;
LAB_008a51b7:
        if (iStack_10 != 0) break;
      }
      if (*(uint *)(this + 0x28) < uStack_8) {
        pCStack_c = (CObject *)0x0;
      }
      else {
        pCStack_c = (CObject *)thunk_FUN_00714560();
        if (pCStack_c == (CObject *)0x0) {
          iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxusertoolsmanager.cpp"
                                      ,0x9e);
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            pCVar3 = (CUserTool *)(*pcVar1)();
            return pCVar3;
          }
          pCStack_c = (CObject *)0x0;
        }
        else {
          AfxAssertValidObject
                    (pCStack_c,
                     "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxusertoolsmanager.cpp",
                     0xa2);
          *(uint *)(pCStack_c + 0x10) = uStack_8;
          CObList::AddTail((CObList *)(this + 4),pCStack_c);
        }
      }
    }
    else {
      iVar2 = GetMaxTools(this);
      pcVar8 = "Too many user-defined tools. The max. number is %d";
      pcVar5 = (char *)thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxusertoolsmanager.cpp"
                                          ,0x78);
      ATL::CTraceFileAndLineInfo::operator()(this_00,pcVar5,pcVar8,iVar2);
      pCStack_c = (CObject *)0x0;
    }
  }
  return (CUserTool *)pCStack_c;
}



int __thiscall
CTreeCtrl::Create(CTreeCtrl *this,ulong param_1,tagRECT *param_2,CWnd *param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = AfxEndDeferRegisterClass(0x80);
  if (iVar2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winctrl2.cpp",
                                0x28d);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  iVar2 = (**(code **)(*(int *)this + 0x5c))("SysTreeView32",0,param_1,param_2,param_3,param_4,0);
  return iVar2;
}



_ITEMIDLIST ** __thiscall CList<>::GetNext(CList<> *this,__POSITION **param_1)

{
  __POSITION *p_Var1;
  code *pcVar2;
  int iVar3;
  _ITEMIDLIST **pp_Var4;
  
  p_Var1 = *param_1;
  iVar3 = AfxIsValidAddress(p_Var1,0xc,1);
  if (iVar3 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x32a)
    ;
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      pp_Var4 = (_ITEMIDLIST **)(*pcVar2)();
      return pp_Var4;
    }
  }
  *param_1 = *(__POSITION **)p_Var1;
  return (_ITEMIDLIST **)(p_Var1 + 8);
}



void __thiscall CPane::OnProcessDblClk(CPane *this)

{
  BOOL BVar1;
  
  this[0x162] = (CPane)0x1;
  (**(code **)(*(int *)this + 0x324))();
  if (this[0x160] != (CPane)0x0) {
    ReleaseCapture();
    this[0x160] = (CPane)0x0;
    (**(code **)(*(int *)this + 0x314))(0);
    if (*(int *)(this + 0x174) != 0) {
      BVar1 = IsWindow(*(HWND *)(this + 0x174));
      if (BVar1 != 0) {
        DestroyWindow(*(HWND *)(this + 0x174));
      }
    }
    *(undefined4 *)(this + 0x174) = 0;
  }
  return;
}



ulong __thiscall COleControlSite::GetDefBtnCode(COleControlSite *this)

{
  ulong uVar1;
  
  if ((*(uint *)(this + 0x70) & 0x1000) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (-(uint)((*(uint *)(this + 0x6c) & 1) != 0) & 0xfffffff0) + 0x20;
  }
  return uVar1;
}



ulong CMFCColorMenuButton::GetColorByCmdID(uint param_1)

{
  ulong uStack_8;
  
  uStack_8 = 0xffffffff;
  ::Lookup(param_1,&uStack_8);
  return uStack_8;
}



void __thiscall CMFCHeaderCtrl::CommonInit(CMFCHeaderCtrl *this)

{
  int iVar1;
  CObject *pCStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxheaderctrl.cpp",
             0x1fc);
  pCStack_8 = (CObject *)CWnd::SetCapture((CWnd *)this);
  while( true ) {
    if (pCStack_8 == (CObject *)0x0) {
      return;
    }
    iVar1 = CObject::IsKindOf(pCStack_8,(CRuntimeClass *)&PTR_s_CDialog_00b8bcc4);
    if (iVar1 != 0) break;
    pCStack_8 = (CObject *)CWnd::SetCapture((CWnd *)pCStack_8);
  }
  *(undefined4 *)(this + 0xa0) = 1;
  return;
}



void __thiscall CMFCTasksPane::~CMFCTasksPane(CMFCTasksPane *this)

{
  uint uVar1;
  int iVar2;
  CObject *pCVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  puStack_c = &LAB_00b77aa2;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  iStack_8 = 0xb;
  while (iVar2 = CObList::IsEmpty((CObList *)(this + 0x44c)), iVar2 == 0) {
    pCVar3 = CObList::RemoveHead((CObList *)(this + 0x44c));
    if (pCVar3 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar3 + 4))(1);
    }
  }
  iStack_8._0_1_ = 10;
  thunk_FUN_00a643f0(uVar1);
  iStack_8._0_1_ = 9;
  CArray<int,int>::~CArray<int,int>((CArray<int,int> *)(this + 0x504));
  iStack_8._0_1_ = 8;
  thunk_FUN_0078e9a0();
  iStack_8._0_1_ = 7;
  CScrollBar::~CScrollBar((CScrollBar *)(this + 0x488));
  iStack_8._0_1_ = 6;
  thunk_FUN_006bef70();
  iStack_8._0_1_ = 5;
  CObList::~CObList((CObList *)(this + 0x468));
  iStack_8._0_1_ = 4;
  CObList::~CObList((CObList *)(this + 0x44c));
  iStack_8._0_1_ = 3;
  CMenu::~CMenu((CMenu *)(this + 0x43c));
  iStack_8._0_1_ = 2;
  thunk_FUN_006e6100();
  iStack_8._0_1_ = 1;
  thunk_FUN_006e6100();
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  thunk_FUN_006e6100();
  iStack_8 = 0xffffffff;
  thunk_FUN_00904d10();
  ExceptionList = pvStack_10;
  return;
}



ulong ATL::AtlAlignUp<>(ulong param_1,ulong param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1);
}



undefined4 __thiscall thunk_FUN_00a481e0(undefined4 param_1,uint param_2)

{
  ~CArray<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



int __fastcall GetStartPosition(int param_1)

{
  return -(uint)(*(int *)(param_1 + 0xc) != 0);
}



int __thiscall
CWinApp::WriteProfileBinary(CWinApp *this,char *param_1,char *param_2,uchar *param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  HKEY__ *hKey;
  uint uVar3;
  LSTATUS LVar4;
  int iVar5;
  uint uStack_8;
  
  if (param_1 == (char *)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\appui3.cpp",0x15f
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  if (*(int *)(this + 0x58) == 0) {
    iVar2 = thunk_FUN_006c4cb0(param_4 * 2 + 1);
    for (uStack_8 = 0; uStack_8 < param_4; uStack_8 = uStack_8 + 1) {
      *(byte *)(iVar2 + uStack_8 * 2) = (param_3[uStack_8] & 0xf) + 0x41;
      *(char *)(iVar2 + 1 + uStack_8 * 2) = (char)((int)(uint)param_3[uStack_8] >> 4) + 'A';
    }
    *(undefined1 *)(iVar2 + uStack_8 * 2) = 0;
    if (*(int *)(this + 0x6c) == 0) {
      iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\appui3.cpp",
                                  0x176);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
    uVar3 = (**(code **)(*(int *)this + 0x90))(param_1,param_2,iVar2);
    abs(iVar2);
  }
  else {
    hKey = GetSectionKey(this,param_1,(CAtlTransactionManager *)0x0);
    if (hKey == (HKEY__ *)0x0) {
      uVar3 = 0;
    }
    else {
      LVar4 = RegSetValueExA(hKey,param_2,0,3,param_3,param_4);
      RegCloseKey(hKey);
      uVar3 = (uint)(LVar4 == 0);
    }
  }
  return uVar3;
}



CMFCVisualManagerBitmapCacheItem * __thiscall
CMFCVisualManagerBitmapCache::CMFCVisualManagerBitmapCacheItem::CMFCVisualManagerBitmapCacheItem
          (CMFCVisualManagerBitmapCacheItem *this)

{
  *(undefined ***)this = vftable;
  CMFCToolBarImages::CMFCToolBarImages((CMFCToolBarImages *)(this + 4));
  *(undefined4 *)(this + 0x110) = 0;
  return this;
}



int __thiscall CPropertyPage::OnApply(CPropertyPage *this)

{
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgprop.cpp",0x14f);
  (**(code **)(*(int *)this + 0x184))();
  return 1;
}



CPoint * __thiscall CDC::GetViewportOrg(CDC *this)

{
  code *pcVar1;
  tagPOINT tVar2;
  int iVar3;
  CPoint *pCVar4;
  BOOL BVar5;
  CPoint *in_stack_00000004;
  tagPOINT tStack_c;
  
  if (*(int *)(this + 8) == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin1.inl",0x191
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar4 = (CPoint *)(*pcVar1)();
      return pCVar4;
    }
  }
  BVar5 = GetViewportOrgEx(*(HDC *)(this + 8),&tStack_c);
  if (BVar5 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin1.inl",0x193
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar4 = (CPoint *)(*pcVar1)();
      return pCVar4;
    }
  }
  tVar2.y = tStack_c.y;
  tVar2.x = tStack_c.x;
  CPoint::CPoint(in_stack_00000004,tVar2);
  return in_stack_00000004;
}



int __cdecl __fpclass(double _X)

{
  int iVar1;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype(_X);
    if (iVar1 == 1) {
      iVar1 = 0x200;
    }
    else if (iVar1 == 2) {
      iVar1 = 4;
    }
    else if (iVar1 == 3) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  else if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
          ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    iVar1 = (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  else if (NAN(_X) == (_X == 0.0)) {
    iVar1 = (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
  }
  else {
    iVar1 = (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return iVar1;
}



undefined4 thunk_FUN_0084c080(void)

{
  return 1;
}



int CMFCCustomizeMenuButton::SetParentToolbar(CMFCToolBar *param_1)

{
  DAT_00c59410 = param_1;
  return 1;
}



void __fastcall thunk_FUN_009ada10(undefined4 param_1)

{
  thunk_FUN_009ada30(param_1);
  return;
}



void __thiscall CDockablePane::OnTimer(CDockablePane *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  CPaneDivider *this_00;
  int iStack_8;
  
  if (param_1 == 1) {
    iStack_8 = 0;
    *(undefined4 *)(this + 0x310) = 1;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        CWnd::OnTimer((CWnd *)this,param_1);
        return;
      }
      iVar1 = (**(code **)(*(int *)this + 0x3a0))();
      if (iVar1 == 0) {
        return;
      }
      CWnd::KillTimer((CWnd *)this,*(uint *)(this + 0x2e8));
      *(undefined4 *)(this + 0x2e8) = 0;
      return;
    }
    iStack_8 = 1;
    *(undefined4 *)(this + 0x310) = 0;
  }
  (**(code **)(*(int *)this + 0x3a8))(iStack_8);
  iVar1 = (**(code **)(*(int *)this + 0x3a4))(iStack_8);
  if (iVar1 != 0) {
    CWnd::KillTimer((CWnd *)this,*(uint *)(this + 0x2ec));
    *(undefined4 *)(this + 0x308) = 0;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(undefined4 *)(this + 0x2f0) = 0;
    if (iStack_8 == 0) {
      CWnd::ShowWindow((CWnd *)this,0);
      this_00 = GetDefaultPaneDivider(this);
      AfxAssertValidObject
                ((CObject *)this_00,
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockablepane.cpp",0x4dc);
      CPaneDivider::ShowWindow(this_00,0);
    }
    else {
      CWnd::RedrawWindow((CWnd *)this,(tagRECT *)0x0,(CRgn *)0x0,0x585);
      RedrawWindow(*(HWND *)(this + 0x33c),(RECT *)0x0,(HRGN)0x0,1);
      if (*(int *)(this + 0x2e8) != 0) {
        CWnd::KillTimer((CWnd *)this,*(uint *)(this + 0x2e8));
      }
      uVar2 = CWnd::SetTimer((CWnd *)this,3,DAT_00c465ec,
                             (_func_void_HWND___ptr_uint_uint_ulong *)0x0);
      *(uint *)(this + 0x2e8) = uVar2;
    }
  }
  CWnd::OnTimer((CWnd *)this,param_1);
  return;
}



COleIPFrameWndEx * __thiscall COleIPFrameWndEx::COleIPFrameWndEx(COleIPFrameWndEx *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b444;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  COleIPFrameWnd::COleIPFrameWnd((COleIPFrameWnd *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  CFrameImpl::CFrameImpl((CFrameImpl *)(this + 0x198),(CFrameWnd *)this);
  uStack_8._0_1_ = 1;
  CDockingManager::CDockingManager((CDockingManager *)(this + 0x29c));
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  CDockingManager::Create((CDockingManager *)(this + 0x29c),(CFrameWnd *)this);
  ExceptionList = pvStack_10;
  return this;
}



CComCtlWrapper * __thiscall CComCtlWrapper::CComCtlWrapper(CComCtlWrapper *this)

{
  uint uVar1;
  CStringT<> aCStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4e9f0;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  thunk_FUN_006c4270("comctl32.dll");
  uStack_8 = 0;
  CDllIsolationWrapperBase::CDllIsolationWrapperBase((CDllIsolationWrapperBase *)this,aCStack_14);
  uStack_8 = CONCAT31(uStack_8._1_3_,2);
  thunk_FUN_006bef70(uVar1);
  *(undefined ***)this = vftable;
  thunk_FUN_007168a0();
  thunk_FUN_007168c0();
  thunk_FUN_007168e0();
  thunk_FUN_00716900();
  thunk_FUN_00716920();
  thunk_FUN_00716940();
  thunk_FUN_00716960();
  thunk_FUN_00716980();
  thunk_FUN_007169a0();
  thunk_FUN_007169c0();
  thunk_FUN_007169e0();
  thunk_FUN_00716a00();
  thunk_FUN_00716a20();
  thunk_FUN_00716a40();
  thunk_FUN_00716a60();
  thunk_FUN_00716a80();
  thunk_FUN_00716aa0();
  thunk_FUN_00716ac0();
  thunk_FUN_00716ae0();
  thunk_FUN_00716b00();
  thunk_FUN_00716b20();
  thunk_FUN_00716b40();
  thunk_FUN_00716b60();
  thunk_FUN_00716b80();
  thunk_FUN_00716ba0();
  thunk_FUN_00716bc0();
  thunk_FUN_00716be0();
  thunk_FUN_00716c00();
  thunk_FUN_00716c20();
  thunk_FUN_00716c40();
  thunk_FUN_00716c60();
  thunk_FUN_00716c80();
  thunk_FUN_00716ca0();
  thunk_FUN_00716cc0();
  thunk_FUN_00716ce0();
  thunk_FUN_00716d00();
  thunk_FUN_00716d20();
  thunk_FUN_00716d40();
  thunk_FUN_00716d60();
  thunk_FUN_00716d80();
  thunk_FUN_00716da0();
  thunk_FUN_00716dc0();
  thunk_FUN_00716de0();
  thunk_FUN_00716e00();
  thunk_FUN_00716e20();
  thunk_FUN_00716e40();
  thunk_FUN_00716e60();
  thunk_FUN_00716e80();
  thunk_FUN_00716ea0();
  thunk_FUN_00716ec0();
  thunk_FUN_00716ee0();
  thunk_FUN_00716f00();
  thunk_FUN_00716f20();
  thunk_FUN_00716f40();
  thunk_FUN_00716f60();
  thunk_FUN_00716f80();
  thunk_FUN_00716fa0();
  thunk_FUN_00716fc0();
  thunk_FUN_00716fe0();
  thunk_FUN_00717000();
  thunk_FUN_00717020();
  thunk_FUN_00717040();
  thunk_FUN_00717060();
  thunk_FUN_00717080();
  thunk_FUN_007170a0();
  thunk_FUN_007170c0();
  thunk_FUN_007170e0();
  thunk_FUN_00717100();
  thunk_FUN_00717120();
  thunk_FUN_00717140();
  thunk_FUN_00717160();
  thunk_FUN_00717180();
  thunk_FUN_007171a0();
  thunk_FUN_007171c0();
  thunk_FUN_007171e0();
  thunk_FUN_00717200();
  thunk_FUN_00717220();
  thunk_FUN_00717240();
  thunk_FUN_00717260();
  thunk_FUN_00717280();
  thunk_FUN_007172a0();
  thunk_FUN_007172c0();
  thunk_FUN_007172e0();
  thunk_FUN_00717300();
  thunk_FUN_00717320();
  thunk_FUN_00717340();
  thunk_FUN_00717360();
  thunk_FUN_00717380();
  thunk_FUN_007173a0();
  thunk_FUN_007173c0();
  thunk_FUN_007173e0();
  thunk_FUN_00717400();
  thunk_FUN_00717420();
  thunk_FUN_00717440();
  ExceptionList = pvStack_10;
  return this;
}



void __thiscall
CDragListBox::Dropped(CDragListBox *this,uint param_1,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_1c [4];
  uint uStack_18;
  ulong uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b53438;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uVar3 = CWnd::GetExStyle((CWnd *)this);
  if ((((uVar3 & 0x30) != 0) && (uVar3 = CWnd::GetExStyle((CWnd *)this), (uVar3 & 0x40) == 0)) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winctrl2.cpp",
                                  0x38), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*(int *)this + 0x184))(0xffffffff,uVar2);
  uStack_18 = ItemFromPt(this,param_3,param_4,1);
  if (((param_1 != 0xffffffff) && (uStack_18 != 0xffffffff)) &&
     ((uStack_18 != param_1 && (uStack_18 != param_1 + 1)))) {
    thunk_FUN_006bef10();
    uStack_8 = 0;
    GetText(param_1,auStack_1c);
    uStack_14 = CListBox::GetItemData((CListBox *)this,param_1);
    CListBox::DeleteString((CListBox *)this,param_1);
    if ((int)param_1 < (int)uStack_18) {
      uStack_18 = uStack_18 - 1;
    }
    uVar5 = thunk_FUN_006bf040();
    uStack_18 = InsertString(uStack_18,uVar5);
    CListBox::SetItemData((CListBox *)this,uStack_18,uStack_14);
    CListBox::SetCurSel((CListBox *)this,uStack_18);
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
  }
  ExceptionList = pvStack_10;
  return;
}



void __fastcall thunk_FUN_0085e650(undefined4 param_1)

{
  thunk_FUN_006bf040(param_1);
  return;
}



void __thiscall CMFCRibbonTab::OnLButtonDown(CMFCRibbonTab *this)

{
  CMFCRibbonBar *pCVar1;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",0xea);
  AfxAssertValidObject
            (*(CObject **)(this + 0x2c),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",0xeb);
  pCVar1 = CMFCRibbonCategory::GetParentRibbonBar(*(CMFCRibbonCategory **)(this + 0x2c));
  (**(code **)(*(int *)pCVar1 + 0x334))(*(undefined4 *)(this + 0x2c),0);
  return;
}



int __thiscall CMFCRibbonBar::GetKeyboardNavigationLevel(CMFCRibbonBar *this)

{
  return *(int *)(this + 0x2c0);
}



void __thiscall CArray<>::~CArray<>(CArray<> *this)

{
  uint uVar1;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00b76ad8;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *(undefined ***)this = vftable;
  uStack_8 = 0;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x162);
  if (*(int *)(this + 4) != 0) {
    for (iStack_14 = 0; iStack_14 < *(int *)(this + 8); iStack_14 = iStack_14 + 1) {
    }
    abs(*(long *)(this + 4));
  }
  uStack_8 = 0xffffffff;
  thunk_FUN_006c98a0(uVar1);
  ExceptionList = pvStack_10;
  return;
}



__POSITION * __thiscall CList<>::AddTail(CList<> *this,CMDIChildWndEx *param_1)

{
  __POSITION *p_Var1;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x3c4);
  p_Var1 = (__POSITION *)::NewNode(*(undefined4 *)(this + 8),0);
  *(CMDIChildWndEx **)(p_Var1 + 8) = param_1;
  if (*(int *)(this + 8) == 0) {
    *(__POSITION **)(this + 4) = p_Var1;
  }
  else {
    **(int **)(this + 8) = (int)p_Var1;
  }
  *(__POSITION **)(this + 8) = p_Var1;
  return p_Var1;
}



void * __thiscall NewAssoc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  CPlex *this;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  int iStack_24;
  void *pvStack_1c;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b642c1;
  pvStack_10 = ExceptionList;
  uVar3 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  if (*(int *)(param_1 + 0x10) == 0) {
    this = CPlex::Create((CPlex **)(param_1 + 0x14),*(uint *)(param_1 + 0x18),0x10);
    pvStack_1c = CPlex::data(this);
    pvStack_1c = (void *)((*(int *)(param_1 + 0x18) + -1) * 0x10 + (int)pvStack_1c);
    iStack_24 = *(int *)(param_1 + 0x18);
    while (iStack_24 = iStack_24 + -1, -1 < iStack_24) {
      *(undefined4 *)((int)pvStack_1c + 8) = *(undefined4 *)(param_1 + 0x10);
      *(void **)(param_1 + 0x10) = pvStack_1c;
      pvStack_1c = (void *)((int)pvStack_1c + -0x10);
    }
  }
  bVar6 = *(int *)(param_1 + 0x10) == 0;
  if ((bVar6) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x5d7), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar2)();
    return pvVar5;
  }
  if (bVar6) {
    thunk_FUN_007113e0(uVar3);
  }
  pvVar5 = *(void **)(param_1 + 0x10);
  uVar1 = *(undefined4 *)((int)pvVar5 + 8);
  _memset(pvVar5,0,0x10);
  *(undefined4 *)((int)pvVar5 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  if ((*(int *)(param_1 + 0xc) < 1) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x5e2), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar2)();
    return pvVar5;
  }
  iVar4 = thunk_FUN_006be700(0x10,pvVar5);
  uStack_8 = 0;
  if (iVar4 != 0) {
    thunk_FUN_008eb110(param_2);
  }
  ExceptionList = pvStack_10;
  return pvVar5;
}



int __thiscall CMFCRibbonGalleryIcon::IsAutoRepeatMode(CMFCRibbonGalleryIcon *this,int *param_1)

{
  int iStack_c;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpalettegallery.cpp",0x10c);
  if ((*(int *)(this + 0x168) == -1) || (*(int *)(this + 0x168) == -2)) {
    iStack_c = 1;
  }
  else {
    iStack_c = 0;
  }
  return iStack_c;
}



int __thiscall CMFCPopupMenu::IsQuickCustomize(CMFCPopupMenu *this)

{
  return *(int *)(this + 0x10b0);
}



void __thiscall CControlBar::DoPaint(CControlBar *this,CDC *param_1)

{
  tagPOINT *ptVar1;
  undefined1 auStack_18 [16];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\barcore.cpp",0x37c);
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\barcore.cpp",
             0x37d);
  thunk_FUN_00b31aa0();
  ptVar1 = (tagPOINT *)thunk_FUN_00b31df0();
  CWnd::ScreenToClient((CWnd *)this,ptVar1);
  (**(code **)(*(int *)this + 0x17c))(param_1,auStack_18);
  (**(code **)(*(int *)this + 0x180))(param_1,auStack_18);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall CMFCStandardColorsPropertyPage::OnInitDialog(CMFCStandardColorsPropertyPage *this)

{
  uint uVar1;
  CPalette *pCVar2;
  tagPOINT *ptVar3;
  tagRECT *ptVar4;
  int iVar5;
  undefined4 uStack_18;
  
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  CDialog::OnInitDialog((CDialog *)this);
  pCVar2 = CMFCColorDialog::GetPalette(*(CMFCColorDialog **)(this + 0xa8));
  CMFCColorPickerCtrl::SetPalette((CMFCColorPickerCtrl *)(this + 0xac),pCVar2);
  CMFCColorPickerCtrl::SetType((CMFCColorPickerCtrl *)(this + 0xac),3);
  pCVar2 = CMFCColorDialog::GetPalette(*(CMFCColorDialog **)(this + 0xa8));
  CMFCColorPickerCtrl::SetPalette((CMFCColorPickerCtrl *)(this + 0x168),pCVar2);
  CMFCColorPickerCtrl::SetType((CMFCColorPickerCtrl *)(this + 0x168),4);
  thunk_FUN_00b31aa0();
  ptVar3 = (tagPOINT *)thunk_FUN_00b31df0();
  CWnd::ClientToScreen((CWnd *)(this + 0xac),ptVar3);
  ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
  CWnd::ScreenToClient((CWnd *)this,ptVar4);
  *(undefined4 *)(this + 0x224) = uStack_18;
  iVar5 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar5;
}



void * __thiscall CBasePane::MoveWindow(CBasePane *this,CRect *param_1,int param_2,void *param_3)

{
  tagPOINT *ptVar1;
  int iVar2;
  CWnd *this_00;
  tagRECT *ptVar3;
  int cy;
  int cx;
  HWND hWnd;
  void *pvVar4;
  HWND hWndInsertAfter;
  int x;
  UINT uFlags;
  CRect aCStack_18 [16];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  thunk_FUN_00b31aa0();
  ptVar1 = (tagPOINT *)thunk_FUN_00b31df0();
  CWnd::ClientToScreen((CWnd *)this,ptVar1);
  iVar2 = (**(code **)(*(int *)this + 0x174))();
  if (iVar2 == 0) {
    if (*(int *)(this + 0x98) != 0) {
      ptVar3 = (tagRECT *)thunk_FUN_00b31df0();
      CWnd::ScreenToClient(*(CWnd **)(this + 0x98),ptVar3);
    }
  }
  else {
    this_00 = (CWnd *)(**(code **)(*(int *)this + 0x22c))(0);
    AfxAssertValidObject
              ((CObject *)this_00,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasepane.cpp",0x14a);
    ptVar3 = (tagRECT *)thunk_FUN_00b31df0();
    CWnd::ScreenToClient(this_00,ptVar3);
  }
  iVar2 = CRect::operator==(aCStack_18,(tagRECT *)param_1);
  if (iVar2 == 0) {
    if (param_3 == (void *)0x0) {
      CWnd::MoveWindow((CWnd *)this,(tagRECT *)param_1,param_2);
    }
    else {
      uFlags = 0x14;
      cy = thunk_FUN_00b31c60();
      cx = thunk_FUN_00b31c40();
      iVar2 = *(int *)(param_1 + 4);
      x = *(int *)param_1;
      hWndInsertAfter = (HWND)0x0;
      hWnd = (HWND)thunk_FUN_006d9400();
      DeferWindowPos(param_3,hWnd,hWndInsertAfter,x,iVar2,cx,cy,uFlags);
    }
  }
  pvVar4 = (void *)__security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pvVar4;
}



void __thiscall
CMFCVisualManager::GetRibbonSliderColors
          (CMFCVisualManager *this,CMFCRibbonSlider *param_1,int param_2,int param_3,int param_4,
          ulong *param_5,ulong *param_6)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_4 == 0) {
    uStack_c = DAT_00c557e8;
  }
  else {
    uStack_c = DAT_00c557e0;
  }
  *param_5 = uStack_c;
  if ((param_3 == 0) || (param_2 == 0)) {
    if (param_2 == 0) {
      uStack_14 = DAT_00c557dc;
    }
    else {
      uStack_14 = DAT_00c557e4;
    }
    uStack_10 = uStack_14;
  }
  else {
    uStack_10 = DAT_00c557e0;
  }
  *param_6 = uStack_10;
  return;
}



void CreateControl(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 extraout_var;
  CControlCreationInfo aCStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  CControlCreationInfo::CControlCreationInfo(aCStack_20);
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  thunk_FUN_00772280(param_1,param_2,aCStack_20,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,param_10,param_11,extraout_var);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall CMFCRibbonCustomizePropertyPage::OnInitDialog(CMFCRibbonCustomizePropertyPage *this)

{
  CWnd *pCVar1;
  CObject *pCVar2;
  char *pcVar3;
  CMFCRibbonCustomizeCategory **ppCVar4;
  undefined4 uVar5;
  int iVar6;
  CStringT<> aCStack_74 [4];
  CStringT<> aCStack_70 [4];
  int iStack_6c;
  char acStack_64 [4];
  int iStack_60;
  CMFCRibbonCategory *pCStack_5c;
  int iStack_58;
  CMFCRibbonCategory *pCStack_54;
  int iStack_50;
  CObject *pCStack_4c;
  int iStack_48;
  __POSITION *p_Stack_44;
  CStringT<> aCStack_40 [4];
  CList<> aCStack_3c [28];
  int iStack_20;
  int iStack_18;
  CMFCRibbonCategory *pCStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b75918;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  CMFCPropertyPage::OnInitDialog((CMFCPropertyPage *)this);
  AfxAssertValidObject
            (*(CObject **)(this + 0x11cc),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncustomizedialog.cpp",0xf0);
  thunk_FUN_006c4270("----------");
  iStack_8 = 0;
  pCVar1 = CWnd::SetCapture((CWnd *)this);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonCustomizeDialog_00bcf1ac,
                              (CObject *)pCVar1);
  if (pCVar2 != (CObject *)0x0) {
    thunk_FUN_006bef10();
    iStack_8._0_1_ = 1;
    CWnd::GetWindowTextA((CWnd *)this,aCStack_40);
    pcVar3 = (char *)thunk_FUN_006bf040();
    pCVar1 = CWnd::SetCapture((CWnd *)this);
    CWnd::SetWindowTextA(pCVar1,pcVar3);
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    thunk_FUN_006bef70();
  }
  CMFCButton::SetStdImage((CMFCButton *)(this + 0x21c),0x18,0,0);
  CMFCButton::SetStdImage((CMFCButton *)(this + 0x96c),0xd,0,0);
  p_Stack_44 = (__POSITION *)thunk_FUN_00a4e9d0();
  while (p_Stack_44 != (__POSITION *)0x0) {
    ppCVar4 = CList<>::GetNext((CList<> *)(this + 0x11d0),&p_Stack_44);
    pCStack_4c = (CObject *)*ppCVar4;
    AfxAssertValidObject
              (pCStack_4c,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncustomizedialog.cpp",
               0x105);
    uVar5 = thunk_FUN_006bf040();
    iStack_48 = AddString(uVar5);
    CComboBox::SetItemData((CComboBox *)(this + 0x1a8),iStack_48,(ulong)pCStack_4c);
  }
  iVar6 = CComboBox::GetCount((CComboBox *)(this + 0x1a8));
  if (0 < iVar6) {
    uVar5 = thunk_FUN_006bf040();
    AddString(uVar5);
  }
  pCStack_14 = CMFCRibbonBar::GetMainCategory(*(CMFCRibbonBar **)(this + 0x11cc));
  if (pCStack_14 != (CMFCRibbonCategory *)0x0) {
    AfxAssertValidObject
              ((CObject *)pCStack_14,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncustomizedialog.cpp",
               0x116);
    uVar5 = thunk_FUN_00a4dee0();
    iStack_50 = AddString(uVar5);
    CComboBox::SetItemData((CComboBox *)(this + 0x1a8),iStack_50,(ulong)pCStack_14);
    uVar5 = thunk_FUN_006bf040();
    AddString(uVar5);
  }
  iStack_20 = 0;
  iStack_18 = 0;
  while( true ) {
    iVar6 = CMFCRibbonBar::GetCategoryCount(*(CMFCRibbonBar **)(this + 0x11cc));
    if (iVar6 <= iStack_18) break;
    pCStack_54 = CMFCRibbonBar::GetCategory(*(CMFCRibbonBar **)(this + 0x11cc),iStack_18);
    AfxAssertValidObject
              ((CObject *)pCStack_54,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncustomizedialog.cpp",
               0x126);
    iVar6 = thunk_FUN_0095d160();
    if (iVar6 == 0) {
      uVar5 = thunk_FUN_00a4dee0();
      iStack_58 = AddString(uVar5);
      CComboBox::SetItemData((CComboBox *)(this + 0x1a8),iStack_58,(ulong)pCStack_54);
    }
    else {
      iStack_20 = 1;
    }
    iStack_18 = iStack_18 + 1;
  }
  if (iStack_20 != 0) {
    uVar5 = thunk_FUN_006bf040();
    AddString(uVar5);
    iStack_18 = 0;
    while( true ) {
      iVar6 = CMFCRibbonBar::GetCategoryCount(*(CMFCRibbonBar **)(this + 0x11cc));
      if (iVar6 <= iStack_18) break;
      pCStack_5c = CMFCRibbonBar::GetCategory(*(CMFCRibbonBar **)(this + 0x11cc),iStack_18);
      AfxAssertValidObject
                ((CObject *)pCStack_5c,
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncustomizedialog.cpp",
                 0x13d);
      iStack_60 = thunk_FUN_0095d160();
      if (iStack_60 != 0) {
        thunk_FUN_006bef10();
        iStack_8._0_1_ = 2;
        thunk_FUN_006bef10();
        iStack_8._0_1_ = 3;
        iVar6 = GetContextName(iStack_60,acStack_64);
        if (iVar6 == 0) {
          uVar5 = thunk_FUN_00a4dee0();
          thunk_FUN_006bf0e0(uVar5);
        }
        else {
          thunk_FUN_00a4dee0();
          pcVar3 = (char *)ATL::operator+(aCStack_70,acStack_64);
          iStack_8._0_1_ = 4;
          uVar5 = ATL::operator+(aCStack_74,pcVar3);
          iStack_8._0_1_ = 5;
          thunk_FUN_006c9180(uVar5);
          iStack_8._0_1_ = 4;
          thunk_FUN_006bef70();
          iStack_8._0_1_ = 3;
          thunk_FUN_006bef70();
        }
        uVar5 = thunk_FUN_006bf040();
        iStack_6c = AddString(uVar5);
        CComboBox::SetItemData((CComboBox *)(this + 0x1a8),iStack_6c,(ulong)pCStack_5c);
        iStack_8._0_1_ = 2;
        thunk_FUN_006bef70();
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        thunk_FUN_006bef70();
      }
      iStack_18 = iStack_18 + 1;
    }
  }
  iVar6 = CComboBox::GetCount((CComboBox *)(this + 0x1a8));
  if (0 < iVar6) {
    *(undefined4 *)(this + 0x11c4) = 0;
    thunk_FUN_006fd000(0);
    OnSelendokCategoryCombo(this);
  }
  CList<>::CList<>(aCStack_3c,10);
  iStack_8._0_1_ = 6;
  CMFCRibbonBar::GetQuickAccessCommands(*(CMFCRibbonBar **)(this + 0x11cc),aCStack_3c);
  CMFCRibbonCommandsListBox::FillFromIDs((CMFCRibbonCommandsListBox *)(this + 0x1140),aCStack_3c,0);
  OnSelchangeQATCommands(this);
  iStack_8 = (uint)iStack_8._1_3_ << 8;
  CList<>::~CList<>(aCStack_3c);
  iStack_8 = 0xffffffff;
  thunk_FUN_006bef70();
  ExceptionList = pvStack_10;
  return 1;
}



uint __thiscall CMFCBaseTabCtrl::GetTabIcon(CMFCBaseTabCtrl *this,int param_1)

{
  uint uVar1;
  CObject *pCVar2;
  
  if ((param_1 < 0) || (*(int *)(this + 0x9c) <= param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    pCVar2 = (CObject *)CPtrArray::operator[]((CPtrArray *)(this + 0x88),param_1);
    AfxAssertValidObject
              (pCVar2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasetabctrl.cpp",0x2ff);
    uVar1 = *(uint *)(pCVar2 + 8);
  }
  return uVar1;
}



void __thiscall thunk_FUN_00853300(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xde8) = param_2;
  return;
}



void __thiscall CPaneContainer::Serialize(CPaneContainer *this,CArchive *param_1)

{
  int iVar1;
  CDockablePane *pCVar2;
  CObject *pCVar3;
  CPaneContainer *pCVar4;
  undefined4 uVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b65d48;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  thunk_FUN_006c98c0(param_1);
  iVar1 = CArchive::IsStoring(param_1);
  if (iVar1 == 0) {
    CArchive::operator>>(param_1,(uint *)(this + 0x24));
    if (*(int *)(this + 0x24) == -1) {
      pCVar2 = LoadTabbedPane(this,param_1,(CList<> *)(this + 100));
      *(CDockablePane **)(this + 4) = pCVar2;
    }
    CArchive::operator>>(param_1,(uint *)(this + 0x28));
    if (*(int *)(this + 0x28) == -1) {
      pCVar2 = LoadTabbedPane(this,param_1,(CList<> *)(this + 0x80));
      *(CDockablePane **)(this + 8) = pCVar2;
    }
    CArchive::operator>>(param_1,(uint *)(this + 0x2c));
    if (*(int *)(this + 0x2c) != 0) {
      pCVar3 = (CObject *)thunk_FUN_00714560();
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_00bb5cd0,pCVar3);
      *(CObject **)(this + 0xc) = pCVar3;
      AfxAssertValidObject
                (*(CObject **)(this + 0xc),
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainer.cpp",0x93d);
      CPaneDivider::Init(*(CPaneDivider **)(this + 0xc),0,*(CWnd **)(*(int *)(this + 0x1c) + 0x4c));
      (**(code **)(**(int **)(this + 0xc) + 8))(param_1);
      CPaneDivider::SetPaneContainerManager
                (*(CPaneDivider **)(this + 0xc),*(CPaneContainerManager **)(this + 0x1c));
      CObList::AddTail((CObList *)(*(int *)(this + 0x1c) + 0x20),*(CObject **)(this + 0xc));
    }
    iStack_24 = 0;
    CArchive::operator>>(param_1,&iStack_24);
    iStack_1c = thunk_FUN_00920530();
    if (iStack_24 != 0) {
      if (iStack_1c == 0) {
        pCVar4 = (CPaneContainer *)
                 CObject::operator_new
                           (0x9c,
                            "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainer.cpp"
                            ,0x94e);
        uStack_8 = 0;
        if (pCVar4 == (CPaneContainer *)0x0) {
          uStack_3c = 0;
        }
        else {
          uStack_3c = CPaneContainer(pCVar4,*(CPaneContainerManager **)(this + 0x1c),
                                     (CDockablePane *)0x0,(CDockablePane *)0x0,(CPaneDivider *)0x0);
        }
        uStack_8 = 0xffffffff;
        *(undefined4 *)(this + 0x10) = uStack_3c;
      }
      else {
        uVar5 = thunk_FUN_00714560();
        *(undefined4 *)(this + 0x10) = uVar5;
        SetPaneContainerManager
                  (*(CPaneContainer **)(this + 0x10),*(CPaneContainerManager **)(this + 0x1c),0);
      }
      (**(code **)(**(int **)(this + 0x10) + 8))(param_1);
      SetParentPaneContainer(*(CPaneContainer **)(this + 0x10),this);
    }
    iStack_20 = 0;
    CArchive::operator>>(param_1,&iStack_20);
    if (iStack_20 != 0) {
      if (iStack_1c == 0) {
        pCVar4 = (CPaneContainer *)
                 CObject::operator_new
                           (0x9c,
                            "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainer.cpp"
                            ,0x960);
        uStack_8 = 1;
        if (pCVar4 == (CPaneContainer *)0x0) {
          uStack_40 = 0;
        }
        else {
          uStack_40 = CPaneContainer(pCVar4,*(CPaneContainerManager **)(this + 0x1c),
                                     (CDockablePane *)0x0,(CDockablePane *)0x0,(CPaneDivider *)0x0);
        }
        uStack_8 = 0xffffffff;
        *(undefined4 *)(this + 0x14) = uStack_40;
      }
      else {
        uVar5 = thunk_FUN_00714560();
        *(undefined4 *)(this + 0x14) = uVar5;
        SetPaneContainerManager
                  (*(CPaneContainer **)(this + 0x14),*(CPaneContainerManager **)(this + 0x1c),0);
      }
      (**(code **)(**(int **)(this + 0x14) + 8))(param_1);
      SetParentPaneContainer(*(CPaneContainer **)(this + 0x14),this);
    }
  }
  else {
    if (*(int *)(this + 4) == 0) {
      CArchive::operator<<(param_1,0);
    }
    else {
      iStack_14 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 4));
      if (iStack_14 == -1) {
        SaveTabbedPane(this,param_1,*(CDockablePane **)(this + 4));
      }
      else {
        CArchive::operator<<(param_1,iStack_14);
      }
    }
    if (*(int *)(this + 8) == 0) {
      CArchive::operator<<(param_1,0);
    }
    else {
      iStack_18 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 8));
      if (iStack_18 == -1) {
        SaveTabbedPane(this,param_1,*(CDockablePane **)(this + 8));
      }
      else {
        CArchive::operator<<(param_1,iStack_18);
      }
    }
    if (*(int *)(this + 0xc) == 0) {
      CArchive::operator<<(param_1,0);
    }
    else {
      iVar1 = CWnd::GetDlgCtrlID(*(CWnd **)(this + 0xc));
      CArchive::operator<<(param_1,iVar1);
      (**(code **)(**(int **)(this + 0xc) + 8))(param_1);
    }
    CArchive::operator<<(param_1,(uint)(*(int *)(this + 0x10) != 0));
    if (*(int *)(this + 0x10) != 0) {
      (**(code **)(**(int **)(this + 0x10) + 8))(param_1);
    }
    CArchive::operator<<(param_1,(uint)(*(int *)(this + 0x14) != 0));
    if (*(int *)(this + 0x14) != 0) {
      (**(code **)(**(int **)(this + 0x14) + 8))(param_1);
    }
  }
  ExceptionList = pvStack_10;
  return;
}



void __thiscall
CMFCVisualManagerOffice2007::OnDrawButtonSeparator
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,undefined4 param_2,int param_4,int param_5
          ,int param_6,int param_7,undefined4 param_8,int param_9)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  uint uStack_14;
  CPen *pCStack_10;
  CPen *pCStack_c;
  
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) {
    CMFCVisualManagerOfficeXP::OnDrawButtonSeparator
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_4,param_5,param_6,param_7,
               param_8,param_9);
  }
  else {
    pCStack_c = (CPen *)(this + 0x160);
    pCStack_10 = CDC::SelectObject(param_1,pCStack_c);
    uStack_14 = (uint)(pCStack_10 != (CPen *)0x0);
    if ((uStack_14 == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2007.cpp"
                                    ,0xeb3), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uStack_14 == 0) {
      thunk_FUN_007113e0();
    }
    if (param_9 == 0) {
      CDC::MoveTo(param_1,(int)auStack_24,param_4 + 2);
      CDC::LineTo(param_1,param_6 + -2,param_5);
    }
    else {
      CDC::MoveTo(param_1,(int)auStack_1c,param_4);
      CDC::LineTo(param_1,param_4,param_7 + -2);
    }
    CDC::SelectObject(param_1,pCStack_10);
  }
  return;
}



void __thiscall CMultiPaneFrameWnd::ConvertToTabbedDocument(CMultiPaneFrameWnd *this)

{
  uint lParam;
  undefined4 *puVar1;
  CObject *pCVar2;
  int iStack_30;
  CObList aCStack_2c [28];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b65c68;
  pvStack_10 = ExceptionList;
  lParam = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  CObList::CObList(aCStack_2c,10);
  uStack_8 = 0;
  CPaneContainerManager::AddPanesToList
            ((CPaneContainerManager *)(this + 0x180),aCStack_2c,(CObList *)0x0);
  iStack_30 = thunk_FUN_006ccba0();
  while (iStack_30 != 0) {
    puVar1 = (undefined4 *)::GetNext(&iStack_30);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_00c46610,(CObject *)*puVar1);
    AfxAssertValidObject
              (pCVar2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmultipaneframewnd.cpp",
               0x4cd);
    (**(code **)(*(int *)pCVar2 + 0x2e8))(0);
  }
  FID_conflict_PostMessageW(DAT_00c57620,0,0,lParam);
  uStack_8 = 0xffffffff;
  CObList::~CObList(aCStack_2c);
  ExceptionList = pvStack_10;
  return;
}



void __thiscall CDockingPanesRow::ArrangePanes(CDockingPanesRow *this,int param_1,int param_2)

{
  bool bVar1;
  CMFCVisualManager *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  tagPOINT *ptVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [8];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  CObject *pCStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  char cStack_5;
  
  uStack_18 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  thunk_FUN_00b31aa0();
  thunk_FUN_00b31aa0();
  thunk_FUN_00b31510(0,0);
  GetWindowRect(this,(CRect *)&iStack_38);
  cStack_5 = '\x01';
  pCVar2 = CMFCVisualManager::GetInstance();
  iStack_14 = (**(code **)(*(int *)pCVar2 + 0x1b0))();
  iStack_3c = thunk_FUN_006ccba0();
  while (iStack_3c != 0) {
    puVar3 = (undefined4 *)::GetNext(&iStack_3c);
    pCStack_44 = (CObject *)*puVar3;
    AfxAssertValidObject
              (pCStack_44,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockingpanesrow.cpp"
               ,0x4c6);
    iVar4 = (**(code **)(*(int *)pCStack_44 + 0x180))();
    if ((iVar4 != 0) || (*(int *)(this + 4) != 0)) {
      ptVar5 = (tagPOINT *)thunk_FUN_00b31df0();
      CWnd::ClientToScreen((CWnd *)pCStack_44,ptVar5);
      if (cStack_5 != '\0') {
        bVar1 = IsHorizontal(this);
        if (bVar1) {
          iStack_10 = iStack_38 + param_1;
        }
        else {
          iStack_c = iStack_34 + param_1;
        }
      }
      if ((*(int *)(pCStack_44 + 0x104) == 0) && (cStack_5 == '\0')) {
        iStack_48 = param_2 + DAT_00c467d4;
        bVar1 = IsHorizontal(this);
        if (bVar1) {
          iStack_10 = iStack_10 - iStack_48;
          if (iStack_14 != 0) {
            iVar4 = thunk_FUN_00b31c60();
            iStack_10 = iStack_10 - iVar4 / 2;
          }
        }
        else {
          iStack_c = iStack_c - iStack_48;
          if (iStack_14 != 0) {
            iVar4 = thunk_FUN_00b31c40();
            iStack_c = iStack_c - iVar4 / 2;
          }
        }
      }
      if (cStack_5 != '\0') {
        cStack_5 = '\0';
      }
      iStack_40 = 0;
      bVar1 = IsHorizontal(this);
      if (bVar1) {
        iStack_4c = thunk_FUN_00b31c40();
        iStack_28 = iStack_10;
        iStack_20 = iStack_10 + iStack_4c;
        iStack_40 = iStack_4c;
      }
      else {
        iStack_50 = thunk_FUN_00b31c60();
        iStack_24 = iStack_c;
        iStack_1c = iStack_c + iStack_50;
        iStack_40 = iStack_50;
      }
      ScreenToClient(this,(CRect *)&iStack_28);
      uVar6 = thunk_FUN_00b31c60(0x14,0);
      uVar6 = thunk_FUN_00b31c40(uVar6);
      (**(code **)(*(int *)pCStack_44 + 0x23c))(0,iStack_28,iStack_24,uVar6);
      bVar1 = IsHorizontal(this);
      (**(code **)(*(int *)pCStack_44 + 0x20c))(auStack_58,iStack_40,!bVar1);
      ptVar5 = (tagPOINT *)thunk_FUN_00b31df0();
      CWnd::ClientToScreen((CWnd *)pCStack_44,ptVar5);
      bVar1 = IsHorizontal(this);
      if (bVar1) {
        iVar4 = thunk_FUN_00b31c40();
        iStack_10 = iVar4 + param_2 + iStack_10;
      }
      else {
        iVar4 = thunk_FUN_00b31c60();
        iStack_c = iVar4 + param_2 + iStack_c;
      }
    }
  }
  __security_check_cookie(uStack_18 ^ (uint)&stack0xfffffffc);
  return;
}



void __thiscall CMapStringToString::AssertValid(CMapStringToString *this)

{
  code *pcVar1;
  int iVar2;
  
  CObject::AssertValid((CObject *)this);
  if (*(int *)(this + 8) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_ss.cpp",0x1ff
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*(int *)(this + 0xc) != 0) && (*(int *)(this + 4) == 0)) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\map_ss.cpp",0x200
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



int __thiscall CWinThread::ExitInstance(CWinThread *this)

{
  code *pcVar1;
  CWinApp *pCVar2;
  int iVar3;
  tagMSG *ptVar4;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\thrdcore.cpp",0x28b)
  ;
  pCVar2 = AfxGetApp();
  if (pCVar2 == (CWinApp *)this) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\thrdcore.cpp",
                                0x28c);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  ptVar4 = AfxGetCurrentMessage();
  return ptVar4->wParam;
}



undefined4 __fastcall thunk_FUN_006d22f0(CObject *param_1)

{
  AfxAssertValidObject
            (param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\thrdcore.cpp",0x256);
  return 0;
}



CMFCReBar * __thiscall thunk_FUN_008d6e90(CMFCReBar *param_1,uint param_2)

{
  CMFCReBar::~CMFCReBar(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



void thunk_FUN_0089ded0(COleDataObject *param_1)

{
  code *pcVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  CFile *pCVar5;
  CRuntimeClass *pCVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uStack_100;
  CArchive aCStack_6c [76];
  uint uStack_20;
  uint uStack_1c;
  CObject *pCStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b60c78;
  pvStack_10 = ExceptionList;
  uStack_100 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  puStack_14 = (undefined1 *)&uStack_100;
  ExceptionList = &pvStack_10;
  uStack_1c = (uint)(param_1 != (COleDataObject *)0x0);
  puVar2 = &uStack_100;
  if ((uStack_1c == 0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarbutton.cpp"
                                  ,0xbd), puVar2 = (uint *)puStack_14, iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puStack_14 = (undefined1 *)puVar2;
  if (uStack_1c == 0) {
    thunk_FUN_007113e0();
  }
  iVar4 = COleDataObject::IsDataAvailable(param_1,DAT_00c57d14,(tagFORMATETC *)0x0);
  uStack_20 = (uint)(iVar4 != 0);
  if ((uStack_20 == 0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarbutton.cpp"
                                  ,0xbe), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uStack_20 == 0) {
    thunk_FUN_007113e0();
  }
  pCStack_18 = (CObject *)0x0;
  uStack_8 = 0;
  uVar3 = CMFCToolBarButton::GetClipboardFormat();
  uVar8 = 0;
  pCVar5 = (CFile *)thunk_FUN_00a0e270(uVar3,0);
  if (pCVar5 != (CFile *)0x0) {
    CArchive::CArchive(aCStack_6c,pCVar5,1,0x1000,(void *)0x0);
    uStack_8 = CONCAT31(uStack_8._1_3_,1);
    pCVar6 = CArchive::ReadClass(aCStack_6c,(CRuntimeClass *)0x0,(uint *)0x0,(ulong *)0x0);
    if ((pCVar6 == (CRuntimeClass *)0x0) &&
       (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarbutton.cpp"
                                    ,0xd0), iVar4 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pCVar6 == (CRuntimeClass *)0x0) {
      thunk_FUN_007113e0();
    }
    else {
      pCStack_18 = (CObject *)thunk_FUN_00714560();
      bVar7 = pCStack_18 == (CObject *)0x0;
      if ((bVar7) &&
         (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarbutton.cpp"
                                      ,0xd5), iVar4 != 0)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (bVar7) {
        thunk_FUN_007113e0();
      }
      if ((pCStack_18 == (CObject *)0x0) ||
         (iVar4 = CObject::IsKindOf(pCStack_18,(CRuntimeClass *)&PTR_s_CMFCToolBarButton_00c45c3c),
         iVar4 == 0)) {
        if (pCStack_18 != (CObject *)0x0) {
          if (pCStack_18 != (CObject *)0x0) {
            (**(code **)(*(int *)pCStack_18 + 4))(1);
          }
          pCStack_18 = (CObject *)0x0;
        }
      }
      else {
        (**(code **)(*(int *)pCStack_18 + 8))(aCStack_6c);
      }
    }
    CArchive::Close(aCStack_6c);
    if (pCVar5 != (CFile *)0x0) {
      (**(code **)(*(int *)pCVar5 + 4))(1);
    }
    uStack_8 = uStack_8 & 0xffffff00;
    CArchive::~CArchive(aCStack_6c);
    FUN_0089e2ad(uVar8);
    return;
  }
  FUN_0089e2ad(uVar8);
  return;
}



long __thiscall
CWnd::GetAccessibleName
          (CWnd *this,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined4 *param_6)

{
  code *pcVar1;
  wchar_t *pwVar2;
  COleControlSiteOrWnd **ppCVar3;
  int iVar4;
  long lVar5;
  CStringT<> aCStack_24 [4];
  COleControlSiteOrWnd *pCStack_20;
  __POSITION *p_Stack_1c;
  long lStack_18;
  CStringT<> aCStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b4da20;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (param_4 == 0) {
    thunk_FUN_006bef10(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
    uStack_8 = 0;
    GetWindowTextA(this,aCStack_14);
    pwVar2 = ATL::CStringT<>::AllocSysString(aCStack_14);
    *param_6 = pwVar2;
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
    lVar5 = 0;
  }
  else {
    lStack_18 = GetWindowedChildCount(this);
    if ((lStack_18 < param_4) && (*(int *)(this + 0x68) != 0)) {
      p_Stack_1c = (__POSITION *)thunk_FUN_006cc700();
      do {
        if (p_Stack_1c == (__POSITION *)0x0) goto LAB_006fc929;
        ppCVar3 = _CTypedPtrList<>::GetNext
                            ((_CTypedPtrList<> *)(*(int *)(this + 0x68) + 0x40),&p_Stack_1c);
        pCStack_20 = *ppCVar3;
        if ((pCStack_20 == (COleControlSiteOrWnd *)0x0) &&
           (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wincore.cpp"
                                        ,0x101c), iVar4 != 0)) {
          pcVar1 = (code *)swi(3);
          lVar5 = (*pcVar1)();
          return lVar5;
        }
      } while (((*(int *)(pCStack_20 + 4) == 0) || (*(int *)(*(int *)(pCStack_20 + 4) + 0x74) == 0))
              || (lStack_18 = lStack_18 + 1, lStack_18 != param_4));
      thunk_FUN_006bef10();
      uStack_8 = 1;
      (**(code **)(**(int **)(pCStack_20 + 4) + 0x94))(aCStack_24);
      pwVar2 = ATL::CStringT<>::AllocSysString(aCStack_24);
      *param_6 = pwVar2;
      uStack_8 = 0xffffffff;
      thunk_FUN_006bef70();
      lVar5 = 0;
    }
    else {
LAB_006fc929:
      lVar5 = -0x7ff8ffa9;
    }
  }
  ExceptionList = pvStack_10;
  return lVar5;
}



undefined4 * __fastcall thunk_FUN_007168c0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



int __thiscall CMFCPopupMenuBar::BuildOrigItems(CMFCPopupMenuBar *this,uint param_1)

{
  code *pcVar1;
  LPCSTR lpMenuName;
  int iVar2;
  CObject *pCVar3;
  CWinApp *pCVar4;
  HMENU pHVar5;
  uint uVar6;
  CMenu *this_00;
  CMFCToolBarMenuButton *this_01;
  undefined4 uVar7;
  HMENU__ *pHVar8;
  CMFCToolBarButton *pCVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  CObject *pCStack_8c;
  CObject *pCStack_88;
  CObject *pCStack_84;
  CStringT<> aCStack_2c [4];
  uint uStack_28;
  int iStack_24;
  CObject *pCStack_20;
  CMenu aCStack_1c [8];
  CMenu *pCStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b69c0c;
  pvStack_10 = ExceptionList;
  lpMenuName = (LPCSTR)(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  ExceptionList = &pvStack_10;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
             ,0x85d);
  while (iVar2 = CObList::IsEmpty((CObList *)(this + 0xbe4)), iVar2 == 0) {
    pCVar3 = CObList::RemoveHead((CObList *)(this + 0xbe4));
    if (pCVar3 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar3 + 4))(1);
    }
  }
  pCVar4 = AfxGetApp();
  pCStack_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_00bb1200,(CObject *)pCVar4);
  if ((pCStack_20 == (CObject *)0x0) ||
     (iVar2 = CWinAppEx::IsResourceSmartUpdate((CWinAppEx *)pCStack_20), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    CMenu::CMenu(aCStack_1c);
    uStack_8 = 0;
    pHVar5 = FID_conflict_LoadMenuA((HINSTANCE)param_1,lpMenuName);
    if (pHVar5 == (HMENU)0x0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
                                  ,0x86d);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      uStack_8 = 0xffffffff;
      CMenu::~CMenu(aCStack_1c);
      iVar2 = 0;
    }
    else {
      pCStack_14 = CMenu::GetSubMenu(aCStack_1c,0);
      if (pCStack_14 == (CMenu *)0x0) {
        uStack_8 = 0xffffffff;
        CMenu::~CMenu(aCStack_1c);
        iVar2 = 0;
      }
      else {
        iStack_24 = CMenu::GetMenuItemCount(pCStack_14);
        for (uStack_28 = 0; (int)uStack_28 < iStack_24; uStack_28 = uStack_28 + 1) {
          uVar6 = CMenu::GetMenuItemID(pCStack_14,uStack_28);
          thunk_FUN_006bef10();
          uStack_8._0_1_ = 1;
          CMenu::GetMenuStringA(pCStack_14,uStack_28,aCStack_2c,0x400);
          if (uVar6 == 0) {
            pCVar9 = (CMFCToolBarButton *)
                     CObject::operator_new
                               (0x70,
                                "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
                                ,0x894);
            uStack_8._0_1_ = 3;
            if (pCVar9 == (CMFCToolBarButton *)0x0) {
              pCStack_88 = (CObject *)0x0;
            }
            else {
              pCStack_88 = (CObject *)CMFCToolBarButton::CMFCToolBarButton(pCVar9);
            }
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            if ((pCStack_88 == (CObject *)0x0) &&
               (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
                                            ,0x895), iVar2 != 0)) {
              pcVar1 = (code *)swi(3);
              iVar2 = (*pcVar1)();
              return iVar2;
            }
            if (pCStack_88 == (CObject *)0x0) {
              thunk_FUN_007113e0();
            }
            AfxAssertValidObject
                      (pCStack_88,
                       "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp",0x896
                      );
            *(undefined4 *)(pCStack_88 + 0x24) = 1;
            CObList::AddTail((CObList *)(this + 0xbe4),pCStack_88);
          }
          else if (uVar6 == 0xffffffff) {
            this_00 = CMenu::GetSubMenu(pCStack_14,uStack_28);
            if ((this_00 == (CMenu *)0x0) &&
               (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
                                            ,0x887), iVar2 != 0)) {
              pcVar1 = (code *)swi(3);
              iVar2 = (*pcVar1)();
              return iVar2;
            }
            if (this_00 == (CMenu *)0x0) {
              thunk_FUN_007113e0();
            }
            this_01 = (CMFCToolBarMenuButton *)
                      CObject::operator_new
                                (0xe8,
                                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
                                 ,0x889);
            uStack_8._0_1_ = 2;
            if (this_01 == (CMFCToolBarMenuButton *)0x0) {
              pCStack_84 = (CObject *)0x0;
            }
            else {
              pCStack_84 = (CObject *)CMFCToolBarMenuButton::CMFCToolBarMenuButton(this_01);
            }
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            if ((pCStack_84 == (CObject *)0x0) &&
               (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
                                            ,0x88a), iVar2 != 0)) {
              pcVar1 = (code *)swi(3);
              iVar2 = (*pcVar1)();
              return iVar2;
            }
            if (pCStack_84 == (CObject *)0x0) {
              thunk_FUN_007113e0();
            }
            AfxAssertValidObject
                      (pCStack_84,
                       "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp",0x88b
                      );
            uVar12 = 0;
            uVar7 = thunk_FUN_006bf040(0);
            uVar11 = 0xffffffff;
            pHVar8 = CMenu::GetSafeHmenu(this_00);
            Initialize(0,pHVar8,uVar11,uVar7,uVar12);
            CObList::AddTail((CObList *)(this + 0xbe4),pCStack_84);
          }
          else {
            pCVar9 = (CMFCToolBarButton *)
                     CObject::operator_new
                               (0x70,
                                "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpopupmenubar.cpp"
                                ,0x89f);
            uStack_8._0_1_ = 4;
            if (pCVar9 == (CMFCToolBarButton *)0x0) {
              pCStack_8c = (CObject *)0x0;
            }
            else {
              iVar13 = 0;
              iVar2 = 0;
              pcVar10 = (char *)thunk_FUN_006bf040();
              pCStack_8c = (CObject *)
                           CMFCToolBarButton::CMFCToolBarButton
                                     (pCVar9,uVar6,-1,pcVar10,iVar2,iVar13);
            }
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            CObList::AddTail((CObList *)(this + 0xbe4),pCStack_8c);
          }
          uStack_8 = uStack_8 & 0xffffff00;
          thunk_FUN_006bef70();
        }
        uStack_8 = 0xffffffff;
        CMenu::~CMenu(aCStack_1c);
        iVar2 = 1;
      }
    }
  }
  ExceptionList = pvStack_10;
  return iVar2;
}



HDC__ * __thiscall ATL::CImage::CDCCache::GetDC(CDCCache *this)

{
  HDC__ *pHVar1;
  HDC pHVar2;
  int iStack_c;
  
  iStack_c = 0;
  while( true ) {
    if (3 < iStack_c) {
      pHVar2 = CreateCompatibleDC((HDC)0x0);
      return pHVar2;
    }
    pHVar1 = (HDC__ *)InterlockedExchangePointer((void **)(this + iStack_c * 4),(void *)0x0);
    if (pHVar1 != (HDC__ *)0x0) break;
    iStack_c = iStack_c + 1;
  }
  return pHVar1;
}



void __fastcall thunk_FUN_006ffb90(int *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*(int *)*param_1 + 8))(*param_1);
  }
  return;
}



void __thiscall ATL::CStringT<>::Format(CStringT<> *this,char *param_1,...)

{
  code *pcVar1;
  int iVar2;
  char *in_stack_00000008;
  
  iVar2 = AtlIsValidString(in_stack_00000008,0xffffffff);
  if (iVar2 == 0) {
    iVar2 = FID_conflict___CrtDbgReport
                      (2,L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\cstringt.h",0xa2c,0,
                       L"AtlIsValidString( pszFormat )",this);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FormatV((CStringT<> *)param_1,in_stack_00000008,&stack0x0000000c);
  return;
}



void __thiscall CControlBar::EraseNonClient(CControlBar *this)

{
  uint uVar1;
  tagPOINT *ptVar2;
  tagRECT *ptVar3;
  CRect aCStack_48 [16];
  int iStack_38;
  int iStack_34;
  uint uStack_28;
  CWindowDC aCStack_24 [4];
  uint uStack_20;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b51418;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_28 = uVar1;
  CWindowDC::CWindowDC(aCStack_24,(CWnd *)this);
  uStack_8 = 0;
  thunk_FUN_00b31aa0(uVar1);
  ptVar2 = (tagPOINT *)thunk_FUN_00b31df0();
  CWnd::ScreenToClient((CWnd *)this,ptVar2);
  thunk_FUN_00b31aa0();
  ptVar2 = (tagPOINT *)thunk_FUN_00b31df0();
  CWnd::ClientToScreen((CWnd *)this,ptVar2);
  ptVar3 = (tagRECT *)thunk_FUN_00b31df0();
  CWnd::ScreenToClient((CWnd *)this,ptVar3);
  CRect::OffsetRect(aCStack_48,-iStack_38,-iStack_34);
  ptVar3 = (tagRECT *)thunk_FUN_00b31df0();
  CDC::ExcludeClipRect((CDC *)aCStack_24,ptVar3);
  CRect::OffsetRect((CRect *)&iStack_38,-iStack_38,-iStack_34);
  (**(code **)(*(int *)this + 0x17c))(aCStack_24,&iStack_38);
  ptVar3 = (tagRECT *)thunk_FUN_00b31df0();
  CDC::IntersectClipRect((CDC *)aCStack_24,ptVar3);
  CWnd::SendMessageA((CWnd *)this,0x14,uStack_20,0);
  (**(code **)(*(int *)this + 0x184))(aCStack_24,&iStack_38);
  uStack_8 = 0xffffffff;
  CWindowDC::~CWindowDC(aCStack_24);
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_28 ^ (uint)&stack0xfffffffc);
  return;
}



undefined4 __thiscall thunk_FUN_00902710(undefined4 param_1,uint param_2)

{
  thunk_FUN_00902750();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4c90(param_1);
  }
  return param_1;
}



int __thiscall
CComCtlWrapper::_ImageList_DrawIndirect(CComCtlWrapper *this,_IMAGELISTDRAWPARAMS *param_1)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  code *pcVar4;
  ULONG_PTR *lpCookie;
  undefined1 auStack_38 [12];
  uint uStack_2c;
  undefined4 uStack_28;
  ULONG_PTR UStack_24;
  BOOL BStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xfffffffe;
  puStack_10 = &LAB_00678ae1;
  pvStack_14 = ExceptionList;
  uStack_c = DAT_00c4a700 ^ 0xc3a5f8;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_14;
  UStack_24 = 0;
  lpCookie = &UStack_24;
  pAVar2 = AfxGetModuleState();
  BStack_20 = ActivateActCtx(*(HANDLE *)(pAVar2 + 0x80),lpCookie);
  uStack_28 = 0;
  if (BStack_20 == 0) {
    ExceptionList = pvStack_14;
    return 0;
  }
  uStack_8 = 0;
  FID_conflict_GetProcAddress_PrintDlgW(auStack_38);
  iVar3 = FID_conflict_operator_int____stdcall___struct_tagCHOOSEFONTW__(uVar1);
  uStack_2c = (uint)(iVar3 != 0);
  if ((uStack_2c == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxcomctl32.h",
                                  0xf2), iVar3 != 0)) {
    pcVar4 = (code *)swi(3);
    iVar3 = (*pcVar4)();
    return iVar3;
  }
  if (uStack_2c == 0) {
    thunk_FUN_007113e0();
  }
  pcVar4 = (code *)FID_conflict_operator_int____stdcall___struct_tagCHOOSEFONTW__(param_1);
  uStack_28 = (*pcVar4)();
  uStack_8 = 0xfffffffe;
  FUN_00ab3e18();
  iVar3 = FUN_00ab3e5f(uVar1);
  return iVar3;
}



void __thiscall CWnd::OnNcMouseMove(CWnd *this)

{
  Default(this);
  return;
}



CDockingManager * __thiscall CMDIChildWndEx::GetDockingManager(CMDIChildWndEx *this)

{
  return (CDockingManager *)(this + 0x244);
}



undefined4 __fastcall thunk_FUN_007b5490(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



int __thiscall CDC::SetViewportOrg(CDC *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int in_stack_0000000c;
  tagPOINT tStack_c;
  
  if (*(int *)(this + 4) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",0x1af
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  CPoint::CPoint((CPoint *)&tStack_c);
  if (*(int *)(this + 4) != *(int *)(this + 8)) {
    BVar3 = SetViewportOrgEx(*(HDC *)(this + 4),param_2,in_stack_0000000c,&tStack_c);
    if (BVar3 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",
                                  0x1b3);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
  }
  if (*(int *)(this + 8) != 0) {
    BVar3 = SetViewportOrgEx(*(HDC *)(this + 8),param_2,in_stack_0000000c,&tStack_c);
    if (BVar3 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",
                                  0x1b5);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
  }
  *(LONG *)param_1 = tStack_c.x;
  *(LONG *)(param_1 + 4) = tStack_c.y;
  return param_1;
}



CMFCAutoHideButton * __thiscall CMFCAutoHideButton::CMFCAutoHideButton(CMFCAutoHideButton *this)

{
  thunk_FUN_006c9880();
  *(undefined ***)this = vftable;
  thunk_FUN_00b31aa0();
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  thunk_FUN_00b31f60();
  return this;
}



undefined4 thunk_FUN_006d00b0(void)

{
  return 0;
}



void __thiscall OnCtlColor(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x38))(DAT_00c557f8,param_1);
  (**(code **)(*param_2 + 0x34))(DAT_00c557f4);
  CGdiObject::GetSafeHandle((CGdiObject *)&DAT_00c55850);
  return;
}



IMoniker * __thiscall COleDocument::GetMoniker(COleDocument *this,tagOLEGETMONIKER param_1)

{
  char cVar1;
  char *pcVar2;
  LPCOLESTR lpszPathName;
  IMoniker **ppmk;
  CStringT<> aCStack_c [4];
  IMoniker *pIStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledoc1.cpp",0x1ad);
  cVar1 = thunk_FUN_006b82d0();
  if (cVar1 == '\0') {
    pcVar2 = (char *)thunk_FUN_006bf040();
    ATL::CStringT<>::CStringT<>(aCStack_c,pcVar2);
    ppmk = &pIStack_8;
    lpszPathName = (LPCOLESTR)FID_conflict_operator_struct_IBindCtx_();
    CreateFileMoniker(lpszPathName,ppmk);
    thunk_FUN_0070f1b0();
  }
  else {
    pIStack_8 = (IMoniker *)0x0;
  }
  return pIStack_8;
}



void __thiscall COleDataObject::Attach(COleDataObject *this,IDataObject *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 == (IDataObject *)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledobj1.cpp",
                                0x1e);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Release(this);
  *(IDataObject **)this = param_1;
  *(int *)(this + 0xc) = param_2;
  return;
}



COutlookCustomizeButton * __thiscall
COutlookCustomizeButton::COutlookCustomizeButton(COutlookCustomizeButton *this)

{
  CMFCCustomizeButton::CMFCCustomizeButton((CMFCCustomizeButton *)this);
  *(undefined ***)this = vftable;
  return this;
}



void __thiscall SetAt(CMap<> *param_1,char *param_2,undefined4 param_3)

{
  CMap<>::operator[](param_1,param_2);
  thunk_FUN_006bf0e0(param_3);
  return;
}



undefined4 __fastcall thunk_FUN_006ca260(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



int __thiscall FID_conflict_operator__(CObject *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x636);
  iStack_c = GetAssocAt(param_2,&iStack_10,&uStack_8);
  if (iStack_c == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      InitHashTable(*(undefined4 *)(param_1 + 8),1);
    }
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x63f), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (iVar3 == 0) {
      thunk_FUN_007113e0();
    }
    iStack_c = NewAssoc(param_2);
    *(undefined4 *)(iStack_c + 0xc) = uStack_8;
    *(undefined4 *)(iStack_c + 8) = *(undefined4 *)(*(int *)(param_1 + 4) + iStack_10 * 4);
    *(int *)(*(int *)(param_1 + 4) + iStack_10 * 4) = iStack_c;
  }
  return iStack_c + 4;
}



undefined4 __thiscall thunk_FUN_00b3e750(undefined4 param_1,uint param_2)

{
  thunk_FUN_00b3e790();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4c90(param_1);
  }
  return param_1;
}



undefined4 __fastcall thunk_FUN_00a10140(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



uint __thiscall CWnd::IsDlgButtonChecked(CWnd *this,int param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winocc.cpp",0xa4)
    ;
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  if (*(int *)(this + 0x68) == 0) {
    uVar4 = ::IsDlgButtonChecked(*(HWND *)(this + 0x20),param_1);
  }
  else {
    uVar4 = (**(code **)(**(int **)(this + 0x68) + 0x94))(param_1);
  }
  return uVar4;
}



void __thiscall COleObjectFactory::Revoke(COleObjectFactory *this)

{
  AfxAssertValidObject
