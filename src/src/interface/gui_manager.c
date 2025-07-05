/*
 * 使用者介面管理模組
 * 行數範圍：12001-14000
 */

int __thiscall
CPaneContainerManager::AddPaneContainerManager
          (CPaneContainerManager *this,CDockablePane *param_1,ulong param_2,
          CPaneContainerManager *param_3,int param_4)

{
  CPaneDivider *this_00;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  CObject **ppCVar4;
  CObject *this_01;
  int iStack_94;
  __POSITION *p_Stack_70;
  CObject *pCStack_6c;
  int iStack_68;
  int iStack_64;
  CPaneContainer *pCStack_60;
  CWnd *pCStack_5c;
  CObList aCStack_58 [28];
  undefined4 uStack_3c;
  __POSITION *p_Stack_38;
  int iStack_34;
  CObList aCStack_30 [28];
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = 0xffffffff;
  puStack_c = &LAB_00b66040;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  CObList::CObList(aCStack_30,10);
  iStack_8 = 0;
  CObList::CObList(aCStack_58,10);
  iStack_8._0_1_ = 1;
  AddPanesToList(param_3,aCStack_30,aCStack_58);
  uStack_3c = 0;
  iStack_14 = (**(code **)(*(int *)this + 0x94))(param_1,&uStack_3c,uVar1);
  if (iStack_14 == 0) {
    iStack_8 = (uint)iStack_8._1_3_ << 8;
    CObList::~CObList(aCStack_58);
    iStack_8 = 0xffffffff;
    CObList::~CObList(aCStack_30);
    iVar2 = 0;
  }
  else {
    p_Stack_38 = CObList::Find((CObList *)(this + 4),(CObject *)param_1,(__POSITION *)0x0);
    if (p_Stack_38 == (__POSITION *)0x0) {
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      CObList::~CObList(aCStack_58);
      iStack_8 = 0xffffffff;
      CObList::~CObList(aCStack_30);
      iVar2 = 0;
    }
    else {
      pCStack_60 = (CPaneContainer *)0x0;
      if (param_4 == 0) {
        pCStack_60 = *(CPaneContainer **)(param_3 + 0x3c);
      }
      else {
        pCStack_60 = (CPaneContainer *)
                     (**(code **)(**(int **)(param_3 + 0x3c) + 0x58))(*(undefined4 *)(this + 0x3c));
        CPaneContainer::SetPaneContainerManager(pCStack_60,this,1);
        RemoveAllPanesAndPaneDividers(param_3);
      }
      pCStack_5c = (CWnd *)(**(code **)(*(int *)param_3 + 0x7c))();
      CGlobalUtils::SetNewParent((CGlobalUtils *)&DAT_00c58364,aCStack_30,*(CWnd **)(this + 0x4c),1)
      ;
      CGlobalUtils::SetNewParent((CGlobalUtils *)&DAT_00c58364,aCStack_58,*(CWnd **)(this + 0x4c),1)
      ;
      iVar2 = AddPaneAndPaneContainer(this,param_1,pCStack_60,param_2);
      if (iVar2 == 0) {
        CGlobalUtils::SetNewParent((CGlobalUtils *)&DAT_00c58364,aCStack_30,pCStack_5c,1);
        CGlobalUtils::SetNewParent((CGlobalUtils *)&DAT_00c58364,aCStack_58,pCStack_5c,1);
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        CObList::~CObList(aCStack_58);
        iStack_8 = 0xffffffff;
        CObList::~CObList(aCStack_30);
        iVar2 = 0;
      }
      else {
        if (((param_2 & 0x2000) == 0) && ((param_2 & 0x1000) == 0)) {
          iStack_94 = 0;
        }
        else {
          iStack_94 = 1;
        }
        iStack_34 = iStack_94;
        if (iStack_94 == 0) {
          p_Stack_70 = (__POSITION *)thunk_FUN_006ccbc0();
          while (p_Stack_70 != (__POSITION *)0x0) {
            ppCVar4 = CObList::GetPrev(aCStack_30,&p_Stack_70);
            CObList::InsertAfter((CObList *)(this + 4),p_Stack_38,*ppCVar4);
          }
        }
        else {
          iStack_68 = thunk_FUN_006ccba0();
          while (iStack_68 != 0) {
            puVar3 = (undefined4 *)::GetNext(&iStack_68);
            pCStack_6c = (CObject *)*puVar3;
            CObList::InsertBefore((CObList *)(this + 4),p_Stack_38,pCStack_6c);
          }
        }
        CObList::AddTail((CObList *)(this + 0x20),aCStack_58);
        iStack_64 = 0;
        iStack_64 = thunk_FUN_006ccba0();
        while (iStack_64 != 0) {
          puVar3 = (undefined4 *)::GetNext(&iStack_64);
          this_00 = (CPaneDivider *)*puVar3;
          AfxAssertValidObject
                    ((CObject *)this_00,
                     "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainermanager.cpp"
                     ,0xf3);
          CPaneDivider::SetPaneContainerManager(this_00,this);
        }
        if (param_4 == 0) {
          *(undefined4 *)(param_3 + 0x48) = 0;
          CPaneContainer::SetPaneContainerManager(*(CPaneContainer **)(param_3 + 0x3c),this,1);
        }
        iStack_64 = thunk_FUN_006ccba0();
        while (iStack_64 != 0) {
          puVar3 = (undefined4 *)::GetNext(&iStack_64);
          this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_00c46610,
                                       (CObject *)*puVar3);
          AfxAssertValidObject
                    (this_01,
                     "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainermanager.cpp"
                     ,0x102);
          (**(code **)(*(int *)this_01 + 500))(1);
          CWnd::RedrawWindow((CWnd *)this_01,(tagRECT *)0x0,(CRgn *)0x0,0x105);
        }
        CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x3c));
        CPaneContainer::CalculateRecentSize(*(CPaneContainer **)(this + 0x3c));
        iStack_8 = (uint)iStack_8._1_3_ << 8;
        CObList::~CObList(aCStack_58);
        iStack_8 = 0xffffffff;
        CObList::~CObList(aCStack_30);
        iVar2 = 1;
      }
    }
  }
  ExceptionList = pvStack_10;
  return iVar2;
}



undefined4 __thiscall thunk_FUN_00a307a0(undefined4 param_1,uint param_2)

{
  thunk_FUN_00a307e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



CMFCImagePaintArea * __thiscall thunk_FUN_00a241f0(CMFCImagePaintArea *param_1,uint param_2)

{
  CMFCImagePaintArea::~CMFCImagePaintArea(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



undefined4 __fastcall thunk_FUN_00a5a5b0(undefined4 param_1)

{
  thunk_FUN_00a5a7d0();
  return param_1;
}



void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonCaptionButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonCaptionButton *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  CWnd *pCVar4;
  uint uVar5;
  CRect *pCVar6;
  int iVar7;
  AFX_BUTTON_STATE AStack_2c;
  int iStack_20;
  
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  iVar3 = CanDrawImage(this);
  if (iVar3 == 0) {
    CMFCVisualManager::OnDrawRibbonCaptionButton((CMFCVisualManager *)this,param_1,param_2);
  }
  else {
    AfxAssertValidObject
              ((CObject *)param_1,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2007.cpp",
               0x12d6);
    AfxAssertValidObject
              ((CObject *)param_2,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2007.cpp",
               0x12d7);
    iVar3 = (**(code **)(*(int *)param_2 + 0x34))();
    if ((iVar3 == 0) && (iVar3 = (**(code **)(*(int *)param_2 + 0x38))(), iVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar3 = (**(code **)(*(int *)param_2 + 0x3c))();
    AStack_2c = 0;
    if (iVar3 == 0) {
      if (bVar1) {
        AStack_2c = 2;
      }
    }
    else {
      AStack_2c = (AFX_BUTTON_STATE)bVar1;
    }
    iVar3 = CMFCRibbonCaptionButton::IsMDIChildButton(param_2);
    iStack_20 = 1;
    if (iVar3 == 0) {
      pCVar4 = (CWnd *)thunk_FUN_007f61c0();
      iVar3 = thunk_FUN_006d9400();
      if (iVar3 != 0) {
        pCVar4 = CWnd::SetCapture(pCVar4);
        AfxAssertValidObject
                  ((CObject *)pCVar4,
                   "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2007.cpp"
                   ,0x12f2);
        iStack_20 = IsWindowActive(this,pCVar4);
      }
    }
    iVar3 = CMFCRibbonCaptionButton::IsMDIChildButton(param_2);
    iVar7 = 0;
    uVar5 = thunk_FUN_007f61a0();
    pCVar6 = (CRect *)CMFCRibbonBaseElement::GetRect((CMFCRibbonBaseElement *)param_2);
    DrawNcBtn(this,param_1,pCVar6,uVar5,AStack_2c,iVar7,iStack_20,iVar3);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall AddTail(CObject *param_1,undefined4 param_2)

{
  int iVar1;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x3c4);
  iVar1 = NewNode(*(undefined4 *)(param_1 + 8),0);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (*(int *)(param_1 + 8) == 0) {
    *(int *)(param_1 + 4) = iVar1;
  }
  else {
    **(int **)(param_1 + 8) = iVar1;
  }
  *(int *)(param_1 + 8) = iVar1;
  return iVar1;
}



CMFCRibbonPanel * __thiscall
CMFCRibbonConstructor::CreatePanel
          (CMFCRibbonConstructor *this,CMFCRibbonCategory *param_1,XPanel *param_2)

{
  CMFCRibbonInfo *this_00;
  undefined4 uVar1;
  CMFCRibbonPanel *pCVar2;
  HINSTANCE hInst;
  undefined4 uVar3;
  HICON nIconIndex;
  
  nIconIndex = (HICON)0x0;
  if (*(int *)(param_2 + 0x10) != -1) {
    hInst = *(HINSTANCE *)(param_2 + 0x10);
    this_00 = (CMFCRibbonInfo *)thunk_FUN_00a36bc0();
    CMFCRibbonInfo::GetRibbonBar(this_00);
    nIconIndex = FID_conflict_ExtractIconW(hInst,(LPCWSTR)this,(UINT)nIconIndex);
  }
  uVar3 = 0;
  uVar1 = thunk_FUN_006bf040(nIconIndex,0);
  pCVar2 = (CMFCRibbonPanel *)AddPanel(uVar1,nIconIndex,uVar3);
  return pCVar2;
}



void __fastcall RemoveAll(CObject *param_1)

{
  int iStack_c;
  uint uStack_8;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x5a2);
  if (*(int *)(param_1 + 4) != 0) {
    for (uStack_8 = 0; uStack_8 < *(uint *)(param_1 + 8); uStack_8 = uStack_8 + 1) {
      for (iStack_c = *(int *)(*(int *)(param_1 + 4) + uStack_8 * 4); iStack_c != 0;
          iStack_c = *(int *)(iStack_c + 8)) {
      }
    }
    abs(*(long *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  CPlex::FreeDataChain(*(CPlex **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



CDumpContext * __thiscall CDumpContext::CDumpContext(CDumpContext *this,CFile *param_1)

{
  if (param_1 != (CFile *)0x0) {
    AfxAssertValidObject
              ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dumpcont.cpp",
               0x25);
  }
  *(CFile **)(this + 4) = param_1;
  *(undefined4 *)this = 0;
  return this;
}



undefined4 thunk_FUN_00a30f90(void)

{
  return 0;
}



void __thiscall CMFCRibbonGallery::OnShowPopupMenu(CMFCRibbonGallery *this)

{
  code *pcVar1;
  uint uVar2;
  CWnd *this_00;
  int iVar3;
  ulong uVar4;
  CMFCRibbonBaseElement **ppCVar5;
  CWnd *pCVar6;
  CMFCRibbonPanelMenu *this_01;
  undefined4 *puVar7;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  LONG LStack_98;
  LONG LStack_94;
  LONG LStack_90;
  CMFCPopupMenu *pCStack_8c;
  CMFCRibbonBaseElement *pCStack_88;
  uint uStack_84;
  tagRECT tStack_54;
  uint uStack_44;
  uint uStack_40;
  CMFCRibbonBar *pCStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_2c;
  CMFCRibbonBaseElement *pCStack_28;
  CMFCPopupMenu *pCStack_24;
  LONG LStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6c304;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_44 = uVar2;
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpalettegallery.cpp",0x4b8);
  this_00 = (CWnd *)(**(code **)(*(int *)this + 0x98))(uVar2);
  iVar3 = thunk_FUN_006d9400();
  if (iVar3 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpalettegallery.cpp"
                                ,0x4bd);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pCStack_3c = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
    iVar3 = thunk_FUN_006d9400();
    if (iVar3 == 0) {
      iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpalettegallery.cpp"
                                  ,0x4c4);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      CMFCRibbonBaseElement::OnShowPopupMenu((CMFCRibbonBaseElement *)this);
      uVar4 = CWnd::GetExStyle((CWnd *)pCStack_3c);
      uStack_40 = uVar4 & 0x400000;
      iVar3 = thunk_FUN_007fcfa0();
      if (iVar3 == 0) {
        CreateIcons(this);
      }
      if (*(int *)(this + 0x2c0) == 0) {
        uStack_84 = *(uint *)(this + 0x48);
      }
      else {
        uStack_84 = *(uint *)(this + 0x2c0);
      }
      iStack_18 = GetLastSelectedItem(uStack_84);
      if (-1 < iStack_18) {
        SelectItem(this,iStack_18);
      }
      iVar3 = IsButtonLook(this);
      pCStack_88 = (CMFCRibbonBaseElement *)this;
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_007fcfa0();
        ppCVar5 = CArray<>::operator[]((CArray<> *)(this + 0x164),iVar3 + -1);
        pCStack_88 = *ppCVar5;
      }
      pCStack_28 = pCStack_88;
      pCVar6 = CWnd::GetSafeOwner((CWnd *)0x0,(HWND__ **)0x0);
      this_01 = (CMFCRibbonPanelMenu *)
                CObject::operator_new
                          (0x1f00,
                           "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpalettegallery.cpp"
                           ,0x4db);
      uStack_8 = 0;
      if (this_01 == (CMFCRibbonPanelMenu *)0x0) {
        pCStack_8c = (CMFCPopupMenu *)0x0;
      }
      else {
        pCStack_8c = (CMFCPopupMenu *)CMFCRibbonPanelMenu::CMFCRibbonPanelMenu(this_01,this);
      }
      uStack_8 = 0xffffffff;
      pCStack_24 = pCStack_8c;
      CMFCPopupMenu::SetParentRibbonElement(pCStack_8c,pCStack_28);
      CMFCRibbonPanelMenu::SetMenuMode((CMFCRibbonPanelMenu *)pCStack_24,1);
      CMFCRibbonBaseElement::GetRect((CMFCRibbonBaseElement *)this);
      CWnd::ClientToScreen(this_00,&tStack_54);
      iStack_14 = (-(uint)(*(int *)(this + 0x2ec) != 0) & 0xfffffffc) + 4;
      (**(code **)(*(int *)this + 0x1ec))(&iStack_30);
      thunk_FUN_00b31090(iStack_30 + iStack_14 * 2,iStack_2c + iStack_14 * 2);
      if (uStack_40 == 0) {
        LStack_90 = tStack_54.left;
      }
      else {
        LStack_90 = tStack_54.right;
      }
      LStack_20 = LStack_90;
      iStack_1c = tStack_54.bottom;
      iVar3 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
      if (iVar3 != 0) {
        if (uStack_40 == 0) {
          LStack_94 = tStack_54.right;
        }
        else {
          LStack_94 = tStack_54.left;
        }
        LStack_20 = LStack_94;
        iStack_1c = tStack_54.top;
      }
      iVar3 = IsButtonLook(this);
      if (iVar3 == 0) {
        if (uStack_40 == 0) {
          LStack_98 = tStack_54.left;
        }
        else {
          LStack_98 = tStack_54.right;
        }
        LStack_20 = LStack_98;
        iStack_1c = tStack_54.top + 3;
      }
      if (*(int *)(this + 0x2dc) < 1) {
        if (pCStack_28 == (CMFCRibbonBaseElement *)this) {
          iStack_9c = 4;
        }
        else {
          iStack_9c = *(int *)(this + 0x2c8);
        }
        if (*(int *)(this + 0x2ec) == 0) {
          if (iStack_9c < 5) {
            iStack_a4 = 4;
          }
          else {
            iStack_a4 = iStack_9c;
          }
          iStack_a0 = iStack_a4;
        }
        else {
          iStack_a0 = 10;
        }
        puVar7 = (undefined4 *)thunk_FUN_00b31090(iStack_a0 * iStack_38,0);
        CMFCRibbonPanelMenu::SetPreferedSize((CMFCRibbonPanelMenu *)pCStack_24,*puVar7,puVar7[1]);
      }
      else {
        puVar7 = (undefined4 *)thunk_FUN_00b31090(*(int *)(this + 0x2dc) * iStack_38,0);
        CMFCRibbonPanelMenu::SetPreferedSize((CMFCRibbonPanelMenu *)pCStack_24,*puVar7,puVar7[1]);
      }
      (**(code **)(*(int *)pCStack_24 + 0x210))(pCVar6,LStack_20,iStack_1c,0,0,0);
      CMFCRibbonBaseElement::SetDroppedDown(pCStack_28,pCStack_24);
      iVar3 = CMFCPopupMenu::HasBeenResized(pCStack_24);
      if (iVar3 != 0) {
        CMFCPopupMenu::TriggerResize(pCStack_24);
      }
    }
  }
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_44 ^ (uint)&stack0xfffffffc);
  return;
}



int _AfxDeleteRegKey(char *param_1)

{
  long lVar1;
  LSTATUS LVar2;
  int iVar3;
  CHAR aCStack_124 [264];
  uint uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  HKEY pHStack_10;
  char *pcStack_c;
  char *pcStack_8;
  
  uStack_1c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  pcStack_c = __strdup(param_1);
  if (pcStack_c != (char *)0x0) {
    iVar3 = lstrlenA(pcStack_c);
    pcStack_8 = pcStack_c + iVar3;
    while (pcStack_8 != (char *)0x0) {
      *pcStack_8 = '\0';
      pcStack_8 = (char *)__tcsdec(pcStack_c,pcStack_8);
      lVar1 = AfxRegOpenKeyEx((HKEY__ *)0x80000000,pcStack_c,0,8,&pHStack_10,
                              (CAtlTransactionManager *)0x0);
      if (lVar1 != 0) break;
      uStack_18 = 0x105;
      iStack_14 = 0;
      LVar2 = RegEnumKeyA(pHStack_10,0,aCStack_124,0x105);
      if (LVar2 == 0) {
        iStack_14 = 1;
      }
      RegCloseKey(pHStack_10);
      if (iStack_14 != 0) break;
      AfxRegDeleteKey((HKEY__ *)0x80000000,pcStack_c,(CAtlTransactionManager *)0x0);
      pcStack_8 = _tcsrchr(pcStack_c,0x5c);
    }
    __msize(pcStack_c);
  }
  iVar3 = __security_check_cookie(uStack_1c ^ (uint)&stack0xfffffffc);
  return iVar3;
}



int __thiscall CMFCRibbonPanel::GetCount(CMFCRibbonPanel *this)

{
  int iVar1;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",
             0x270);
  iVar1 = thunk_FUN_007fcfa0();
  return iVar1;
}



CEdit * __thiscall CListCtrl::GetEditControl(CListCtrl *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  CEdit *pCVar4;
  HWND__ *pHVar5;
  CWnd *pCVar6;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxcmn.inl",200);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar4 = (CEdit *)(*pcVar1)();
      return pCVar4;
    }
  }
  pHVar5 = (HWND__ *)SendMessageA(*(HWND *)(this + 0x20),0x1018,0,0);
  pCVar6 = CWnd::FromHandle(pHVar5);
  return (CEdit *)pCVar6;
}



int __thiscall ATL::CStringT<>::Mid(CStringT<> *this,int param_1)

{
  int in_stack_00000008;
  
  thunk_FUN_006bf080(this,0);
  Mid(this,param_1,in_stack_00000008);
  return param_1;
}



void __thiscall CMenu::AssertValid(CMenu *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  CObject::AssertValid((CObject *)this);
  if (*(int *)(this + 4) != 0) {
    BVar2 = IsMenu(*(HMENU *)(this + 4));
    if (BVar2 == 0) {
      iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winmenu.cpp",
                                  0x46);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}



void __thiscall CMFCVisualManager::OnFillTasksPaneBackground(undefined4 param_1_00,CDC *param_1)

{
  tagRECT *ptVar1;
  CBrush *pCVar2;
  undefined4 extraout_var;
  
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x7df);
  pCVar2 = (CBrush *)&DAT_00c55850;
  ptVar1 = (tagRECT *)thunk_FUN_00b31df0(&DAT_00c55850,extraout_var);
  CDC::FillRect(param_1,ptVar1,pCVar2);
  return;
}



errno_t __cdecl
__invoke_watson_if_oneof
          (errno_t _ExpressionError,errno_t _ErrorValue1,errno_t _ErrorValue2,wchar_t *_Expression,
          wchar_t *_Function,wchar_t *_File,uint _Line,uintptr_t _Reserved)

{
  if ((_ExpressionError != 0) &&
     ((_ExpressionError == _ErrorValue1 || (_ExpressionError == _ErrorValue2)))) {
                    // WARNING: Subroutine does not return
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return _ExpressionError;
}



void __thiscall CDockSite::RemoveRow(CDockSite *this,CDockingPanesRow *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  __POSITION *p_Var4;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdocksite.cpp",
             0x28a);
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdocksite.cpp",
             0x28b);
  iVar2 = CObList::IsEmpty((CObList *)(this + 0x11c));
  if ((iVar2 != 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdocksite.cpp"
                                  ,0x28c), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = thunk_FUN_008d1600();
  iVar3 = (**(code **)(*(int *)param_1 + 0x60))();
  if (iVar3 != 0) {
    ResizeDockSiteByOffset(this,-iVar2,1);
  }
  p_Var4 = CObList::Find((CObList *)(this + 0x11c),(CObject *)param_1,(__POSITION *)0x0);
  if (p_Var4 != (__POSITION *)0x0) {
    (**(code **)(*(int *)this + 0x28c))(p_Var4,0);
    CObList::RemoveAt((CObList *)(this + 0x11c),p_Var4);
    if (param_1 != (CDockingPanesRow *)0x0) {
      (**(code **)(*(int *)param_1 + 4))(1);
    }
  }
  return;
}



void __thiscall CNewTypeDlg::OnOK(CNewTypeDlg *this)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  void *pvVar3;
  
  this_00 = CWnd::GetDlgItem((CWnd *)this,100);
  if ((this_00 == (CWnd *)0x0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\docmgr.cpp",
                                  0x24d), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this_00 == (CWnd *)0x0) {
    thunk_FUN_007113e0();
  }
  iVar2 = CListBox::GetCurSel((CListBox *)this_00);
  if (iVar2 == -1) {
    *(undefined4 *)(this + 0x98) = 0;
  }
  else {
    pvVar3 = CListBox::GetItemDataPtr((CListBox *)this_00,iVar2);
    *(void **)(this + 0x98) = pvVar3;
    AfxAssertValidObject
              (*(CObject **)(this + 0x98),
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\docmgr.cpp",600);
    iVar2 = CObject::IsKindOf(*(CObject **)(this + 0x98),
                              (CRuntimeClass *)&PTR_s_CDocTemplate_00b93994);
    if ((iVar2 == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\docmgr.cpp",
                                    0x259), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  CDialog::OnOK((CDialog *)this);
  return;
}



long COleDropSource::XDropSource::GiveFeedback(ulong param_1)

{
  long lVar1;
  undefined4 in_stack_00000008;
  AFX_MAINTAIN_STATE2 aAStack_c [8];
  
  thunk_FUN_006c4460();
  AFX_MAINTAIN_STATE2::AFX_MAINTAIN_STATE2(aAStack_c,*(AFX_MODULE_STATE **)(param_1 - 4));
  AfxAssertValidObject
            ((CObject *)(param_1 - 0x20),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledrop1.cpp",0xa6);
  lVar1 = (**(code **)(*(int *)(param_1 - 0x20) + 0x5c))(in_stack_00000008);
  AFX_MAINTAIN_STATE2::~AFX_MAINTAIN_STATE2(aAStack_c);
  return lVar1;
}



undefined4 __d_inttype(double param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar3 = (float10)__frnd(param_1);
    if ((NAN(param_1) || NAN((double)fVar3)) == (param_1 == (double)fVar3)) {
      uVar2 = 0;
    }
    else {
      fVar3 = (float10)__frnd(param_1 / 2.0);
      if ((NAN((float10)param_1 / (float10)2.0) || NAN(fVar3)) ==
          ((float10)param_1 / (float10)2.0 == fVar3)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void __fastcall AssertValid(CObject *param_1)

{
  code *pcVar1;
  int iVar2;
  
  CObject::AssertValid(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x29e), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x29f), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 8) < 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x2a3), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(int *)(param_1 + 0xc) < 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x2a4), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x2a5), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = AfxIsValidAddress(*(void **)(param_1 + 4),*(int *)(param_1 + 0xc) * 0xc,1);
    if ((iVar2 == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x2a6), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



undefined4 thunk_FUN_00a336b0(void)

{
  return 0;
}



undefined ** thunk_FUN_00883ff0(void)

{
  return &PTR_s_CObList_00c45ab8;
}



void __thiscall CBaseTabbedPane::FillDefaultTabsOrderArray(CBaseTabbedPane *this)

{
  int iVar1;
  int iVar2;
  int iStack_c;
  
  AfxAssertValidObject
            (*(CObject **)(this + 0x358),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasetabbedpane.cpp",0x330);
  CArray<int,int>::RemoveAll((CArray<int,int> *)(this + 0x35c));
  iVar1 = (**(code **)(**(int **)(this + 0x358) + 0x1b0))();
  for (iStack_c = 0; iStack_c < iVar1; iStack_c = iStack_c + 1) {
    iVar2 = CMFCBaseTabCtrl::GetTabID(*(CMFCBaseTabCtrl **)(this + 0x358),iStack_c);
    CArray<int,int>::Add((CArray<int,int> *)(this + 0x35c),iVar2);
  }
  return;
}



void AfxFormatStrings(CStringT<> *param_1,uint param_2,char **param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b958;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  thunk_FUN_006bef10(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  uStack_8 = 0;
  iVar2 = thunk_FUN_006befc0(param_2);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_006bf6d0(0,"Error: failed to load AfxFormatString string 0x%04x.\n",param_2);
    uVar4 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\apphelp.cpp",0x1a)
    ;
    thunk_FUN_006bf5d0(uVar4,uVar3);
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\apphelp.cpp",0x1b
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
  }
  else {
    pcVar5 = (char *)thunk_FUN_006bf040();
    AfxFormatStrings(param_1,pcVar5,param_3,param_4);
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
  }
  ExceptionList = pvStack_10;
  return;
}



int __thiscall CDC::RestoreDC(CDC *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int iStack_10;
  int iStack_8;
  
  if ((*(int *)(this + 4) == 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",
                                  0xcc), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  if (((*(int *)(this + 4) != *(int *)(this + 8)) && (param_1 != -1)) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",
                                  0xcd), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iStack_8 = 1;
  if (*(int *)(this + 4) != *(int *)(this + 8)) {
    iStack_8 = ::RestoreDC(*(HDC *)(this + 4),param_1);
  }
  if (*(int *)(this + 8) != 0) {
    if ((iStack_8 == 0) || (BVar3 = ::RestoreDC(*(HDC *)(this + 8),param_1), BVar3 == 0)) {
      iStack_10 = 0;
    }
    else {
      iStack_10 = 1;
    }
    return iStack_10;
  }
  return iStack_8;
}



undefined4 * __fastcall FID_conflict_XBoundObjectSite(undefined4 *param_1)

{
  thunk_FUN_00775360();
  *param_1 = COleControlSite::XBoundObjectSite::vftable;
  return param_1;
}



void __thiscall CView::CalcWindowRect(CView *this,tagRECT *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int iStack_14;
  int iStack_10;
  
  if ((param_1 == (tagRECT *)0x0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\viewcore.cpp",
                                  0x82), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == (tagRECT *)0x0) {
    thunk_FUN_007113e0();
  }
  if (param_2 == 0) {
    CWnd::CalcWindowRect((CWnd *)this,param_1,0);
  }
  else {
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    AdjustWindowRectEx(param_1,0,0,uVar3);
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    if ((uVar3 & 0x200000) != 0) {
      iStack_10 = DAT_00c55db8;
      if ((uVar3 & 0x800000) != 0) {
        iStack_10 = DAT_00c55db8 + -1;
      }
      param_1->right = param_1->right + iStack_10;
    }
    if ((uVar3 & 0x100000) != 0) {
      iStack_14 = DAT_00c55dbc;
      if ((uVar3 & 0x800000) != 0) {
        iStack_14 = DAT_00c55dbc + -1;
      }
      param_1->bottom = param_1->bottom + iStack_14;
    }
  }
  return;
}



undefined4 * __thiscall
FID_conflict_GetProcAddress_FindTextW(CDllIsolationWrapperBase *param_1,undefined4 *param_2)

{
  char cVar1;
  HINSTANCE__ *hModule;
  FARPROC pFVar2;
  char *lpProcName;
  
  cVar1 = FID_conflict_operator_();
  if (cVar1 != '\0') {
    lpProcName = "ImageList_GetBkColor";
    hModule = CDllIsolationWrapperBase::GetModuleHandleA(param_1);
    pFVar2 = GetProcAddress(hModule,lpProcName);
    FID_conflict_operator_(pFVar2);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  return param_2;
}



undefined4 __thiscall
InternalAddButton(int *param_1,undefined4 param_2,undefined1 *param_3,int param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  CMFCOutlookBarPaneButton *this;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puStack_2c;
  int *piStack_28;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6c934;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  this = (CMFCOutlookBarPaneButton *)
         CObject::operator_new
                   (0x80,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxoutlookbarpane.cpp",
                    0x104);
  uStack_8 = 0;
  if (this == (CMFCOutlookBarPaneButton *)0x0) {
    piStack_28 = (int *)0x0;
  }
  else {
    piStack_28 = (int *)CMFCOutlookBarPaneButton::CMFCOutlookBarPaneButton(this);
  }
  uStack_8 = 0xffffffff;
  if ((piStack_28 == (int *)0x0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxoutlookbarpane.cpp"
                                  ,0x105), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  if (piStack_28 == (int *)0x0) {
    thunk_FUN_007113e0(uVar2);
  }
  piStack_28[8] = param_4;
  if (param_3 == (undefined1 *)0x0) {
    puStack_2c = &DAT_00b899f7;
  }
  else {
    puStack_2c = param_3;
  }
  thunk_FUN_006bf0e0(puStack_2c);
  (**(code **)(*piStack_28 + 0xc4))(param_2);
  piStack_28[6] = param_1[0x2c5];
  if (param_5 == -1) {
    param_5 = thunk_FUN_006cca30();
  }
  (**(code **)(*param_1 + 0x348))(piStack_28,param_5);
  (**(code **)(*param_1 + 0x210))();
  ExceptionList = pvStack_10;
  return 1;
}



CMFCRibbonBaseElement * __thiscall
CMFCRibbonBaseElement::FindByID(CMFCRibbonBaseElement *this,uint param_1)

{
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbaseribbonelement.cpp",0x19b);
  return (CMFCRibbonBaseElement *)(~-(uint)(*(uint *)(this + 0x48) != param_1) & (uint)this);
}



long COleFrameHook::XOleCommandTarget::QueryInterface(_GUID *param_1,void **param_2)

{
  ulong uVar1;
  void **in_stack_0000000c;
  
  uVar1 = CCmdTarget::ExternalQueryInterface
                    ((CCmdTarget *)param_1[-5].Data4,param_2,in_stack_0000000c);
  return uVar1;
}



ulong __thiscall CListCtrl::GetBkColor(CListCtrl *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  ulong uVar4;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxcmn.inl",0x90);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  uVar4 = SendMessageA(*(HWND *)(this + 0x20),0x1000,0,0);
  return uVar4;
}



int __thiscall
CFrameWnd::OnToolTipText(CFrameWnd *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  char acStack_128 [260];
  uint uStack_24;
  CStringT<> aCStack_20 [4];
  tagNMHDR *ptStack_1c;
  HWND pHStack_18;
  tagNMHDR *ptStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b51fc8;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_24 = uVar2;
  if ((param_2 == (tagNMHDR *)0x0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winfrm.cpp",
                                  0x716), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (param_2 == (tagNMHDR *)0x0) {
    thunk_FUN_007113e0(uVar2,this);
  }
  if ((param_3 == (long *)0x0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winfrm.cpp",
                                  0x717), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (param_3 == (long *)0x0) {
    thunk_FUN_007113e0(uVar2,this);
  }
  if (((*(int *)(param_2 + 8) != -0x208) && (*(int *)(param_2 + 8) != -0x212)) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winfrm.cpp",
                                  0x718), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  ptStack_1c = param_2;
  ptStack_14 = param_2;
  thunk_FUN_006bef10();
  uStack_8 = 0;
  pHStack_18 = *(HWND *)(param_2 + 4);
  if (((*(int *)(param_2 + 8) == -0x208) && ((*(uint *)(ptStack_1c + 100) & 1) != 0)) ||
     ((*(int *)(param_2 + 8) == -0x212 && ((*(uint *)(ptStack_14 + 0xb4) & 1) != 0)))) {
    pHStack_18 = (HWND)GetDlgCtrlID(pHStack_18);
  }
  if (pHStack_18 != (HWND)0x0) {
    iVar3 = AfxLoadString((uint)pHStack_18,acStack_128,0x100);
    if (iVar3 == 0) {
      uStack_8 = 0xffffffff;
      thunk_FUN_006bef70();
      goto LAB_0076462b;
    }
    AfxExtractSubString(aCStack_20,acStack_128,1,'\n');
  }
  if (*(int *)(param_2 + 8) == -0x208) {
    uVar5 = 0xffffffff;
    pcVar4 = (char *)thunk_FUN_006bf040();
    ATL::Checked::strncpy_s((char *)(ptStack_1c + 0x10),0x50,pcVar4,uVar5);
  }
  else {
    uVar6 = 0x50;
    pcVar4 = (char *)thunk_FUN_006bf040();
    ATL::_mbstowcsz((wchar_t *)(ptStack_14 + 0x10),pcVar4,uVar6);
  }
  *param_3 = 0;
  SetWindowPos(*(HWND *)param_2,(HWND)0x0,0,0,0,0,0x213);
  uStack_8 = 0xffffffff;
  thunk_FUN_006bef70(uVar2,this,1);
LAB_0076462b:
  ExceptionList = pvStack_10;
  iVar3 = __security_check_cookie(uStack_24 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



int __thiscall CReBar::CalcDynamicLayout(CReBar *this,int param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  uint in_stack_0000000c;
  
  if (((in_stack_0000000c & 8) != 0) && ((in_stack_0000000c & 2) == 0)) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\barcool.cpp",0xf1
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  (**(code **)(*(int *)this + 0x168))(param_1,in_stack_0000000c & 1,in_stack_0000000c & 2);
  return param_1;
}



void __thiscall
CMFCVisualManagerOffice2007::OnDrawTabsButtonBorder
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CRect *param_2,CMFCButton *param_3,
          uint param_4,CMFCBaseTabCtrl *param_5)

{
  int iVar1;
  
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    CMFCVisualManagerOffice2003::OnDrawTabsButtonBorder
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



long AfxGetClassIDFromString(char *param_1,_GUID *param_2)

{
  LPCOLESTR pOVar1;
  HRESULT HStack_c;
  CStringT<> aCStack_8 [4];
  
  ATL::CStringT<>::CStringT<>(aCStack_8,param_1);
  if (*param_1 == '{') {
    pOVar1 = (LPCOLESTR)FID_conflict_operator_struct_IBindCtx_();
    HStack_c = CLSIDFromString(pOVar1,param_2);
  }
  else {
    pOVar1 = (LPCOLESTR)FID_conflict_operator_struct_IBindCtx_();
    HStack_c = CLSIDFromProgID(pOVar1,param_2);
  }
  thunk_FUN_0070f1b0();
  return HStack_c;
}



ulong __thiscall CMFCRibbonComboBox::GetItemData(CMFCRibbonComboBox *this,int param_1)

{
  ulong uVar1;
  __POSITION *p_Var2;
  ulong *puVar3;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncombobox.cpp",0x6e);
  if ((param_1 == -1) && (param_1 = *(int *)(this + 0x1d0), param_1 == -1)) {
    uVar1 = 0;
  }
  else {
    p_Var2 = CList<>::FindIndex((CList<> *)(this + 0x1b4),param_1);
    if (p_Var2 == (__POSITION *)0x0) {
      uVar1 = 0;
    }
    else {
      puVar3 = CList<>::GetAt((CList<> *)(this + 0x1b4),p_Var2);
      uVar1 = *puVar3;
    }
  }
  return uVar1;
}



int __thiscall CDockablePane::CheckStopSlideCondition(CDockablePane *this,int param_1)

{
  uint uVar1;
  int iVar2;
  tagPOINT *ptVar3;
  tagRECT *ptVar4;
  CWnd *pCVar5;
  uint uVar6;
  
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  iVar2 = (**(code **)(*(int *)this + 0x1e0))();
  if (iVar2 != 0) {
    thunk_FUN_00b31aa0();
    ptVar3 = (tagPOINT *)thunk_FUN_00b31df0();
    CWnd::ClientToScreen((CWnd *)this,ptVar3);
    ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
    pCVar5 = (CWnd *)(**(code **)(*(int *)this + 0x1a0))();
    CWnd::ScreenToClient(pCVar5,ptVar4);
    pCVar5 = (CWnd *)(**(code **)(*(int *)this + 0x1a0))();
    CWnd::GetExStyle(pCVar5);
    thunk_FUN_00b31aa0();
    ptVar3 = (tagPOINT *)thunk_FUN_00b31df0();
    pCVar5 = (CWnd *)(**(code **)(**(int **)(this + 0x31c) + 0x1a4))();
    CWnd::ClientToScreen(pCVar5,ptVar3);
    ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
    pCVar5 = (CWnd *)(**(code **)(*(int *)this + 0x1a0))();
    CWnd::ScreenToClient(pCVar5,ptVar4);
    uVar6 = (**(code **)(*(int *)this + 0x198))();
    if (uVar6 < 0x4001) {
      if (uVar6 == 0x4000) {
        if (*(int *)(this + 0x314) != 1) {
          if (param_1 == 0) {
            thunk_FUN_00b31c40();
          }
          else {
            thunk_FUN_00b31c40();
            thunk_FUN_00b31c40();
          }
        }
      }
      else if ((uVar6 == 0x1000) && (*(int *)(this + 0x314) != 1)) {
        if (param_1 == 0) {
          thunk_FUN_00b31c40();
        }
        else {
          thunk_FUN_00b31c40();
          thunk_FUN_00b31c40();
        }
      }
    }
    else if ((uVar6 == 0x8000) && (*(int *)(this + 0x314) != 1)) {
      if (param_1 == 0) {
        thunk_FUN_00b31c60();
      }
      else {
        thunk_FUN_00b31c60();
        thunk_FUN_00b31c60();
      }
    }
  }
  iVar2 = __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



void __thiscall
CMDIChildWndEx::OnTaskbarTabThumbnailActivate
          (CMDIChildWndEx *this,uint param_1,CWnd *param_2,int param_3)

{
  CFrameWnd *pCVar1;
  CObject *pCVar2;
  
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_00ba4c94,(CObject *)pCVar1);
  AfxAssertValidObject
            (pCVar2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmdichildwndex.cpp",0x592);
  if (param_1 != 2) {
    (**(code **)(*(int *)this + 0x21c))();
  }
  return;
}



void __thiscall CMFCToolBar::SetOrigButtons(CMFCToolBar *this,CObList *param_1)

{
  int iVar1;
  CObject *pCVar2;
  
  while (iVar1 = CObList::IsEmpty((CObList *)(this + 0xbe4)), iVar1 == 0) {
    pCVar2 = CObList::RemoveHead((CObList *)(this + 0xbe4));
    if (pCVar2 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar2 + 4))(1);
    }
  }
  CObList::AddTail((CObList *)(this + 0xbe4),param_1);
  return;
}



void __thiscall CShellManager::FreeItem(CShellManager *this,_ITEMIDLIST *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 4);
  if ((iVar1 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxshellmanager.cpp"
                                  ,0xdb), iVar3 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar1 == 0) {
    thunk_FUN_007113e0();
  }
  if (param_1 != (_ITEMIDLIST *)0x0) {
    (**(code **)(**(int **)(this + 4) + 0x14))(*(undefined4 *)(this + 4),param_1);
  }
  return;
}



undefined4 thunk_FUN_007afe20(void)

{
  return 0;
}



void __thiscall CMFCToolBarComboBoxButton::SetStyle(CMFCToolBarComboBoxButton *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  
  CMFCToolBarButton::SetStyle((CMFCToolBarButton *)this,param_1);
  iVar2 = CMFCToolBar::IsCustomizeMode();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)this + 0x68))();
    if ((iVar2 != 0) && ((*(uint *)(this + 0x24) & 0x40000) == 0)) {
      bVar1 = false;
      goto LAB_00a0004f;
    }
  }
  bVar1 = true;
LAB_00a0004f:
  if (*(int *)(this + 0xb4) != 0) {
    iVar2 = thunk_FUN_006d9400();
    if (iVar2 != 0) {
      CWnd::EnableWindow(*(CWnd **)(this + 0xb4),(uint)!bVar1);
      CWnd::RedrawWindow(*(CWnd **)(this + 0xb4),(tagRECT *)0x0,(CRgn *)0x0,0x105);
    }
  }
  if (*(int *)(this + 0xb0) != 0) {
    iVar2 = thunk_FUN_006d9400();
    if (iVar2 != 0) {
      CWnd::EnableWindow(*(CWnd **)(this + 0xb0),(uint)!bVar1);
      CWnd::RedrawWindow(*(CWnd **)(this + 0xb0),(tagRECT *)0x0,(CRgn *)0x0,0x105);
    }
  }
  return;
}



int __thiscall CMFCPopupMenu::IsEscClose(CMFCPopupMenu *this)

{
  return *(int *)(this + 0x10b4);
}



void ** __thiscall CPtrList::GetHead(CPtrList *this)

{
  code *pcVar1;
  int iVar2;
  void **ppvVar3;
  
  if (*(int *)(this + 4) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxcoll.inl",0x153
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      ppvVar3 = (void **)(*pcVar1)();
      return ppvVar3;
    }
  }
  return (void **)(*(int *)(this + 4) + 8);
}



undefined4 __thiscall thunk_FUN_00737ff0(undefined4 param_1,uint param_2)

{
  thunk_FUN_00738030();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



CWnd * __thiscall CBaseTabbedPane::GetFirstVisibleTab(CBaseTabbedPane *this,int *param_1)

{
  CWnd *pCVar1;
  
  *param_1 = -1;
  if (*(int *)(this + 0x358) == 0) {
    pCVar1 = (CWnd *)0x0;
  }
  else {
    pCVar1 = (CWnd *)(**(code **)(**(int **)(this + 0x358) + 0x25c))(param_1);
  }
  return pCVar1;
}



CPtrArray * __thiscall thunk_FUN_007360b0(CPtrArray *param_1,uint param_2)

{
  CPtrArray::~CPtrArray(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



int __thiscall CDockContext::Track(CDockContext *this)

{
  code *pcVar1;
  tagPOINT tVar2;
  tagPOINT tVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  int iVar6;
  BOOL BVar7;
  tagMSG tStack_20;
  
  pHVar4 = GetCapture();
  if (pHVar4 == (HWND)0x0) {
    CWnd::SetCapture(*(CWnd **)(this + 0x68));
    pCVar5 = CWnd::GetCapture();
    if ((*(CWnd **)(this + 0x68) != pCVar5) &&
       (iVar6 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dockcont.cpp"
                                    ,0x249), iVar6 != 0)) {
      pcVar1 = (code *)swi(3);
      iVar6 = (*pcVar1)();
      return iVar6;
    }
LAB_009f9c68:
    pCVar5 = CWnd::GetCapture();
    if (pCVar5 != *(CWnd **)(this + 0x68)) {
LAB_009f9dbe:
      CancelLoop(this);
      return 0;
    }
    BVar7 = GetMessageA(&tStack_20,(HWND)0x0,0,0);
    if (BVar7 == 0) {
      AfxPostQuitMessage(tStack_20.wParam);
      goto LAB_009f9dbe;
    }
    if (0x200 < tStack_20.message) {
      if (tStack_20.message == 0x202) {
        if (*(int *)(this + 0x88) == 0) {
          EndResize(this);
        }
        else {
          EndDrag(this);
        }
        return 1;
      }
      if (tStack_20.message == 0x204) {
        CancelLoop(this);
        return 0;
      }
LAB_009f9daf:
      DispatchMessageA(&tStack_20);
      goto LAB_009f9c68;
    }
    if (tStack_20.message == 0x200) {
      if (*(int *)(this + 0x88) == 0) {
        tVar3.y = tStack_20.pt.y;
        tVar3.x = tStack_20.pt.x;
        CPoint::CPoint((CPoint *)&stack0xffffffc8,tVar3);
        Stretch(this);
      }
      else {
        tVar2.y = tStack_20.pt.y;
        tVar2.x = tStack_20.pt.x;
        CPoint::CPoint((CPoint *)&stack0xffffffc8,tVar2);
        Move(this);
      }
      goto LAB_009f9c68;
    }
    if (tStack_20.message != 0x100) {
      if (tStack_20.message != 0x101) goto LAB_009f9daf;
      if (*(int *)(this + 0x88) != 0) {
        OnKey(this,tStack_20.wParam,0);
      }
      goto LAB_009f9c68;
    }
    if (*(int *)(this + 0x88) != 0) {
      OnKey(this,tStack_20.wParam,1);
    }
    if (tStack_20.wParam != 0x1b) goto LAB_009f9c68;
    CancelLoop(this);
  }
  return 0;
}



void __thiscall InitHashTable(CObject *param_1,uint param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x58b);
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x58c), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x58d), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    abs(*(long *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (param_3 != 0) {
    uVar3 = thunk_FUN_006c4cb0(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                               (uint)((ulonglong)param_2 * 4));
    *(undefined4 *)(param_1 + 4) = uVar3;
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 == 0) &&
       (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x599), iVar4 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (iVar2 == 0) {
      thunk_FUN_007113e0();
    }
    _memset(*(void **)(param_1 + 4),0,param_2 << 2);
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}



CMap<> * __thiscall CMap<>::CMap<>(CMap<> *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  CMap<> *pCVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b64048;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  thunk_FUN_006c9880(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  if (param_1 < 1) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x57a)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      pCVar3 = (CMap<> *)(*pcVar1)();
      return pCVar3;
    }
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0x11;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x18) = param_1;
  ExceptionList = pvStack_10;
  return this;
}



void __thiscall CVSToolsListBox::OnAfterMoveItemDown(CVSToolsListBox *this,int param_1)

{
  CObject *pCVar1;
  
  pCVar1 = (CObject *)(**(code **)(*(int *)this + 0x18c))(param_1);
  AfxAssertValidObject
            (pCVar1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbarstoolspropertypage.cpp",
             0xb5);
  CUserToolsManager::MoveToolDown(DAT_00c57dd8,(CUserTool *)pCVar1);
  return;
}



long __thiscall CFrameWnd::OnMenuChar(CFrameWnd *this,uint param_1,uint param_2,CMenu *param_3)

{
  long lVar1;
  
  if ((*(int *)(this + 0xfc) != 0) &&
     (*(undefined4 *)(this + 0xfc) = 0, (*(uint *)(this + 0xf0) & 1) == 0)) {
    (**(code **)(*(int *)this + 0x18c))(2);
  }
  lVar1 = CWnd::OnMenuChar((CWnd *)this,param_1,param_2,param_3);
  return lVar1;
}



void __fastcall AssertValid(CObject *param_1)

{
  code *pcVar1;
  int iVar2;
  
  CObject::AssertValid(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    if ((*(int *)(param_1 + 8) != 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x29e), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(int *)(param_1 + 0xc) != 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x29f), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((*(int *)(param_1 + 8) < 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x2a3), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(int *)(param_1 + 0xc) < 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x2a4), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x2a5), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = AfxIsValidAddress(*(void **)(param_1 + 4),*(int *)(param_1 + 0xc) << 2,1);
    if ((iVar2 == 0) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x2a6), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



int __thiscall CTagManager::ReadSize(CTagManager *this,CStringT<> *param_1,CSize *param_2)

{
  char *pcVar1;
  CStringT<> *pCVar2;
  int iVar3;
  CStringT<> aCStack_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5f1a8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  thunk_FUN_006bef10(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  uStack_8 = 0;
  iVar3 = 0;
  pCVar2 = aCStack_14;
  pcVar1 = (char *)thunk_FUN_006bf040();
  iVar3 = ExcludeTag(this,pcVar1,pCVar2,iVar3);
  if (iVar3 == 0) {
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
    iVar3 = 0;
  }
  else {
    iVar3 = ParseSize(aCStack_14,param_2);
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
  }
  ExceptionList = pvStack_10;
  return iVar3;
}



void __thiscall COleControlSite::BindProperty(COleControlSite *this,long param_1,CWnd *param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  CDataBoundProperty *this_00;
  undefined4 uStack_34;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b52f67;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  if (((param_2 != (CWnd *)0x0) && (*(int *)(param_2 + 0x6c) == 0)) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occsite.cpp",
                                  0x600), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == (CWnd *)0x0) || (param_1 == -1)) {
    iStack_14 = 0;
    iStack_18 = *(int *)(this + 0x94);
    while (iStack_18 != 0) {
      iVar3 = thunk_FUN_007834d0(uVar2);
      if (((param_1 == -1) || (*(int *)(iStack_18 + 8) == param_1)) &&
         ((param_2 == (CWnd *)0x0 || (*(int *)(param_2 + 0x6c) == *(int *)(iStack_18 + 0xc))))) {
        if (iStack_14 == 0) {
          *(int *)(this + 0x94) = iVar3;
        }
        else {
          *(int *)(iStack_14 + 0x18) = iVar3;
        }
        if ((*(int *)(iStack_18 + 0xc) != 0) && (*(int *)(*(int *)(iStack_18 + 0xc) + 0x90) != 0)) {
          (**(code **)(**(int **)(*(int *)(iStack_18 + 0xc) + 0x90) + 4))(iStack_18,0);
        }
        if (iStack_18 == 0) {
          ExceptionList = pvStack_10;
          return;
        }
        thunk_FUN_00779fd0(1);
        ExceptionList = pvStack_10;
        return;
      }
      iStack_14 = iStack_18;
      iStack_18 = iVar3;
    }
  }
  else {
    this_00 = (CDataBoundProperty *)
              operator_new(0x1c,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\occsite.cpp",
                           0x603);
    uStack_8 = 0;
    if (this_00 == (CDataBoundProperty *)0x0) {
      uStack_34 = 0;
    }
    else {
      uStack_34 = CDataBoundProperty::CDataBoundProperty
                            (this_00,*(CDataBoundProperty **)(this + 0x94),param_1,0);
    }
    uStack_8 = 0xffffffff;
    *(undefined4 *)(this + 0x94) = uStack_34;
    *(undefined4 *)(*(int *)(this + 0x94) + 0xc) = *(undefined4 *)(param_2 + 0x6c);
