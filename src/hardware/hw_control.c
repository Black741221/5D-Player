/*
 * 硬體驅動與控制模組
 * 行數範圍：24001-28000
 */

      if (iStack_8 < iStack_14) {
        iStack_40 = iStack_14;
      }
      else {
        iStack_40 = iStack_8;
      }
      *(int *)(param_1 + 4) = iStack_40;
      if (*(int *)(param_1 + 4) < iStack_24) {
        iStack_44 = iStack_24;
      }
      else {
        iStack_44 = *(int *)(param_1 + 4);
      }
      *(int *)(param_1 + 4) = iStack_44;
      if (*(int *)(param_1 + 4) < iStack_1c) {
        iStack_48 = iStack_1c;
      }
      else {
        iStack_48 = *(int *)(param_1 + 4);
      }
      *(int *)(param_1 + 4) = iStack_48;
      iVar3 = CPaneDivider::GetWidth(*(CPaneDivider **)(this + 0xc));
      *(int *)param_1 = iStack_18 + iStack_c + iStack_28 + iStack_20 + iVar3;
    }
    else {
      if (iStack_c < iStack_18) {
        iStack_34 = iStack_18;
      }
      else {
        iStack_34 = iStack_c;
      }
      *(int *)param_1 = iStack_34;
      if (*(int *)param_1 < iStack_28) {
        iStack_38 = iStack_28;
      }
      else {
        iStack_38 = *(int *)param_1;
      }
      *(int *)param_1 = iStack_38;
      if (*(int *)param_1 < iStack_20) {
        iStack_3c = iStack_20;
      }
      else {
        iStack_3c = *(int *)param_1;
      }
      *(int *)param_1 = iStack_3c;
      iVar3 = CPaneDivider::GetWidth(*(CPaneDivider **)(this + 0xc));
      *(int *)(param_1 + 4) = iStack_14 + iStack_8 + iStack_24 + iStack_1c + iVar3;
    }
  }
  return;
}



undefined4 InsertBefore(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined4 uVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b54558;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uVar2 = thunk_FUN_006c4270(param_2);
  uStack_8 = 0;
  uVar4 = uVar2;
  uVar5 = extraout_var;
  uVar3 = InsertBefore(param_1,uVar2);
  uStack_8 = 0xffffffff;
  thunk_FUN_006bef70(uVar1,uVar2,uVar4,uVar5);
  ExceptionList = pvStack_10;
  return uVar3;
}



int __thiscall CMFCRibbonTab::OnKey(CMFCRibbonTab *this,int param_1)

{
  CMFCRibbonBar *this_00;
  int iVar1;
  CMFCRibbonPanelMenuBar *pCVar2;
  ulong uVar3;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",0x85);
  AfxAssertValidObject
            (*(CObject **)(this + 0x2c),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",0x86);
  this_00 = CMFCRibbonCategory::GetParentRibbonBar(*(CMFCRibbonCategory **)(this + 0x2c));
  AfxAssertValidObject
            ((CObject *)this_00,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",0x89);
  iVar1 = (**(code **)(*(int *)this + 0x40))();
  if (iVar1 == 0) {
    pCVar2 = CMFCRibbonCategory::GetParentMenuBar(*(CMFCRibbonCategory **)(this + 0x2c));
    if (pCVar2 == (CMFCRibbonPanelMenuBar *)0x0) {
      (**(code **)(*(int *)this_00 + 0x334))(*(undefined4 *)(this + 0x2c),0);
      uVar3 = CMFCRibbonBar::GetHideFlags(this_00);
      if ((uVar3 & 1) == 0) {
        CMFCRibbonBar::SetKeyboardNavigationLevel(this_00,*(CObject **)(this + 0x2c),1);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



char * __cdecl ATL::ChTraitsCRT<char>::StringScanSet(char *param_1,char *param_2)

{
  uchar *puVar1;
  
  puVar1 = __mbspbrk((uchar *)param_1,(uchar *)param_2);
  return (char *)puVar1;
}



char * __cdecl _tcsrchr(char *param_1,uint param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)__tcsrchr(param_1,param_2);
  return pcVar1;
}



void __thiscall CFrameWnd::SetActiveView(CFrameWnd *this,CView *param_1,int param_2)

{
  CView *pCVar1;
  code *pcVar2;
  int iVar3;
  
  if (param_1 != (CView *)0x0) {
    iVar3 = CWnd::IsChild((CWnd *)this,(CWnd *)param_1);
    if ((iVar3 == 0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winfrm.cpp",
                                    0x50f), iVar3 != 0)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CView_00b98a6c);
    if ((iVar3 == 0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winfrm.cpp",
                                    0x510), iVar3 != 0)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pCVar1 = *(CView **)(this + 0xd0);
  if (param_1 != pCVar1) {
    *(undefined4 *)(this + 0xd0) = 0;
    if (pCVar1 != (CView *)0x0) {
      (**(code **)(*(int *)pCVar1 + 0x194))(0,param_1,pCVar1);
    }
    if (((*(int *)(this + 0xd0) == 0) &&
        (*(CView **)(this + 0xd0) = param_1, param_1 != (CView *)0x0)) && (param_2 != 0)) {
      (**(code **)(*(int *)param_1 + 0x194))(1,param_1,pCVar1);
    }
  }
  return;
}



void __thiscall OnCtlColor(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x38))(DAT_00c557f8,param_1);
  (**(code **)(*param_2 + 0x34))(DAT_00c557f4);
  CGdiObject::GetSafeHandle((CGdiObject *)&DAT_00c55850);
  return;
}



void __thiscall CDocManager::OnFileNew(CDocManager *this)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void **ppvVar6;
  CNewTypeDlg aCStack_b8 [152];
  CObject *pCStack_20;
  int iStack_18;
  CObject *pCStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b51d1b;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  iVar3 = CPtrList::IsEmpty((CPtrList *)(this + 4));
  if (iVar3 == 0) {
    ppvVar6 = CPtrList::GetHead((CPtrList *)(this + 4));
    pCStack_14 = (CObject *)*ppvVar6;
    iVar3 = thunk_FUN_006cc590(uVar2);
    if (1 < iVar3) {
      CNewTypeDlg::CNewTypeDlg(aCStack_b8,(CPtrList *)(this + 4));
      uStack_8 = 0;
      iStack_18 = thunk_FUN_006d83c0();
      if (iStack_18 != 1) {
        uStack_8 = 0xffffffff;
        thunk_FUN_0075e9e0();
        ExceptionList = pvStack_10;
        return;
      }
      pCStack_14 = pCStack_20;
      uStack_8 = 0xffffffff;
      thunk_FUN_0075e9e0();
    }
    if ((pCStack_14 == (CObject *)0x0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\docmgr.cpp",
                                    0x399), iVar3 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = CObject::IsKindOf(pCStack_14,(CRuntimeClass *)&PTR_s_CDocTemplate_00b93994);
    if ((iVar3 == 0) &&
       (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\docmgr.cpp",
                                    0x39a), iVar3 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*(int *)pCStack_14 + 0x8c))(0,1);
  }
  else {
    uVar4 = thunk_FUN_006bf6d0(0,"Error: no document templates registered with CWinApp.\n");
    uVar5 = thunk_FUN_006bf580("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\docmgr.cpp",0x387)
    ;
    thunk_FUN_006bf5d0(uVar5,uVar4);
    AfxMessageBox(0xf104,0,0xffffffff);
  }
  ExceptionList = pvStack_10;
  return;
}



CPropertyPage * __thiscall CList<>::RemoveHead(CList<> *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  CPropertyPage *pCVar4;
  int iVar5;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x3ee);
  iVar5 = *(int *)(this + 4);
  if ((iVar5 == 0) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x3ef), iVar3 != 0)) {
    pcVar2 = (code *)swi(3);
    pCVar4 = (CPropertyPage *)(*pcVar2)();
    return pCVar4;
  }
  if (iVar5 == 0) {
    thunk_FUN_007113e0();
  }
  iVar5 = AfxIsValidAddress(*(void **)(this + 4),0xc,1);
  if ((iVar5 == 0) &&
     (iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x3f0), iVar5 != 0)) {
    pcVar2 = (code *)swi(3);
    pCVar4 = (CPropertyPage *)(*pcVar2)();
    return pCVar4;
  }
  puVar1 = *(undefined4 **)(this + 4);
  pCVar4 = (CPropertyPage *)puVar1[2];
  *(undefined4 *)(this + 4) = *puVar1;
  if (*(int *)(this + 4) == 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(this + 4) + 4) = 0;
  }
  ::FreeNode(puVar1);
  return pCVar4;
}



void __thiscall CMFCRibbonBar::ToggleMimimizeState(CMFCRibbonBar *this)

{
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonbar.cpp",
             0x123f);
  if (*(int *)(this + 0x710) != 0) {
    AfxAssertValidObject
              (*(CObject **)(this + 0x710),
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonbar.cpp",0x1243);
    CMFCRibbonCategory::ShowElements
              (*(CMFCRibbonCategory **)(this + 0x710),(uint)(*(int *)(this + 0x31c) == 1));
    CWnd::RedrawWindow((CWnd *)this,(tagRECT *)0x0,(CRgn *)0x0,0x105);
  }
  return;
}



int __thiscall CMDIFrameWndEx::IsPrintPreview(CMDIFrameWndEx *this)

{
  int iVar1;
  
  iVar1 = CFrameImpl::IsPrintPreview((CFrameImpl *)(this + 0x33c));
  return iVar1;
}



tm * __cdecl ___getgmtimebuf(void)

{
  _ptiddata p_Var1;
  int *piVar2;
  tm *ptVar3;
  void *pvVar4;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    piVar2 = __errno();
    *piVar2 = 0xc;
    ptVar3 = (tm *)0x0;
  }
  else {
    if (p_Var1->_gmtimebuf == (void *)0x0) {
      pvVar4 = (void *)__malloc_dbg(0x24,2,"f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\gmtime.c",
                                    0xb2);
      p_Var1->_gmtimebuf = pvVar4;
      if (pvVar4 == (void *)0x0) {
        piVar2 = __errno();
        *piVar2 = 0xc;
        return (tm *)0x0;
      }
    }
    ptVar3 = (tm *)p_Var1->_gmtimebuf;
  }
  return ptVar3;
}



CMFCButton ** __thiscall CList<>::GetPrev(CList<> *this,__POSITION **param_1)

{
  __POSITION *p_Var1;
  code *pcVar2;
  int iVar3;
  CMFCButton **ppCVar4;
  
  p_Var1 = *param_1;
  iVar3 = AfxIsValidAddress(p_Var1,0xc,1);
  if (iVar3 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x336)
    ;
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      ppCVar4 = (CMFCButton **)(*pcVar2)();
      return ppCVar4;
    }
  }
  *param_1 = *(__POSITION **)(p_Var1 + 4);
  return (CMFCButton **)(p_Var1 + 8);
}



undefined4 __thiscall OnUserToolTip(CWnd *param_1,CObject *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  CObject *pCVar2;
  CObject *pCStack_10;
  
  AfxAssertValidObject
            (param_2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbar.cpp",0x19a8);
  pCStack_10 = (CObject *)AFXGetParentFrame(param_1);
  if (pCStack_10 == (CObject *)0x0) {
    uVar1 = 0;
  }
  else {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownFrame_00c45f34,pCStack_10);
    if ((pCVar2 != (CObject *)0x0) &&
       (pCStack_10 = (CObject *)AFXGetParentFrame((CWnd *)pCVar2), pCStack_10 == (CObject *)0x0)) {
      return 0;
    }
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_00ba4c94,pCStack_10);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_00ba5528,pCStack_10);
      if (pCVar2 == (CObject *)0x0) {
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_00ba3478,pCStack_10);
        if (pCVar2 == (CObject *)0x0) {
          pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_00ba47c8,
                                      (CObject *)0x0);
          if (pCVar2 == (CObject *)0x0) {
            uVar1 = 0;
          }
          else {
            uVar1 = (**(code **)(*(int *)pCVar2 + 0x200))(param_2,param_3);
          }
        }
        else {
          uVar1 = (**(code **)(*(int *)pCVar2 + 0x1d0))(param_2,param_3);
        }
      }
      else {
        uVar1 = (**(code **)(*(int *)pCVar2 + 0x1e4))(param_2,param_3);
      }
    }
    else {
      uVar1 = (**(code **)(*(int *)pCVar2 + 0x1f8))(param_2,param_3);
    }
  }
  return uVar1;
}



void __thiscall
CMFCMaskedEdit::OnCharPrintchar(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  CStringT<> aCStack_60 [4];
  undefined1 auStack_5c [4];
  CStringT<> aCStack_58 [4];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  char cStack_39;
  CStringT<> aCStack_38 [4];
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  ulong uStack_1c;
  char cStack_15;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5dcd0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  cVar2 = thunk_FUN_006b82d0(DAT_00c4a700 ^ (uint)&stack0xfffffffc);
  cVar3 = thunk_FUN_006b82d0();
  if ((cVar2 != cVar3) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                  ,0x2cc), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = thunk_FUN_006bf080();
  iVar5 = thunk_FUN_006bf080();
  if ((iVar4 != iVar5) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                  ,0x2cd), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cStack_15 = (char)param_1;
  iVar4 = __ismbcprint((int)(char)param_1);
  if ((iVar4 == 0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                  ,0x2d0), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_1c = CWnd::GetExStyle((CWnd *)this);
  if ((uStack_1c & 8) == 0) {
    if ((uStack_1c & 0x10) != 0) {
      uVar6 = FID_conflict___mbctolower((int)cStack_15);
      cStack_15 = (char)uVar6;
    }
  }
  else {
    uVar6 = FID_conflict___mbctolower((int)cStack_15);
    cStack_15 = (char)uVar6;
  }
  CEdit::GetSel((CEdit *)this,&iStack_28,&iStack_20);
  if ((iStack_28 < 0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                  ,0x2e1), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((iStack_20 < 0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                  ,0x2e2), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((iStack_20 < iStack_28) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                  ,0x2e3), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  GetGroupBounds(this,&iStack_14,&iStack_24,iStack_28,1);
  if (((((iStack_28 < 0) && (iVar4 = thunk_FUN_006bf080(), iVar4 < iStack_20)) ||
       (iStack_28 < iStack_14)) || ((iStack_24 < iStack_28 || (iStack_20 < iStack_14)))) ||
     (iStack_24 < iStack_20)) {
    MessageBeep(0xffffffff);
    CEdit::SetSel((CEdit *)this,iStack_14,iStack_24,0);
  }
  else if (iStack_28 == iStack_20) {
    cVar2 = thunk_FUN_006b82d0();
    if (cVar2 == '\0') {
      if (((iStack_20 == iStack_24) || (iStack_28 < iStack_14)) || (iStack_24 < iStack_28)) {
        iVar4 = thunk_FUN_006bf080();
        if (iVar4 + -1 <= iStack_20) {
          MessageBeep(0xffffffff);
          ExceptionList = pvStack_10;
          return;
        }
        iVar4 = thunk_FUN_006bf080();
        if (iStack_20 < iVar4 + -1) {
          GetGroupBounds(this,&iStack_14,&iStack_24,iStack_20 + 1,1);
        }
        if ((iStack_14 == -1) || (iStack_14 <= iStack_20)) {
          MessageBeep(0xffffffff);
          ExceptionList = pvStack_10;
          return;
        }
        CEdit::SetSel((CEdit *)this,iStack_14,iStack_14,0);
        iStack_28 = iStack_14;
        iStack_20 = iStack_14;
      }
      iVar4 = CheckChar(this,cStack_15,iStack_28);
      if (iVar4 == 0) {
        MessageBeep(0xffffffff);
      }
      else {
        CEdit::SetSel((CEdit *)this,iStack_28,iStack_20 + 1,0);
        iVar4 = 1;
        ATL::CStringT<>::CStringT<>(aCStack_58,cStack_15,1);
        uStack_8 = 0;
        pcVar7 = (char *)thunk_FUN_006bf040();
        CEdit::ReplaceSel((CEdit *)this,pcVar7,iVar4);
        uStack_8 = 0xffffffff;
        thunk_FUN_006bef70();
        ATL::CSimpleStringT<char,0>::SetAt
                  ((CSimpleStringT<char,0> *)(this + 0x74),iStack_20,cStack_15);
        CEdit::SetSel((CEdit *)this,iStack_20 + 1,iStack_20 + 1,0);
        CEdit::GetSel((CEdit *)this,&iStack_28,&iStack_20);
        if (iStack_20 == iStack_24) {
          iVar4 = thunk_FUN_006bf080();
          if (iStack_20 < iVar4 + -1) {
            GetGroupBounds(this,&iStack_14,&iStack_24,iStack_20 + 1,1);
          }
          if ((iStack_14 != -1) && (iStack_20 < iStack_14)) {
            CEdit::SetSel((CEdit *)this,iStack_14,iStack_14,0);
          }
        }
      }
    }
    else {
      iVar4 = CheckChar(this,cStack_15,iStack_28);
      if (iVar4 == 0) {
        MessageBeep(0xffffffff);
      }
      else {
        CEdit::GetSel((CEdit *)this,&iStack_30,&iStack_2c);
        CWnd::OnChar((CWnd *)this,param_1,param_2,param_3);
        DoUpdate(this,1,iStack_30,iStack_2c);
      }
    }
  }
  else {
    iVar4 = CheckChar(this,cStack_15,iStack_28);
    if (iVar4 == 0) {
      MessageBeep(0xffffffff);
    }
    else {
      cVar2 = thunk_FUN_006b82d0();
      if (cVar2 == '\0') {
        if ((iStack_28 < 0) &&
           (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                        ,0x359), iVar4 != 0)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((iStack_20 < 1) &&
           (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                        ,0x35a), iVar4 != 0)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = thunk_FUN_006bf080();
        if ((iVar4 < iStack_28) &&
           (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                        ,0x35b), iVar4 != 0)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iStack_40 = 1;
        iStack_44 = iStack_28;
        cStack_39 = ATL::CSimpleStringT<char,0>::operator[]
                              ((CSimpleStringT<char,0> *)(this + 0x78),iStack_28);
        iStack_34 = 1;
        while ((iStack_34 != 0 && (iStack_44 + iStack_40 < iStack_24))) {
          cVar2 = ATL::CSimpleStringT<char,0>::operator[]
                            ((CSimpleStringT<char,0> *)(this + 0x78),iStack_44 + iStack_40);
          if (cVar2 == cStack_39) {
            iStack_40 = iStack_40 + 1;
          }
          else {
            iStack_34 = 0;
          }
        }
        if (iStack_40 < iStack_20 - iStack_28) {
          MessageBeep(0xffffffff);
          CEdit::SetSel((CEdit *)this,iStack_44,iStack_44 + iStack_40,0);
        }
        else {
          if ((iStack_44 < iStack_14) &&
             (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                          ,0x376), iVar4 != 0)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((iStack_24 < iStack_44 + iStack_40) &&
             (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                          ,0x377), iVar4 != 0)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          ATL::CStringT<>::Mid((CStringT<> *)(this + 0x74),(int)aCStack_38,iStack_44);
          uStack_8 = 1;
          if (0 < iStack_40) {
            iVar4 = thunk_FUN_006bf080();
            if ((iVar4 < iStack_28) &&
               (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                            ,0x37c), iVar4 != 0)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar4 = thunk_FUN_006bf080();
            if ((iVar4 < iStack_20) &&
               (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                            ,0x37d), iVar4 != 0)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iStack_48 = iStack_20 - iStack_28;
            if ((iStack_48 < 1) &&
               (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                            ,0x37f), iVar4 != 0)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar8 = ATL::CStringT<>::Right(aCStack_38,(int)auStack_5c);
            uStack_8._0_1_ = 2;
            thunk_FUN_006c9180(uVar8);
            uStack_8._0_1_ = 1;
            thunk_FUN_006bef70();
            uVar8 = ATL::CStringT<>::CStringT<>(aCStack_60,(char)this[0x80],iStack_48 + -1);
            uStack_8._0_1_ = 3;
            thunk_FUN_006c82a0(uVar8);
            uStack_8 = CONCAT31(uStack_8._1_3_,1);
            thunk_FUN_006bef70();
            iVar4 = thunk_FUN_006bf080();
            if ((iVar4 < 1) &&
               (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxmaskededit.cpp"
                                            ,899), iVar4 != 0)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            ATL::CSimpleStringT<char,0>::SetAt((CSimpleStringT<char,0> *)aCStack_38,0,cStack_15);
          }
          CEdit::SetSel((CEdit *)this,iStack_44,iStack_44 + iStack_40,0);
          iVar4 = 1;
          pcVar7 = (char *)thunk_FUN_006bf040();
          CEdit::ReplaceSel((CEdit *)this,pcVar7,iVar4);
          CEdit::SetSel((CEdit *)this,iStack_44,iStack_44,0);
          iStack_4c = 0;
          while (iVar4 = thunk_FUN_006bf080(), iStack_4c < iVar4) {
            cVar2 = ATL::CSimpleStringT<char,0>::operator[]
                              ((CSimpleStringT<char,0> *)aCStack_38,iStack_4c);
            ATL::CSimpleStringT<char,0>::SetAt
                      ((CSimpleStringT<char,0> *)(this + 0x74),iStack_44 + iStack_4c,cVar2);
            iStack_4c = iStack_4c + 1;
          }
          CEdit::SetSel((CEdit *)this,iStack_28 + 1,iStack_28 + 1,0);
          uStack_8 = 0xffffffff;
          thunk_FUN_006bef70();
        }
      }
      else {
        CEdit::GetSel((CEdit *)this,&iStack_54,&iStack_50);
        CWnd::OnChar((CWnd *)this,param_1,param_2,param_3);
        DoUpdate(this,1,iStack_54,iStack_50);
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}



int __thiscall CMDIClientAreaWnd::IsKeepClientEdge(CMDIClientAreaWnd *this)

{
  HWND__ *pHVar1;
  CWnd *this_00;
  HWND hWnd;
  BOOL BVar2;
  ulong uVar3;
  bool bVar4;
  int iStack_18;
  
  bVar4 = false;
  pHVar1 = (HWND__ *)CWnd::SendMessageA((CWnd *)this,0x229,0,0);
  if (pHVar1 != (HWND__ *)0x0) {
    this_00 = CWnd::FromHandle(pHVar1);
    if (this_00 != (CWnd *)0x0) {
      hWnd = (HWND)thunk_FUN_006d9400();
      BVar2 = IsWindow(hWnd);
      if (BVar2 != 0) {
        uVar3 = CWnd::GetExStyle(this_00);
        bVar4 = (uVar3 & 0x80000) != 0;
      }
    }
  }
  if ((*(int *)(this + 0x2908) == 0) && (bVar4)) {
    iStack_18 = 1;
  }
  else {
    iStack_18 = 0;
  }
  return iStack_18;
}



void __thiscall
COleCntrFrameWndEx::DockPane
          (COleCntrFrameWndEx *this,CBasePane *param_1,uint param_2,tagRECT *param_3)

{
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxolecntrframewndex.cpp",0x8b);
  CDockingManager::DockPane((CDockingManager *)(this + 0x114),param_1,param_2,param_3);
  (**(code **)(*(int *)this + 0x1c4))(0);
  return;
}



void __thiscall CArray<>::SetSize(CArray<> *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_24;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x16f);
  if ((param_1 < 0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x170), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 < 0) {
    thunk_FUN_007113e0();
  }
  if (-1 < param_2) {
    *(int *)(this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)(this + 4) != 0) {
      for (iStack_8 = 0; iStack_8 < *(int *)(this + 8); iStack_8 = iStack_8 + 1) {
      }
      abs(*(long *)(this + 4));
      *(undefined4 *)(this + 4) = 0;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else if (*(int *)(this + 4) == 0) {
    if ((0x3fffffff < (uint)param_1) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x189), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)(this + 0x10) < param_1) {
      iStack_48 = param_1;
    }
    else {
      iStack_48 = *(int *)(this + 0x10);
    }
    pvVar3 = operator_new__(iStack_48 << 2,
                            "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x18c);
    *(void **)(this + 4) = pvVar3;
    _memset(*(void **)(this + 4),0,iStack_48 << 2);
    for (iStack_10 = 0; iStack_10 < param_1; iStack_10 = iStack_10 + 1) {
      thunk_FUN_006be700(4,*(int *)(this + 4) + iStack_10 * 4);
    }
    *(int *)(this + 8) = param_1;
    *(int *)(this + 0xc) = iStack_48;
  }
  else if (*(int *)(this + 0xc) < param_1) {
    param_2 = *(int *)(this + 0x10);
    if (param_2 == 0) {
      iStack_50 = (int)(*(int *)(this + 8) + (*(int *)(this + 8) >> 0x1f & 7U)) >> 3;
      if (iStack_50 < 4) {
        iStack_4c = 4;
      }
      else {
        if (0x400 < iStack_50) {
          iStack_50 = 0x400;
        }
        iStack_4c = iStack_50;
      }
      param_2 = iStack_4c;
    }
    if (param_1 < *(int *)(this + 0xc) + param_2) {
      uStack_1c = *(int *)(this + 0xc) + param_2;
    }
    else {
      uStack_1c = param_1;
    }
    if (((int)uStack_1c < *(int *)(this + 0xc)) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x1bc), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((int)uStack_1c < *(int *)(this + 0xc)) {
      thunk_FUN_007113e0();
    }
    if ((0x3fffffff < uStack_1c) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x1c2), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar3 = (void *)thunk_FUN_006c4cb0(uStack_1c << 2);
    ATL::Checked::memmove_s(pvVar3,uStack_1c << 2,*(void **)(this + 4),*(int *)(this + 8) << 2);
    if ((param_1 <= *(int *)(this + 8)) &&
       (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                    0x1cb), iVar2 != 0)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _memset((void *)((int)pvVar3 + *(int *)(this + 8) * 4),0,(param_1 - *(int *)(this + 8)) * 4);
    for (iStack_24 = 0; iStack_24 < param_1 - *(int *)(this + 8); iStack_24 = iStack_24 + 1) {
      thunk_FUN_006be700(4,(int)pvVar3 + iStack_24 * 4 + *(int *)(this + 8) * 4);
    }
    abs(*(long *)(this + 4));
    *(void **)(this + 4) = pvVar3;
    *(int *)(this + 8) = param_1;
    *(uint *)(this + 0xc) = uStack_1c;
  }
  else {
    if (*(int *)(this + 8) < param_1) {
      _memset((void *)(*(int *)(this + 4) + *(int *)(this + 8) * 4),0,
              (param_1 - *(int *)(this + 8)) * 4);
      for (iStack_14 = 0; iStack_14 < param_1 - *(int *)(this + 8); iStack_14 = iStack_14 + 1) {
        thunk_FUN_006be700(4,*(int *)(this + 4) + *(int *)(this + 8) * 4 + iStack_14 * 4);
      }
    }
    else if (param_1 < *(int *)(this + 8)) {
      for (iStack_18 = 0; iStack_18 < *(int *)(this + 8) - param_1; iStack_18 = iStack_18 + 1) {
      }
    }
    *(int *)(this + 8) = param_1;
  }
  return;
}



CMFCPropertyGridProperty * __thiscall
thunk_FUN_0084c120(CMFCPropertyGridProperty *param_1,uint param_2)

{
  CMFCPropertyGridProperty::~CMFCPropertyGridProperty(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



CMFCVisualManagerOfficeXP * __thiscall
thunk_FUN_009397a0(CMFCVisualManagerOfficeXP *param_1,uint param_2)

{
  CMFCVisualManagerOfficeXP::~CMFCVisualManagerOfficeXP(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



void __thiscall CMFCRibbonTab::GetKeyTipRect(CMFCRibbonTab *this,CDC *param_1,int param_2)

{
  tagSIZE *ptVar1;
  int iVar2;
  tagRECT *ptVar3;
  int *piVar4;
  uint uVar5;
  int iStack_68;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",0x61);
  AfxAssertValidObject
            ((CObject *)param_2,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",0x62);
  AfxAssertValidObject
            (*(CObject **)(this + 0x2c),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",99);
  AfxAssertValidObject
            (*(CObject **)(*(int *)(this + 0x2c) + 0x3c0),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribboncategory.cpp",100);
  (**(code **)(*(int *)this + 0x13c))(&iStack_48,param_2);
  ptVar1 = (tagSIZE *)thunk_FUN_00b31090(0,0);
  iVar2 = CSize::operator==((CSize *)&iStack_48,*ptVar1);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_00b31e30();
    if (iVar2 == 0) {
      CRect::CRect((CRect *)&iStack_30,0,0,0,0);
      uStack_18 = *(undefined4 *)(this + 0x18);
      iStack_14 = *(int *)(this + 0x1c);
      uStack_10 = *(undefined4 *)(this + 0x20);
      uStack_c = *(undefined4 *)(this + 0x24);
      uStack_40 = *(undefined4 *)(this + 0x18);
      uStack_3c = *(undefined4 *)(this + 0x1c);
      uStack_38 = *(undefined4 *)(this + 0x20);
      iStack_34 = *(int *)(this + 0x24);
      uVar5 = 0x424;
      ptVar3 = (tagRECT *)thunk_FUN_00b31df0();
      CDC::DrawTextA((CDC *)param_2,(CStringT<> *)(*(int *)(this + 0x2c) + 0x30),ptVar3,uVar5);
      iStack_1c = thunk_FUN_00b31c40();
      iVar2 = thunk_FUN_00b31c40();
      if ((iVar2 - iStack_1c) / 2 < 4) {
        iStack_68 = 4;
      }
      else {
        iVar2 = thunk_FUN_00b31c40();
        iStack_68 = (iVar2 - iStack_1c) / 2;
      }
      iStack_20 = iStack_68;
      CRect::DeflateRect((CRect *)&uStack_18,iStack_68,0);
      iStack_14 = iStack_14 + 3;
      piVar4 = (int *)CRect::CenterPoint((CRect *)&uStack_18);
      iStack_30 = *piVar4 - iStack_48 / 2;
      iStack_28 = iStack_30 + iStack_48;
      iStack_2c = iStack_34 + -2;
      iStack_24 = iStack_2c + iStack_44;
      *(int *)param_1 = iStack_30;
      *(int *)(param_1 + 4) = iStack_2c;
      *(int *)(param_1 + 8) = iStack_28;
      *(int *)(param_1 + 0xc) = iStack_24;
      goto LAB_00992613;
    }
  }
  CRect::CRect((CRect *)param_1,0,0,0,0);
LAB_00992613:
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall CMFCPropertyGridCtrl::DrawControlBarColors(CMFCPropertyGridCtrl *this)

{
  return *(int *)(this + 0x354);
}



CMFCRibbonPanelMenu * __thiscall
CMFCRibbonPanel::ShowPopup(CMFCRibbonPanel *this,CMFCRibbonDefaultPanelButton *param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  CMFCRibbonBar *this_00;
  CFont *pCVar6;
  CMFCRibbonPanelMenu *pCVar7;
  LONG LStack_6c;
  CMFCPopupMenu *pCStack_68;
  CClientDC aCStack_44 [20];
  CWnd *pCStack_30;
  tagRECT tStack_2c;
  uint uStack_1c;
  uint uStack_18;
  CMFCPopupMenu *pCStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6b59c;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_1c = uVar2;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",
             0xf24);
  if (param_1 == (CMFCRibbonDefaultPanelButton *)0x0) {
    param_1 = (CMFCRibbonDefaultPanelButton *)(this + 0xb8);
  }
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",0xf2b);
  pCStack_30 = (CWnd *)(**(code **)(*(int *)param_1 + 0x98))(uVar2);
  if (pCStack_30 != (CWnd *)0x0) {
    if (*(int *)(this + 0xa8) != 0) {
      AfxAssertValidObject
                (*(CObject **)(this + 0xa8),
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",0xf35);
      CMFCRibbonCategory::EnsureVisible
                (*(CMFCRibbonCategory **)(this + 0xa8),(CMFCRibbonButton *)param_1);
    }
    uVar3 = CWnd::GetExStyle(pCStack_30);
    uStack_18 = uVar3 & 0x400000;
    iVar4 = thunk_FUN_008e8fc0();
    if (iVar4 == 0) {
      iVar4 = *(int *)(this + 0xa8);
      if ((iVar4 == 0) &&
         (iVar5 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp"
                                      ,0xf3d), iVar5 != 0)) {
        pcVar1 = (code *)swi(3);
        pCVar7 = (CMFCRibbonPanelMenu *)(*pcVar1)();
        return pCVar7;
      }
      if (iVar4 == 0) {
        thunk_FUN_007113e0();
      }
      AfxAssertValidObject
                (*(CObject **)(this + 0xa8),
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",0xf3e);
      this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)param_1);
      AfxAssertValidObject
                ((CObject *)this_00,
                 "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",0xf41);
      CClientDC::CClientDC(aCStack_44,(CWnd *)this_00);
      uStack_8 = 0;
      pCVar6 = CWnd::GetFont((CWnd *)this_00);
      pCVar6 = CDC::SelectObject((CDC *)aCStack_44,pCVar6);
      if ((pCVar6 == (CFont *)0x0) &&
         (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp"
                                      ,0xf46), iVar4 != 0)) {
        pcVar1 = (code *)swi(3);
        pCVar7 = (CMFCRibbonPanelMenu *)(*pcVar1)();
        return pCVar7;
      }
      if (pCVar6 == (CFont *)0x0) {
        thunk_FUN_007113e0();
      }
      iVar4 = CMFCRibbonCategory::GetMaxHeight
                        (*(CMFCRibbonCategory **)(this + 0xa8),(CDC *)aCStack_44);
      (**(code **)(*(int *)this + 0x2c))(aCStack_44,iVar4);
      CDC::SelectObject((CDC *)aCStack_44,pCVar6);
      uStack_8 = 0xffffffff;
      CClientDC::~CClientDC(aCStack_44);
    }
    tStack_2c.left = *(LONG *)(param_1 + 0x18);
    tStack_2c.top = *(LONG *)(param_1 + 0x1c);
    tStack_2c.right = *(LONG *)(param_1 + 0x20);
    tStack_2c.bottom = *(LONG *)(param_1 + 0x24);
    CWnd::ClientToScreen(pCStack_30,&tStack_2c);
    pCVar7 = (CMFCRibbonPanelMenu *)
             CObject::operator_new
                       (0x1f00,
                        "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonpanel.cpp",0xf51
                       );
    uStack_8 = 1;
    if (pCVar7 == (CMFCRibbonPanelMenu *)0x0) {
      pCStack_68 = (CMFCPopupMenu *)0x0;
    }
    else {
      pCStack_68 = (CMFCPopupMenu *)CMFCRibbonPanelMenu::CMFCRibbonPanelMenu(pCVar7,this);
    }
    uStack_8 = 0xffffffff;
    pCStack_14 = pCStack_68;
    CMFCPopupMenu::SetParentRibbonElement(pCStack_68,(CMFCRibbonBaseElement *)param_1);
    if (uStack_18 == 0) {
      LStack_6c = tStack_2c.left;
    }
    else {
      LStack_6c = tStack_2c.right;
    }
    (**(code **)(*(int *)pCStack_14 + 0x210))(pCStack_30,LStack_6c,tStack_2c.bottom,0,0,0);
    CMFCRibbonBaseElement::SetDroppedDown((CMFCRibbonBaseElement *)param_1,pCStack_14);
  }
  ExceptionList = pvStack_10;
  pCVar7 = (CMFCRibbonPanelMenu *)__security_check_cookie(uStack_1c ^ (uint)&stack0xfffffffc);
  return pCVar7;
}



int __thiscall
CToolTipCtrl::AddTool(CToolTipCtrl *this,CWnd *param_1,uint param_2,tagRECT *param_3,uint param_4)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  tagTOOLINFOA atStack_38 [16];
  undefined1 auStack_28 [16];
  HINSTANCE__ *pHStack_18;
  uint uStack_14;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\tooltip.cpp",0x9f
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\tooltip.cpp",0xa0
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_1 == (CWnd *)0x0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\tooltip.cpp",0xa1
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (((param_3 == (tagRECT *)0x0) || (param_4 == 0)) &&
     ((param_3 != (tagRECT *)0x0 || (param_4 != 0)))) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\tooltip.cpp",0xa4
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FillInToolInfo(this,atStack_38,param_1,param_4);
  if (param_3 != (tagRECT *)0x0) {
    ATL::Checked::memmove_s(auStack_28,0x10,param_3,0x10);
  }
  pHStack_18 = AfxGetResourceHandle();
  if (pHStack_18 == (HINSTANCE__ *)0x0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\tooltip.cpp",0xaf
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uStack_14 = param_2 & 0xffff;
  SendMessageA(*(HWND *)(this + 0x20),0x404,0,(LPARAM)atStack_38);
  iVar3 = __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}



undefined4 __thiscall thunk_FUN_00766210(undefined4 param_1,uint param_2)

{
  thunk_FUN_007661f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



void __thiscall CWnd::HideCaret(CWnd *this)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  BVar2 = IsWindow(*(HWND *)(this + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin2.inl",0x14d
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::HideCaret(*(HWND *)(this + 0x20));
  return;
}



COleDocIPFrameWndEx * __thiscall COleDocIPFrameWndEx::COleDocIPFrameWndEx(COleDocIPFrameWndEx *this)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b306;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  COleDocIPFrameWnd::COleDocIPFrameWnd((COleDocIPFrameWnd *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  CFrameImpl::CFrameImpl((CFrameImpl *)(this + 0x194),(CFrameWnd *)this);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  CDockingManager::CDockingManager((CDockingManager *)(this + 0x298));
  ExceptionList = pvStack_10;
  return this;
}



int __thiscall CPaneFrameWnd::IsRollDown(CPaneFrameWnd *this)

{
  tagPOINT tVar1;
  tagPOINT tVar2;
  tagPOINT *ptVar3;
  int iVar4;
  tagPOINT tStack_24;
  CWnd *pCStack_1c;
  CRect aCStack_18 [16];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  CPoint::CPoint((CPoint *)&tStack_24);
  GetCursorPos(&tStack_24);
  thunk_FUN_00b31aa0();
  ptVar3 = (tagPOINT *)thunk_FUN_00b31df0();
  CWnd::ClientToScreen((CWnd *)this,ptVar3);
  tVar1.y = tStack_24.y;
  tVar1.x = tStack_24.x;
  pCStack_1c = CWnd::WindowFromPoint(tVar1);
  tVar2.y = tStack_24.y;
  tVar2.x = tStack_24.x;
  iVar4 = CRect::PtInRect(aCStack_18,tVar2);
  if (iVar4 != 0) {
    thunk_FUN_006d9400();
    thunk_FUN_006d9400();
  }
  iVar4 = __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}



CPropertyPage * __thiscall
CPropertyPage::CPropertyPage(CPropertyPage *this,wchar_t *param_1,uint param_2,ulong param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CPropertyPage *pCVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b50ff2;
  pvStack_10 = ExceptionList;
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  CDialog::CDialog((CDialog *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  thunk_FUN_006bef10(uVar2);
  uStack_8._0_1_ = 1;
  thunk_FUN_006bef10();
  uStack_8._0_1_ = 2;
  thunk_FUN_006bef10();
  uStack_8 = CONCAT31(uStack_8._1_3_,3);
  iVar3 = AfxIsValidString(param_1,-1);
  if ((iVar3 == 0) &&
     (iVar4 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\dlgprop.cpp",
                                  0x65), iVar4 != 0)) {
    pcVar1 = (code *)swi(3);
    pCVar5 = (CPropertyPage *)(*pcVar1)();
    return pCVar5;
  }
  if (iVar3 == 0) {
    thunk_FUN_007113e0();
  }
  AllocPSP(this,param_3);
  CommonConstruct(this,(char *)param_1,param_2);
  ExceptionList = pvStack_10;
  return this;
}



long COleServerItem::XDataObject::EnumDAdvise(IEnumSTATDATA **param_1)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000008 = 0;
  if (param_1[-0xf] == (IEnumSTATDATA *)0x0) {
    lVar2 = -0x7fffbffb;
  }
  else {
    if (param_1[-0xf] == (IEnumSTATDATA *)0x0) {
      iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr2.cpp",
                                  0x553);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        lVar2 = (*pcVar1)();
        return lVar2;
      }
    }
    lVar2 = (*param_1[-0xf]->lpVtbl->Reset)(param_1[-0xf]);
  }
  return lVar2;
}



void __cdecl Afx_clearerr_s(_iobuf *param_1)

{
  errno_t eVar1;
  
  eVar1 = _clearerr_s(param_1);
  AfxCrtErrorCheck(eVar1);
  return;
}



void __thiscall COleClientItem::UpdateItemType(COleClientItem *this)

{
  code *pcVar1;
  int iVar2;
  uint uStack_c;
  IUnknown *pIStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",0x18e);
  if (*(int *)(this + 0x24) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olecli1.cpp",399)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIStack_8 = _AfxQueryInterface(*(IUnknown **)(this + 0x24),(_GUID *)&DAT_00bf9328);
  if (pIStack_8 == (IUnknown *)0x0) {
    iVar2 = (**(code **)(**(int **)(this + 0x24) + 0x58))(*(undefined4 *)(this + 0x24),1,&uStack_c);
    if ((iVar2 == 0) && ((uStack_c & 8) == 0)) {
      *(undefined4 *)(this + 0x54) = 2;
    }
    else {
      *(undefined4 *)(this + 0x54) = 3;
    }
  }
  else {
    (*pIStack_8->lpVtbl->Release)(pIStack_8);
    *(undefined4 *)(this + 0x54) = 1;
  }
  return;
}



int _AfxIsComboBoxControl(HWND__ *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  CHAR aCStack_14 [12];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (HWND__ *)0x0) &&
     (uVar1 = GetWindowLongA(param_1,-0x10), (uVar1 & 0xf) == param_2)) {
    GetClassNameA(param_1,aCStack_14,10);
    AfxInvariantStrICmp(aCStack_14,"combobox");
  }
  iVar2 = __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}



void __fastcall thunk_FUN_008261b0(undefined4 param_1)

{
  thunk_FUN_008261d0(param_1);
  return;
}



void GetFileTitle(LPCSTR param_1,LPSTR param_2,WORD param_3)

{
  GetFileTitleA(param_1,param_2,param_3);
  return;
}



void __thiscall CFrameWnd::OnUpdateControlBarMenu(CFrameWnd *this,CCmdUI *param_1)

{
  code *pcVar1;
  int iVar2;
  CControlBar *this_00;
  ulong uVar3;
  
  if ((param_1 == (CCmdUI *)0x0) &&
     (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\winfrm.cpp",
                                  0x6fa), iVar2 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == (CCmdUI *)0x0) {
    thunk_FUN_007113e0();
  }
  this_00 = GetControlBar(this,*(uint *)(param_1 + 4));
  if (this_00 == (CControlBar *)0x0) {
    CCmdUI::ContinueRouting(param_1);
  }
  else {
    uVar3 = CWnd::GetExStyle((CWnd *)this_00);
    (**(code **)(*(int *)param_1 + 4))((uVar3 & 0x10000000) != 0);
  }
  return;
}



ulong CDrawingManager::PixelAlpha(ulong param_1,int param_2)

{
  undefined1 uStack_14;
  undefined1 uStack_10;
  undefined1 uStack_c;
  
  if ((int)((param_1 & 0xff) * param_2) / 100 < 0x100) {
    uStack_c = (undefined1)((int)((param_1 & 0xff) * param_2) / 100);
  }
  else {
    uStack_c = 0xff;
  }
  if ((((int)(param_1 & 0xffff) >> 8) * param_2) / 100 < 0x100) {
    uStack_10 = (undefined1)((((int)(param_1 & 0xffff) >> 8) * param_2) / 100);
  }
  else {
    uStack_10 = 0xff;
  }
  if ((int)((param_1 >> 0x10 & 0xff) * param_2) / 100 < 0x100) {
    uStack_14 = (undefined1)((int)((param_1 >> 0x10 & 0xff) * param_2) / 100);
  }
  else {
    uStack_14 = 0xff;
  }
  return (uint)CONCAT12(uStack_14,CONCAT11(uStack_10,uStack_c));
}



void __thiscall CDockingManager::AdjustPaneFrames(CDockingManager *this)

{
  CObject *pCVar1;
  CWnd *this_00;
  undefined4 *puVar2;
  int iStack_c;
  uint uStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockingmanager.cpp",0x5ef);
  uStack_8 = 0x37;
  iStack_c = 0;
  iStack_c = thunk_FUN_006ccba0();
  while (iStack_c != 0) {
    puVar2 = (undefined4 *)::GetNext(&iStack_c);
    pCVar1 = (CObject *)*puVar2;
    AfxAssertValidObject
              (pCVar1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockingmanager.cpp",
               0x5f8);
    (**(code **)(*(int *)pCVar1 + 0x23c))(0,0xffffffff,0xffffffff,0xffffffff,0xffffffff,uStack_8,0);
  }
  iStack_c = thunk_FUN_006ccba0();
  while (iStack_c != 0) {
    puVar2 = (undefined4 *)::GetNext(&iStack_c);
    this_00 = (CWnd *)*puVar2;
    AfxAssertValidObject
              ((CObject *)this_00,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockingmanager.cpp",0x600);
    CWnd::SetWindowPos(this_00,(CWnd *)0x0,-1,-1,-1,-1,uStack_8);
    (**(code **)(*(int *)this_00 + 0x200))();
  }
  return;
}



bool __fastcall FID_conflict_operator_(int *param_1)

{
  return *param_1 == 0;
}



void __thiscall CMFCRibbonBaseElement::SetID(CMFCRibbonBaseElement *this,uint param_1)

{
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbaseribbonelement.cpp",0xdb);
  *(uint *)(this + 0x48) = param_1;
  return;
}



int __thiscall COleDropTarget::Register(COleDropTarget *this,CWnd *param_1)

{
  code *pcVar1;
  int iVar2;
  IUnknown *pUnk;
  HRESULT HVar3;
  LPDROPTARGET pDropTarget;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledrop2.cpp",0x48);
  if (*(int *)(this + 0x20) != 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledrop2.cpp",
                                0x49);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledrop2.cpp",
             0x4a);
  pUnk = CCmdTarget::GetInterface((CCmdTarget *)this,&DAT_00bf8b30);
  if (pUnk == (IUnknown *)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledrop2.cpp",
                                0x4d);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  HVar3 = CoLockObjectExternal(pUnk,1,0);
  if (HVar3 == 0) {
    pDropTarget = (LPDROPTARGET)CCmdTarget::GetInterface((CCmdTarget *)this,&DAT_00bf9404);
    HVar3 = RegisterDragDrop(*(HWND *)(param_1 + 0x20),pDropTarget);
    if (HVar3 == 0) {
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(param_1 + 100) != 0) {
        iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledrop2.cpp"
                                    ,0x5d);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          iVar2 = (*pcVar1)();
          return iVar2;
        }
      }
      *(COleDropTarget **)(param_1 + 100) = this;
      iVar2 = 1;
    }
    else {
      CoLockObjectExternal(pUnk,0,0);
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



void __thiscall CMultiPaneFrameWnd::CloseMiniFrame(CMultiPaneFrameWnd *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x224))();
  if (iVar1 != 0) {
    CWnd::ShowWindow((CWnd *)this,0);
    (**(code **)(*(int *)(this + 0x180) + 100))();
  }
  return;
}



int __thiscall CDC::ScaleViewportExt(CDC *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  int in_stack_00000014;
  tagSIZE tStack_c;
  
  if (*(int *)(this + 4) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",0x1d3
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  CSize::CSize((CSize *)&tStack_c);
  if (*(int *)(this + 4) != *(int *)(this + 8)) {
    BVar3 = ScaleViewportExtEx(*(HDC *)(this + 4),param_2,param_3,param_4,in_stack_00000014,
                               &tStack_c);
    if (BVar3 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",
                                  0x1d7);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
  }
  if (*(int *)(this + 8) != 0) {
    BVar3 = ScaleViewportExtEx(*(HDC *)(this + 8),param_2,param_3,param_4,in_stack_00000014,
                               &tStack_c);
    if (BVar3 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\wingdi.cpp",
                                  0x1d9);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
    }
  }
  *(LONG *)param_1 = tStack_c.cx;
  *(LONG *)(param_1 + 4) = tStack_c.cy;
  return param_1;
}



void __thiscall thunk_FUN_00abb8d0(COleServerItem *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  COleServerDoc *pCVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b7bfc0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (param_2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr2.cpp",
                                0x2e2);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pCVar3 = COleServerItem::GetDocument(param_1);
  *(int *)(pCVar3 + 0x100) = param_2;
  uStack_8 = 0;
  if (*(int *)(pCVar3 + 0x100) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olesvr2.cpp",
                                0x2eb);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(int *)pCVar3 + 0x144))(param_1);
  FUN_00abb9c7();
  return;
}



uint __thiscall
CPalette::GetPaletteEntries(CPalette *this,uint param_1,uint param_2,tagPALETTEENTRY *param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  UINT UVar4;
  
  if (*(int *)(this + 4) == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin1.inl",0xf7)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  UVar4 = ::GetPaletteEntries(*(HPALETTE *)(this + 4),param_1,param_2,param_3);
  return UVar4;
}



undefined ** thunk_FUN_00869070(void)

{
  return &PTR_thunk_FUN_006f5490_00bab224;
}



undefined4 * __fastcall thunk_FUN_00a5a400(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



void __thiscall
CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,CMFCTasksPaneTaskGroup *param_2,
          int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  tagRECT *ptVar4;
  CBrush *pCVar5;
  ulong uVar6;
  CSize *pCVar7;
  CPoint *pCVar8;
  uint uVar9;
  IMAGE_STATE IVar10;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_b8;
  int iStack_b4;
  tagRECT tStack_b0;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  tagPOINT tStack_74;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  int iStack_38;
  ulong uStack_34;
  CDrawingManager aCStack_30 [8];
  int iStack_28;
  CRgn aCStack_24 [8];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b66950;
  pvStack_10 = ExceptionList;
  uStack_3c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2003.cpp",
             0x6c7);
  AfxAssertValidObject
            ((CObject *)param_2,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2003.cpp",
             0x6c8);
  AfxAssertValidObject
            (*(CObject **)(param_2 + 4),
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanageroffice2003.cpp",
             0x6c9);
  if ((DAT_00c5593c < 9) ||
     (iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode((AFX_GLOBAL_DATA *)&DAT_00c55790), iVar2 != 0)) {
    CMFCVisualManagerOfficeXP::OnDrawTasksGroupCaption
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_3,param_4,param_5);
    goto LAB_009316d2;
  }
  iStack_84 = *(int *)(param_2 + 0x34);
  iStack_80 = *(int *)(param_2 + 0x38);
  iStack_7c = *(int *)(param_2 + 0x3c);
  iStack_78 = *(int *)(param_2 + 0x40);
  tStack_74.x = *(LONG *)(param_2 + 0x34);
  iStack_98 = *(int *)(param_2 + 0x38);
  tStack_74.y = *(LONG *)(param_2 + 0x40);
  iStack_68 = iStack_98 + 4;
  iStack_64 = tStack_74.x + 1;
  iStack_60 = iStack_98 + 2;
  iStack_5c = tStack_74.x + 2;
  iStack_58 = iStack_98 + 1;
  iStack_54 = tStack_74.x + 4;
  uStack_4c = *(undefined4 *)(param_2 + 0x3c);
  uStack_44 = *(undefined4 *)(param_2 + 0x3c);
  uStack_40 = *(undefined4 *)(param_2 + 0x40);
  iStack_6c = tStack_74.x;
  iStack_50 = iStack_98;
  iStack_48 = iStack_98;
  iStack_28 = tStack_74.x;
  CRgn::CRgn(aCStack_24);
  uStack_8 = 0;
  CRgn::CreatePolygonRgn(aCStack_24,&tStack_74,7,2);
  CDC::SelectClipRgn(param_1,aCStack_24);
  CDrawingManager::CDrawingManager(aCStack_30,param_1);
  uStack_8 = CONCAT31(uStack_8._1_3_,1);
  if (*(int *)(param_2 + 0x2c) == 0) {
    CDrawingManager::FillGradient
              (aCStack_30,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
               *(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),
               *(undefined4 *)(this + 0x1dc),*(undefined4 *)(this + 0x1d8),0,0,0);
  }
  else {
    CDrawingManager::FillGradient
              (aCStack_30,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
               *(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),
               *(undefined4 *)(this + 0x1e0),*(undefined4 *)(this + 0x1e4),0,0,0);
  }
  CDC::SelectClipRgn(param_1,(CRgn *)0x0);
  if (*(int *)(param_2 + 0x5c) == 0) {
LAB_00931171:
    iStack_d8 = 0;
  }
  else {
    iVar2 = thunk_FUN_00b31c40();
    iVar3 = thunk_FUN_00b31c60();
    if (iVar2 - iVar3 <= *(int *)(param_2 + 0x54)) goto LAB_00931171;
    iStack_d8 = 1;
  }
  iStack_1c = iStack_d8;
  if (iStack_d8 != 0) {
    (**(code **)(*(int *)this + 0x170))(param_1,param_2,5,param_3,param_4,param_5);
  }
  uStack_9c = (**(code **)(*(int *)param_1 + 0x30))(&DAT_00c558b4);
  uStack_34 = CDC::GetTextColor(param_1);
  if ((param_5 == 0) || (param_3 == 0)) {
    if (*(int *)(param_2 + 0x60) == -1) {
      if (*(int *)(param_2 + 0x2c) == 0) {
        uStack_e4 = DAT_00c557c4;
      }
      else {
        uStack_e4 = *(undefined4 *)(this + 0x1f8);
      }
      uStack_e8 = uStack_e4;
    }
    else {
      uStack_e8 = *(undefined4 *)(param_2 + 0x60);
    }
    (**(code **)(*(int *)param_1 + 0x38))(uStack_e8);
  }
  else {
    if (*(int *)(param_2 + 100) == -1) {
      if (*(int *)(param_2 + 0x2c) == 0) {
        uStack_dc = DAT_00c557c4;
      }
      else {
        uStack_dc = *(undefined4 *)(this + 0x1f8);
      }
      uStack_e0 = uStack_dc;
    }
    else {
      uStack_e0 = *(undefined4 *)(param_2 + 100);
    }
    (**(code **)(*(int *)param_1 + 0x38))(uStack_e0);
  }
  iStack_38 = CDC::SetBkMode(param_1,1);
  iStack_18 = CMFCTasksPane::GetGroupCaptionHorzOffset
                        (*(CMFCTasksPane **)(*(int *)(param_2 + 4) + 8));
  iStack_a0 = CMFCTasksPane::GetGroupCaptionVertOffset
                        (*(CMFCTasksPane **)(*(int *)(param_2 + 4) + 8));
  if (iStack_18 == -1) {
    iStack_ec = *(int *)(this + 0xac);
  }
  else {
    iStack_ec = iStack_18;
  }
  iStack_14 = iStack_ec;
  iStack_8c = iStack_7c;
  iStack_88 = iStack_78;
  if (iStack_1c == 0) {
    iStack_f0 = iStack_ec;
  }
  else {
    iStack_f0 = *(int *)(param_2 + 0x54) + 5;
  }
  iStack_94 = iStack_84 + iStack_f0;
  iStack_f4 = iStack_a0;
  if (iStack_a0 == -1) {
    iStack_f4 = *(int *)(this + 0xb0);
  }
  iStack_90 = iStack_80 + iStack_f4;
  if (param_5 == 0) {
    iStack_f8 = iStack_ec;
  }
  else {
    iStack_f8 = thunk_FUN_00b31c60();
  }
  if (iStack_8c - iStack_f8 < iStack_94) {
    iStack_fc = iStack_94;
  }
  else {
    if (param_5 == 0) {
      iStack_100 = iStack_14;
    }
    else {
      iStack_100 = thunk_FUN_00b31c60();
    }
    iStack_fc = iStack_8c - iStack_100;
  }
  iStack_8c = iStack_fc;
  uVar9 = 0x8024;
  ptVar4 = (tagRECT *)thunk_FUN_00b31df0();
  CDC::DrawTextA(param_1,(CStringT<> *)(param_2 + 8),ptVar4,uVar9);
  CDC::SetBkMode(param_1,iStack_38);
  (**(code **)(*(int *)param_1 + 0x30))(uStack_9c);
  (**(code **)(*(int *)param_1 + 0x38))(uStack_34);
  if ((param_5 != 0) && (cVar1 = thunk_FUN_006b82d0(), cVar1 == '\0')) {
    CMenuImages::Size();
    tStack_b0.left = iStack_84;
    tStack_b0.top = iStack_80;
    tStack_b0.right = iStack_7c;
    tStack_b0.bottom = iStack_78;
    iVar2 = thunk_FUN_00b31c60();
    if ((tStack_b0.right - (iVar2 + 1) / 2) - (iStack_b8 + 1) / 2 < tStack_b0.left) {
      iStack_104 = tStack_b0.left;
    }
    else {
      iVar2 = thunk_FUN_00b31c60();
      iStack_104 = (tStack_b0.right - (iVar2 + 1) / 2) - (iStack_b8 + 1) / 2;
    }
    tStack_b0.left = iStack_104;
    iVar2 = thunk_FUN_00b31c60();
    if ((tStack_b0.bottom - (iVar2 + 1) / 2) - (iStack_b4 + 1) / 2 < tStack_b0.top) {
      iStack_108 = tStack_b0.top;
    }
    else {
      iVar2 = thunk_FUN_00b31c60();
      iStack_108 = (tStack_b0.bottom - (iVar2 + 1) / 2) - (iStack_b4 + 1) / 2;
    }
    tStack_b0.top = iStack_108;
    tStack_b0.right = tStack_b0.left + iStack_b8;
    tStack_b0.bottom = iStack_108 + iStack_b4;
    if ((tStack_b0.right <= iStack_7c) && (tStack_b0.bottom <= iStack_78)) {
      if (param_3 != 0) {
        pCVar5 = CDC::SelectObject(param_1,(CBrush *)&DAT_00c55858);
        uVar6 = CDC::GetBkColor(param_1);
        CDC::Draw3dRect(param_1,&tStack_b0,DAT_00c557f4,DAT_00c557e0);
        (**(code **)(*(int *)param_1 + 0x34))(uVar6);
        CDC::SelectObject(param_1,pCVar5);
      }
      if (*(int *)(param_2 + 0x30) == 0) {
        pCVar7 = (CSize *)thunk_FUN_00b31090(0,0);
        IVar10 = 0;
        pCVar8 = CRect::TopLeft((CRect *)&tStack_b0);
        CMenuImages::Draw(param_1,7,pCVar8,IVar10,pCVar7);
      }
      else {
        pCVar7 = (CSize *)thunk_FUN_00b31090(0,0);
        IVar10 = 0;
        pCVar8 = CRect::TopLeft((CRect *)&tStack_b0);
        CMenuImages::Draw(param_1,0,pCVar8,IVar10,pCVar7);
      }
    }
  }
  uStack_8 = uStack_8 & 0xffffff00;
  thunk_FUN_00943a10();
  uStack_8 = 0xffffffff;
  thunk_FUN_006e6b20();
LAB_009316d2:
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_3c ^ (uint)&stack0xfffffffc);
  return;
}



ulong __thiscall CMFCVisualManager::GetToolbarDisabledTextColor(CMFCVisualManager *this)

{
  return DAT_00c557c0;
}



COleDateTimeSpan * __thiscall
ATL::COleDateTimeSpan::COleDateTimeSpan(COleDateTimeSpan *this,double param_1)

{
  *(double *)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  CheckRange(this);
  return this;
}



void __thiscall CList<>::RemoveAt(CList<> *this,__POSITION *param_1)

{
  code *pcVar1;
  int iVar2;
  
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",1099);
  iVar2 = AfxIsValidAddress(param_1,0xc,1);
  if (iVar2 == 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x44e)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == *(__POSITION **)(this + 4)) {
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  }
  else {
    iVar2 = AfxIsValidAddress(*(void **)(param_1 + 4),0xc,1);
    if (iVar2 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x457);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    **(undefined4 **)(param_1 + 4) = *(undefined4 *)param_1;
  }
  if (param_1 == *(__POSITION **)(this + 8)) {
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  }
  else {
    iVar2 = AfxIsValidAddress(*(void **)param_1,0xc,1);
    if (iVar2 == 0) {
      iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                  0x460);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)(*(int *)param_1 + 4) = *(undefined4 *)(param_1 + 4);
  }
  ::FreeNode(param_1);
  return;
}



int __thiscall CMFCMenuBar::GetAvailableExpandSize(CMFCMenuBar *this)

{
  int iStack_c;
  
  if (*(int *)(this + 0x168) == 0) {
    iStack_c = CPane::GetAvailableExpandSize((CPane *)this);
  }
  else {
    iStack_c = 0xffff;
  }
  return iStack_c;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp
// WARNING: Removing unreachable block (ram,0x006ba032)

undefined4 thunk_FUN_006b9ff0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_dc;
  longlong lStack_d8;
  int *piStack_c;
  
  puVar3 = &uStack_dc;
  for (iVar2 = 0x36; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  lStack_d8 = thunk_FUN_006ba1f0();
  if (lStack_d8 < 1) {
    uStack_dc = (**(code **)(*piStack_c + 0x1c))();
  }
  else {
    uVar1 = thunk_FUN_006ba0f0();
    uStack_dc = thunk_FUN_006b94e0(uVar1);
  }
  return uStack_dc;
}



void __thiscall CMFCOutlookBarPane::ScrollPageDown(CMFCOutlookBarPane *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CMFCToolBarButton *this_00;
  tagPOINT *ptVar4;
  int iVar5;
  int iStack_24;
  
  uVar2 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1c98) != 0) {
    iVar1 = *(int *)(this + 0x1c8c);
    iVar3 = CMFCToolBar::GetCount((CMFCToolBar *)this);
    if (iVar1 + 1 < iVar3) {
      this_00 = CMFCToolBar::GetButton((CMFCToolBar *)this,*(int *)(this + 0x1c8c));
      if (this_00 == (CMFCToolBarButton *)0x0) {
        CWnd::KillTimer((CWnd *)this,2);
      }
      else {
        thunk_FUN_00b31aa0();
        ptVar4 = (tagPOINT *)thunk_FUN_00b31df0();
        CWnd::ScreenToClient((CWnd *)this,ptVar4);
        iVar3 = thunk_FUN_00b31c60();
        CMFCToolBarButton::Rect(this_00);
        iVar5 = thunk_FUN_00b31c60();
        iVar1 = *(int *)(this + 0x1c90);
        for (iStack_24 = 0; iStack_24 < iVar3 / (iVar5 + iVar1); iStack_24 = iStack_24 + 1) {
          ScrollDown(this);
        }
      }
      goto LAB_009c0e90;
    }
  }
  CWnd::KillTimer((CWnd *)this,2);
LAB_009c0e90:
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}



void DDX_Text(CDataExchange *param_1,int param_2,CStringT<> *param_3)

{
  HWND__ *hWnd;
  int iVar1;
  int nMaxCount;
  char *pcVar2;
  
  hWnd = CDataExchange::PrepareEditCtrl(param_1,param_2);
  if (*(int *)param_1 == 0) {
    pcVar2 = (char *)thunk_FUN_006bf040();
    AfxSetWindowText(hWnd,pcVar2);
  }
  else {
    iVar1 = GetWindowTextLengthA(hWnd);
    nMaxCount = iVar1 + 1;
    pcVar2 = ATL::CSimpleStringT<char,0>::GetBufferSetLength
                       ((CSimpleStringT<char,0> *)param_3,iVar1);
    GetWindowTextA(hWnd,pcVar2,nMaxCount);
    ATL::CSimpleStringT<char,0>::ReleaseBuffer((CSimpleStringT<char,0> *)param_3,-1);
  }
  return;
}



void __thiscall FreeNode(CList<> *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 **)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  if (*(int *)(param_1 + 0xc) < 0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x3ab)
    ;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    CList<>::RemoveAll(param_1);
  }
  return;
}



ulong __thiscall
CMFCVisualManagerOfficeXP::OnFillCaptionBarButton
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CMFCCaptionBar *param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
          int param_10,undefined4 param_11,int param_12)

{
  int iVar1;
  tagRECT *ptVar2;
  ulong uStack_c;
  
  AfxAssertValidObject
            ((CObject *)param_2,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanagerofficexp.cpp",0xa6c)
  ;
  iVar1 = CMFCCaptionBar::IsMessageBarMode(param_2);
  uStack_c = DAT_00c557f0;
  if (iVar1 == 0) {
    uStack_c = CMFCVisualManager::OnFillCaptionBarButton
                         ((CMFCVisualManager *)this,param_1,param_2,param_4,param_5,param_6,param_7,
                          param_8,param_9,param_10,param_11,param_12);
  }
  else if (param_10 == 0) {
    if (param_9 == 0) {
      if (param_12 == 0) {
        this = this + 0x128;
        ptVar2 = (tagRECT *)thunk_FUN_00b31df0();
        CDC::FillRect(param_1,ptVar2,(CBrush *)this);
      }
    }
    else {
      (**(code **)(*(int *)this + 0x310))(param_1,param_4,param_5,param_6,param_7,this + 0x138,0);
      if ((((*(uint *)(this + 0xe4) & 0xff) < 0x81) ||
          ((uint)((int)(uint)*(ushort *)(this + 0xe4) >> 8) < 0x81)) ||
         ((*(uint *)(this + 0xe4) >> 0x10 & 0xff) < 0x81)) {
        uStack_c = 0xffffff;
      }
      else {
        uStack_c = 0;
      }
    }
  }
  else {
    uStack_c = 0xffffffff;
  }
  return uStack_c;
}



void FID_conflict_Release(int param_1)

{
  CCmdTarget::ExternalRelease((CCmdTarget *)(param_1 + -0x134));
  return;
}



undefined4 * __fastcall thunk_FUN_00710200(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



COleBusyDialog * __thiscall
COleBusyDialog::COleBusyDialog
          (COleBusyDialog *this,HTASK__ *param_1,int param_2,ulong param_3,CWnd *param_4)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b79ce8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  COleDialog::COleDialog((COleDialog *)this,param_4);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  _memset(this + 0x98,0,0x2c);
  *(undefined4 *)(this + 0x98) = 0x2c;
  *(ulong *)(this + 0x9c) = param_3;
  if (param_2 != 0) {
    *(uint *)(this + 0x9c) = *(uint *)(this + 0x9c) | 8;
  }
  *(undefined1 **)(this + 0xa8) = &LAB_00679a63;
  *(HTASK__ **)(this + 0xbc) = param_1;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\oledlgs2.cpp",0x58);
  ExceptionList = pvStack_10;
  return this;
}



void thunk_FUN_008403f0(void)

{
  return;
}



int __thiscall CMFCRibbonBar::OnCommand(CMFCRibbonBar *this,uint param_1,long param_2)

{
  HWND pHVar1;
  int iVar2;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_c = 0;
  uStack_8 = param_1 >> 0x10;
  if (param_2 == 0) {
    if (param_1 == 2) {
      return 1;
    }
    if ((param_1 != 1) || (pHVar1 = GetFocus(), pHVar1 == (HWND)0x0)) {
      return 0;
    }
    uStack_c = 1;
    uStack_8 = 0;
  }
  if (*(int *)(this + 0x710) == 0) {
    iVar2 = 0;
  }
  else {
    AfxAssertValidObject
              (*(CObject **)(this + 0x710),
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonbar.cpp",0xb51);
    iVar2 = (**(code **)(**(int **)(this + 0x710) + 0x30))(uStack_c,uStack_8,param_1,param_2);
  }
  return iVar2;
}



void __thiscall
CDockablePane::CalcRectForSliding(CDockablePane *this,CRect *param_1,CRect *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(int *)this + 0x1e0))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)this + 0x198))();
    if (uVar2 < 0x4001) {
      if (uVar2 == 0x4000) {
        if (param_3 == 0) {
          *(int *)param_1 = *(int *)param_1 + *(int *)(this + 0x2f4);
          if (*(int *)(param_1 + 8) < *(int *)param_1) {
            *(undefined4 *)param_1 = *(undefined4 *)(param_1 + 8);
          }
        }
        else {
          *(int *)param_1 = *(int *)param_1 - *(int *)(this + 0x2f4);
          iVar1 = thunk_FUN_00b31c40();
          iVar3 = thunk_FUN_00b31c40();
          if (iVar3 < iVar1) {
            iVar1 = thunk_FUN_00b31c40();
            *(int *)param_1 = *(int *)(param_1 + 8) - iVar1;
          }
        }
        iVar1 = thunk_FUN_00b31c40();
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)param_1;
        *(int *)param_2 = *(int *)(param_2 + 8) - iVar1;
      }
      else if (uVar2 == 0x1000) {
        if (param_3 == 0) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - *(int *)(this + 0x2f4);
          if (*(int *)(param_1 + 8) < *(int *)param_1) {
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_1;
          }
        }
        else {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + *(int *)(this + 0x2f4);
          iVar1 = thunk_FUN_00b31c40();
          iVar3 = thunk_FUN_00b31c40();
          if (iVar3 < iVar1) {
            iVar1 = thunk_FUN_00b31c40();
            *(int *)(param_1 + 8) = iVar1 + *(int *)param_1;
          }
        }
        iVar1 = thunk_FUN_00b31c40();
        *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 8);
        *(int *)(param_2 + 8) = *(int *)param_2 + iVar1;
      }
      else if (uVar2 == 0x2000) {
        if (param_3 == 0) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(this + 0x2f4);
          if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 4)) {
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 4);
          }
        }
        else {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(this + 0x2f4);
          iVar1 = thunk_FUN_00b31c60();
          iVar3 = thunk_FUN_00b31c60();
          if (iVar3 < iVar1) {
            iVar1 = thunk_FUN_00b31c60();
            *(int *)(param_1 + 0xc) = iVar1 + *(int *)(param_1 + 4);
          }
        }
        iVar1 = thunk_FUN_00b31c60();
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc);
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 4) + iVar1;
      }
    }
    else if (uVar2 == 0x8000) {
      if (param_3 == 0) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(this + 0x2f4);
        if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 4)) {
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
        }
      }
      else {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - *(int *)(this + 0x2f4);
        iVar1 = thunk_FUN_00b31c60();
        iVar3 = thunk_FUN_00b31c60();
        if (iVar3 < iVar1) {
          iVar1 = thunk_FUN_00b31c60();
          *(int *)(param_1 + 4) = *(int *)(param_1 + 0xc) - iVar1;
        }
      }
      iVar1 = thunk_FUN_00b31c60();
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
      *(int *)(param_2 + 4) = *(int *)(param_2 + 0xc) - iVar1;
    }
  }
  return;
}



XDataObject * __thiscall COleDataSource::XDataObject::XDataObject(XDataObject *this)

{
  thunk_FUN_008b17c0();
  *(undefined ***)this = vftable;
  return this;
}



void __thiscall
CMFCVisualManager::OnDrawExpandingBox
          (undefined4 param_1_00,CDC *param_1,int param_3,undefined4 param_4,int param_5,int param_6
          ,int param_7,ulong param_8)

{
  uint uVar1;
  tagRECT *ptVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 extraout_var;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  CPen *pCStack_28;
  CPen aCStack_24 [8];
  int iStack_1c;
  int iStack_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b59e78;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  AfxAssertValidObject
            ((CObject *)param_1,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxvisualmanager.cpp",0x9b6);
  uVar3 = param_8;
  uVar4 = param_8;
  ptVar2 = (tagRECT *)thunk_FUN_00b31df0(param_8,param_8,uVar1,extraout_var);
  CDC::Draw3dRect(param_1,ptVar2,uVar3,uVar4);
  CRect::DeflateRect((CRect *)&param_3,2,2);
  CPen::CPen(aCStack_24,0,1,DAT_00c557f0);
  uStack_8 = 0;
  pCStack_28 = CDC::SelectObject(param_1,aCStack_24);
  CRect::CenterPoint((CRect *)&param_3);
  CDC::MoveTo(param_1,(int)auStack_30,param_3);
  CDC::LineTo(param_1,param_5,iStack_18);
  if (param_7 == 0) {
    CDC::MoveTo(param_1,(int)auStack_38,iStack_1c);
    CDC::LineTo(param_1,iStack_1c,param_6);
  }
  CDC::SelectObject(param_1,pCStack_28);
  uStack_8 = 0xffffffff;
  thunk_FUN_006e5c40();
  ExceptionList = pvStack_10;
  return;
}



void __fastcall thunk_FUN_008da690(undefined4 param_1)

{
  thunk_FUN_006d9400(param_1);
  return;
}



int __thiscall CDocument::IsModified(CDocument *this)

{
  code *pcVar1;
  int iVar2;
  
  if (this == (CDocument *)0x0) {
    iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin2.inl",0x44c
                               );
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
  }
  return *(int *)(this + 0x48);
}



void __thiscall CDockablePane::SetCaptionButtons(CDockablePane *this)

{
  CMFCCaptionButton *pCVar1;
  CMFCCaptionButton *pCStack_38;
  CMFCCaptionButton *pCStack_34;
  CMFCCaptionButton *pCStack_30;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6550c;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  RemoveCaptionButtons(this);
  pCVar1 = (CMFCCaptionButton *)
           CObject::operator_new
                     (0x30,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockablepane.cpp",
                      0xc41);
  uStack_8 = 0;
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    pCStack_30 = (CMFCCaptionButton *)0x0;
  }
  else {
    pCStack_30 = (CMFCCaptionButton *)CMFCCaptionButton::CMFCCaptionButton(pCVar1,0x13,0);
  }
  uStack_8 = 0xffffffff;
  CTypedPtrArray<>::Add((CTypedPtrArray<> *)(this + 800),pCStack_30);
  pCVar1 = (CMFCCaptionButton *)
           CObject::operator_new
                     (0x30,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockablepane.cpp",
                      0xc42);
  uStack_8 = 1;
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    pCStack_34 = (CMFCCaptionButton *)0x0;
  }
  else {
    pCStack_34 = (CMFCCaptionButton *)CMFCCaptionButton::CMFCCaptionButton(pCVar1,9,0);
  }
  uStack_8 = 0xffffffff;
  CTypedPtrArray<>::Add((CTypedPtrArray<> *)(this + 800),pCStack_34);
  pCVar1 = (CMFCCaptionButton *)
           CObject::operator_new
                     (0x30,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxdockablepane.cpp",
                      0xc43);
  uStack_8 = 2;
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    pCStack_38 = (CMFCCaptionButton *)0x0;
  }
  else {
    pCStack_38 = (CMFCCaptionButton *)CMFCCaptionButton::CMFCCaptionButton(pCVar1,8,0);
  }
  uStack_8 = 0xffffffff;
  CTypedPtrArray<>::Add((CTypedPtrArray<> *)(this + 800),pCStack_38);
  ExceptionList = pvStack_10;
  return;
}



CMFCPropertySheetCategoryInfo * __thiscall
thunk_FUN_00a9a120(CMFCPropertySheetCategoryInfo *param_1,uint param_2)

{
  CMFCPropertySheetCategoryInfo::~CMFCPropertySheetCategoryInfo(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4610(param_1);
  }
  return param_1;
}



int __thiscall CArray<>::Add(CArray<> *this)

{
  XQATItem aXStack_34 [8];
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  CArray<> *pCStack_20;
  int iStack_1c;
  undefined1 *puStack_18;
  int iStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00b754a8;
  pvStack_10 = ExceptionList;
  uStack_28 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  uStack_8 = 0;
  iStack_14 = *(int *)(this + 8);
  puStack_18 = aXStack_34;
  pCStack_20 = this;
  uStack_24 = CMFCRibbonInfo::XQAT::XQATItem::XQATItem(aXStack_34,(XQATItem *)&stack0x00000004);
  SetAtGrow(pCStack_20,iStack_14);
  iStack_1c = iStack_14;
  uStack_8 = 0xffffffff;
  uStack_2c = 0xa4780f;
  thunk_FUN_00a3c060();
  ExceptionList = pvStack_10;
  return iStack_1c;
}



undefined4 thunk_FUN_007fed60(void)

{
  return 0;
}



int __thiscall CMFCRibbonInfo::XQAT::Write(XQAT *this,XRibbonInfoParser *param_1)

{
  uint uVar1;
  int iVar2;
  XQATItem *this_00;
  XRibbonInfoParser *pXVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  XRibbonInfoParser *pXStack_1c;
  int iStack_18;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b75138;
  pvStack_10 = ExceptionList;
  uVar1 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  iVar2 = XBase::Write((XBase *)this,param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    thunk_FUN_006c4270(PTR_s_QAT_TOP_00c4866c);
    uStack_8 = 0;
    (**(code **)(*(int *)param_1 + 0x34))(auStack_20,*(undefined4 *)(this + 0x1c),1,uVar1);
    uStack_8 = 0xffffffff;
    thunk_FUN_006bef70();
    iVar2 = thunk_FUN_00a39620();
    if (0 < iVar2) {
      piStack_14 = (int *)0x0;
      thunk_FUN_006c4270(PTR_s_ITEMS_00c486b4);
      uStack_8 = 1;
      (**(code **)(*(int *)param_1 + 4))(auStack_24,&piStack_14);
      uStack_8 = 0xffffffff;
      thunk_FUN_006bef70();
      if (piStack_14 != (int *)0x0) {
        iStack_18 = 0;
        while (iVar2 = thunk_FUN_00a39620(), iStack_18 < iVar2) {
          pXStack_1c = (XRibbonInfoParser *)0x0;
          thunk_FUN_006c4270(PTR_DAT_00c486b0);
          uStack_8 = 2;
          (**(code **)(*piStack_14 + 4))(auStack_28,&pXStack_1c);
          uStack_8 = 0xffffffff;
          thunk_FUN_006bef70();
          if (pXStack_1c != (XRibbonInfoParser *)0x0) {
            pXVar3 = pXStack_1c;
            this_00 = CArray<>::operator[]((CArray<> *)(this + 8),iStack_18);
            XQATItem::Write(this_00,pXVar3);
            if (pXStack_1c != (XRibbonInfoParser *)0x0) {
              (*(code *)**(undefined4 **)pXStack_1c)(1);
            }
          }
          iStack_18 = iStack_18 + 1;
        }
        if (piStack_14 != (int *)0x0) {
          (**(code **)*piStack_14)(1);
        }
      }
    }
    iVar2 = 1;
  }
  ExceptionList = pvStack_10;
  return iVar2;
}



void __thiscall ATL::CDynamicAccessor::Close(CDynamicAccessor *this)

{
  CoTaskMemFree(*(LPVOID *)(this + 0x14));
  *(undefined4 *)(this + 0x14) = 0;
  CoTaskMemFree(*(LPVOID *)(this + 0x18));
  *(undefined4 *)(this + 0x18) = 0;
  abs(*(long *)(this + 8));
  *(undefined4 *)(this + 8) = 0;
  abs(*(long *)(this + 0x10));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  CAccessorBase::Close((CAccessorBase *)this);
  return;
}



void __thiscall Serialize(CObject *param_1,CArchive *param_2)

{
  code *pcVar1;
  int iVar2;
  CMFCPropertySheetCategoryInfo *pCStack_14;
  ulong uStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  AfxAssertValidObject(param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x490);
  thunk_FUN_006c98c0(param_2);
  iVar2 = CArchive::IsStoring(param_2);
  if (iVar2 == 0) {
    uStack_10 = CArchive::ReadCount(param_2);
    while (uStack_10 != 0) {
      uStack_10 = uStack_10 - 1;
      SerializeElements<>(param_2,&pCStack_14,1);
      CList<>::AddTail((CList<> *)param_1,pCStack_14);
    }
  }
  else {
    CArchive::WriteCount(param_2,*(ulong *)(param_1 + 0xc));
    for (puStack_8 = *(undefined4 **)(param_1 + 4); puStack_8 != (undefined4 *)0x0;
        puStack_8 = (undefined4 *)*puStack_8) {
      iVar2 = AfxIsValidAddress(puStack_8,0xc,1);
      if ((iVar2 == 0) &&
         (iVar2 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",
                                      0x499), iVar2 != 0)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puStack_c = puStack_8 + 2;
      SerializeElements<>(param_2,puStack_c,1);
    }
  }
  return;
}



ulong COleControlSite::XOleIPSite::AddRef(void)

{
  ulong uVar1;
  int in_stack_00000004;
  
  uVar1 = CCmdTarget::InternalAddRef((CCmdTarget *)(in_stack_00000004 + -0xcc));
  return uVar1;
}



undefined4 __fastcall thunk_FUN_006c3420(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_d4 [52];
  
  puVar3 = auStack_d4;
  for (iVar2 = 0x34; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  **(int **)(param_1 + 0x34) = **(int **)(param_1 + 0x34) + -1;
  uVar1 = **(undefined4 **)(param_1 + 0x24);
  **(int **)(param_1 + 0x24) = **(int **)(param_1 + 0x24) + 1;
  return uVar1;
}



undefined4 __thiscall thunk_FUN_00ac7960(undefined4 param_1,uint param_2)

{
  thunk_FUN_00ac7ae0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4c90(param_1);
  }
  return param_1;
}



wchar_t * __cdecl __GET_RTERRMSG(int param_1)

{
  uint uStack_8;
  
  uStack_8 = 0;
  while( true ) {
    if (0x15 < uStack_8) {
      return (wchar_t *)0x0;
    }
    if (param_1 == *(int *)(&DAT_00be4c88 + uStack_8 * 8)) break;
    uStack_8 = uStack_8 + 1;
  }
  return (wchar_t *)(&PTR_u_R6002___floating_point_support_n_00be4c8c)[uStack_8 * 2];
}



CMFCProperySheetListBox * __thiscall
CMFCProperySheetListBox::CMFCProperySheetListBox(CMFCProperySheetListBox *this)

{
  CListBox::CListBox((CListBox *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x74) = 0xffffffff;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return this;
}



void __thiscall CPaneContainerManager::HideAll(CPaneContainerManager *this)

{
  undefined4 *puVar1;
  CObject *pCVar2;
  int iStack_8;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainermanager.cpp",0x5e6);
  iStack_8 = 0;
  iStack_8 = thunk_FUN_006ccba0();
  while (iStack_8 != 0) {
    puVar1 = (undefined4 *)::GetNext(&iStack_8);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_00b8db60,(CObject *)*puVar1);
    if (pCVar2 != (CObject *)0x0) {
      CWnd::ShowWindow((CWnd *)pCVar2,0);
    }
  }
  iStack_8 = thunk_FUN_006ccba0();
  while (iStack_8 != 0) {
    puVar1 = (undefined4 *)::GetNext(&iStack_8);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_00b8db60,(CObject *)*puVar1);
    if (pCVar2 != (CObject *)0x0) {
      CWnd::ShowWindow((CWnd *)pCVar2,0);
    }
  }
  return;
}



void __thiscall CMFCMousePropertyPage::EnableDblClkControls(CMFCMousePropertyPage *this,int param_1)

{
  CWnd::EnableWindow((CWnd *)(this + 0x128),param_1);
  CWnd::EnableWindow((CWnd *)(this + 0x19c),param_1);
  if (param_1 == 0) {
    CListBox::SetCurSel((CListBox *)(this + 0x128),-1);
    thunk_FUN_006c03f0();
    thunk_FUN_006fd000(0);
  }
  return;
}



CMFCRibbonPanelMenu * __thiscall
CMFCRibbonPanelMenu::CMFCRibbonPanelMenu(CMFCRibbonPanelMenu *this,CMFCRibbonPanel *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b6a658;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  CMFCPopupMenu::CMFCPopupMenu((CMFCPopupMenu *)this);
  uStack_8 = 0;
  *(undefined ***)this = vftable;
  CMFCRibbonPanelMenuBar::CMFCRibbonPanelMenuBar((CMFCRibbonPanelMenuBar *)(this + 0x10c4),param_1);
  *(undefined4 *)(this + 0x1efc) = 0;
  ExceptionList = pvStack_10;
  return this;
}



CCommandLineInfo * __thiscall CCommandLineInfo::CCommandLineInfo(CCommandLineInfo *this)

{
  thunk_FUN_006c9880();
  *(undefined ***)this = vftable;
  thunk_FUN_006bef10();
  thunk_FUN_006bef10();
  thunk_FUN_006bef10();
  thunk_FUN_006bef10();
  thunk_FUN_006bef10();
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}



double __thiscall ATL::COleDateTimeSpan::GetTotalHours(COleDateTimeSpan *this)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = thunk_FUN_00b391e0();
  if ((iVar3 != 0) &&
     (iVar3 = FID_conflict___CrtDbgReport
                        (2,L"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\atlcomtime.inl",0x48,0
                         ,L"GetStatus() == valid"), iVar3 == 1)) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float10)(*pcVar1)();
    return (double)fVar4;
  }
  lVar2 = FUN_0067aa17();
  return (double)lVar2;
}



void __thiscall CPane::UndockPane(CPane *this,int param_1)

{
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpane.cpp",0x65b);
  if (*(int *)(this + 0xac) != 0) {
    (**(code **)(**(int **)(this + 0xac) + 0x280))(this,0);
  }
  if (param_1 == 0) {
    (**(code **)(*(int *)this + 0x26c))(0);
  }
  return;
}



void __thiscall CDocument::Dump(CDocument *this,CDumpContext *param_1)

{
  CDumpContext *pCVar1;
  int iVar2;
  ulong uVar3;
  CDocument *pCVar4;
  int iStack_8;
  
  CObject::Dump((CObject *)this,param_1);
  pCVar4 = this + 0x20;
  CDumpContext::operator<<(param_1,"m_strTitle = ");
  thunk_FUN_006c8ac0(pCVar4);
  pCVar4 = this + 0x24;
  CDumpContext::operator<<(param_1,"\nm_strPathName = ");
  thunk_FUN_006c8ac0(pCVar4);
  uVar3 = *(ulong *)(this + 0x48);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_bModified = ");
  CDumpContext::operator<<(pCVar1,uVar3);
  uVar3 = *(ulong *)(this + 0x28);
  pCVar1 = CDumpContext::operator<<(param_1,"\nm_pDocTemplate = ");
  CDumpContext::operator<<(pCVar1,uVar3);
  iVar2 = CDumpContext::GetDepth(param_1);
  if (0 < iVar2) {
    iStack_8 = (**(code **)(*(int *)this + 0x70))();
    while (iStack_8 != 0) {
      uVar3 = (**(code **)(*(int *)this + 0x74))(&iStack_8);
      pCVar1 = CDumpContext::operator<<(param_1,"\nwith view ");
      CDumpContext::operator<<(pCVar1,uVar3);
    }
  }
  CDumpContext::operator<<(param_1,"\n");
  return;
}



undefined4 __thiscall GetButtonText(CMFCToolBar *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  CMFCToolBarButton *pCVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbar.cpp",
             0x559);
  pCVar2 = CMFCToolBar::GetButton(param_1,param_3);
  if (pCVar2 == (CMFCToolBarButton *)0x0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbar.cpp",
                                0x55e);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)(uVar4);
      return uVar4;
    }
    thunk_FUN_006c4270(&DAT_00b899f7);
  }
  else {
    AfxAssertValidObject
              ((CObject *)pCVar2,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtoolbar.cpp",
               0x562);
    thunk_FUN_006c9150(pCVar2 + 0x2c);
  }
  return param_2;
}



int __thiscall
COleDocIPFrameWndEx::LoadFrame
          (COleDocIPFrameWndEx *this,uint param_1,ulong param_2,CWnd *param_3,
          CCreateContext *param_4)

{
  int iVar1;
  
  *(uint *)(this + 0x1a0) = param_1;
  CFrameImpl::LoadLargeIconsState((CFrameImpl *)(this + 0x194));
  iVar1 = CFrameWnd::LoadFrame((CFrameWnd *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp
// WARNING: Removing unreachable block (ram,0x006c100d)
// WARNING: Removing unreachable block (ram,0x006c101d)
// WARNING: Type propagation algorithm not settling

longlong thunk_FUN_006c0fb0(undefined1 *param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  longlong lVar7;
  undefined4 auStack_108 [52];
  longlong lStack_38;
  undefined8 uStack_28;
  undefined4 auStack_18 [3];
  int *piStack_c;
  
  puVar5 = auStack_108;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  lStack_38 = 0;
  while ((-1 < param_3 && ((0 < param_3 || (param_2 != 0))))) {
    lVar7 = thunk_FUN_006ba1f0();
    if (lVar7 < 1) {
      uStack_28 = lVar7;
      auStack_18[0] = (**(code **)(*piStack_c + 0x1c))();
      auStack_108[1] = thunk_FUN_006b8d00(0x6c109e);
      cVar1 = thunk_FUN_006b8cb0(auStack_108 + 1,auStack_18);
      if (cVar1 != '\0') break;
      uVar2 = thunk_FUN_006b8c70(auStack_18);
      *param_1 = uVar2;
      param_1 = param_1 + 1;
      lStack_38 = lStack_38 + 1;
      bVar6 = param_2 == 0;
      param_2 = param_2 - 1;
      param_3 = param_3 - (uint)bVar6;
    }
    else {
      if (CONCAT44(param_3,param_2) < lVar7) {
        lVar7 = CONCAT44(param_3,param_2);
      }
      uStack_28._0_4_ = (uint)lVar7;
      uVar3 = thunk_FUN_006ba0b0((uint)uStack_28);
      uStack_28 = lVar7;
      thunk_FUN_006bb100(param_1,uVar3);
      param_1 = param_1 + (uint)uStack_28;
      lStack_38 = uStack_28 + lStack_38;
      bVar6 = param_2 < (uint)uStack_28;
      param_2 = param_2 - (uint)uStack_28;
      param_3 = (param_3 - uStack_28._4_4_) - (uint)bVar6;
      thunk_FUN_006c3270((uint)uStack_28);
    }
  }
  lVar7 = lStack_38;
  _RTC_CheckStackVars(&stack0xfffffffc,&DAT_006c113c);
  return lVar7;
}



CBasePane * __thiscall CPaneContainerManager::GetFirstPane(CPaneContainerManager *this)

{
  int iVar1;
  CBasePane *pCVar2;
  
  AfxAssertValidObject
            ((CObject *)this,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxpanecontainermanager.cpp",0x1a6);
  iVar1 = CObList::IsEmpty((CObList *)(this + 4));
  if (iVar1 == 0) {
    pCVar2 = (CBasePane *)CObList::GetHead((CObList *)(this + 4));
  }
  else {
    pCVar2 = (CBasePane *)0x0;
  }
  return pCVar2;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

void thunk_FUN_006c2f70(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_c4 [48];
  
  puVar2 = auStack_c4;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FID_conflict__memcpy(param_1,param_2,param_3);
  return;
}



void __thiscall
CSmartDockingManager::ShowTabbedPlaceAt
          (CSmartDockingManager *this,undefined4 param_2,int param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7,int param_8)

{
  tagPOINT tVar1;
  tagPOINT *ptVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 4) != 0) {
    thunk_FUN_00b31aa0();
    if (DAT_00c5854c == 0) {
      iVar3 = thunk_FUN_00b31c60();
      ptVar2 = (tagPOINT *)thunk_FUN_00b31510(param_6 + param_7,iVar3 + param_8);
      tVar1 = *ptVar2;
      uVar4 = thunk_FUN_00b31c60();
      ptVar2 = (tagPOINT *)thunk_FUN_00b31510(param_6,uVar4);
      CRect::SetRect((CRect *)&uStack_18,*ptVar2,tVar1);
    }
    else {
      ptVar2 = (tagPOINT *)thunk_FUN_00b31510(param_6 + param_7,param_3);
      tVar1 = *ptVar2;
      ptVar2 = (tagPOINT *)thunk_FUN_00b31510(param_6,param_3 - param_8);
      CRect::SetRect((CRect *)&uStack_18,*ptVar2,tVar1);
    }
    CSmartDockingHighlighterWnd::ShowTabbedAt
              ((CSmartDockingHighlighterWnd *)(this + 0x30),param_2,param_3,param_4,param_5,
               uStack_18,uStack_14,uStack_10,uStack_c);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



// WARNING: Function: __RTC_CheckEsp replaced with injection: __RTC_CheckEsp

undefined8 thunk_FUN_006c2970(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int unaff_EDI;
  undefined4 *puVar4;
  undefined4 auStack_f0 [49];
  undefined8 uStack_2c;
  fpos_t afStack_1c [2];
  int iStack_c;
  
  puVar4 = auStack_f0;
  for (iVar3 = 0x3b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  afStack_1c[0] = thunk_FUN_006c3820();
  uStack_2c = thunk_FUN_006c3860();
  uStack_2c = uStack_2c - (int)afStack_1c[0];
  if (*(int *)(iStack_c + 0x54) != 0) {
    cVar1 = thunk_FUN_006ba5a0();
    if (cVar1 != '\0') {
      iVar3 = _fsetpos(*(FILE **)(iStack_c + 0x54),afStack_1c);
      if (iVar3 == 0) {
        if (uStack_2c != 0) {
          iVar3 = __fseeki64(*(FILE **)(iStack_c + 0x54),CONCAT44(1,uStack_2c._4_4_),unaff_EDI);
          if (iVar3 != 0) goto LAB_006c2a26;
        }
        iVar3 = _fgetpos(*(FILE **)(iStack_c + 0x54),afStack_1c);
        if (iVar3 == 0) {
          uVar2 = thunk_FUN_006c37e0();
          *(undefined4 *)(iStack_c + 0x4c) = uVar2;
          thunk_FUN_006c35d0();
          thunk_FUN_006c3770(*(undefined4 *)(iStack_c + 0x4c),afStack_1c[0]);
          uVar2 = extraout_EDX_00;
          goto LAB_006c2a70;
        }
      }
    }
  }
LAB_006c2a26:
  thunk_FUN_006c3700(0xffffffff,0xffffffff);
  uVar2 = extraout_EDX;
LAB_006c2a70:
  _RTC_CheckStackVars(&stack0xfffffffc,&DAT_006c2a98);
  return CONCAT44(uVar2,param_1);
}



void __thiscall CMFCAutoHideBar::CalcFixedLayout(CMFCAutoHideBar *this,int param_1,int param_2)

{
  tagPOINT atStack_18 [2];
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  thunk_FUN_00b31aa0();
  CWnd::ClientToScreen((CWnd *)this,atStack_18);
  CRect::Size((CRect *)atStack_18);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}



int __thiscall
COccManager::OnEvent
          (COccManager *this,CCmdTarget *param_1,uint param_2,AFX_EVENT *param_3,
          AFX_CMDHANDLERINFO *param_4)

{
  int iVar1;
  
  iVar1 = thunk_FUN_00770d60(param_2,param_3,param_4,this);
  return iVar1;
}



undefined ** thunk_FUN_00a985d0(void)

{
  return &PTR_s_COlePasteSpecialDialog_00bd5990;
}



undefined ** thunk_FUN_00a64210(void)

{
  return &PTR_s_CTasksPaneMenuButton_00c495a4;
}



undefined4 __fastcall thunk_FUN_00a2c990(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



undefined4 __fastcall thunk_FUN_007dc4b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}



CDockingPanesRow * __thiscall CBasePane::GetPaneRow(CBasePane *this)

{
  return *(CDockingPanesRow **)(this + 0xb0);
}



void __thiscall CMFCTasksPane::SetCaptionButtons(CMFCTasksPane *this)

{
  CMFCCaptionButton *pCVar1;
  CMFCCaptionMenuButton *this_00;
  CMFCCaptionButton *pCStack_3c;
  CMFCCaptionButton *pCStack_38;
  CMFCCaptionButton *pCStack_34;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b77f9c;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  CDockablePane::SetCaptionButtons((CDockablePane *)this);
  pCVar1 = (CMFCCaptionButton *)
           CObject::operator_new
                     (0x30,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtaskspane.cpp",
                      0xc28);
  uStack_8 = 0;
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    pCStack_34 = (CMFCCaptionButton *)0x0;
  }
  else {
    pCStack_34 = (CMFCCaptionButton *)CMFCCaptionButton::CMFCCaptionButton(pCVar1,0x17,1);
  }
  uStack_8 = 0xffffffff;
  CTypedPtrArray<>::Add((CTypedPtrArray<> *)(this + 800),pCStack_34);
  pCVar1 = (CMFCCaptionButton *)
           CObject::operator_new
                     (0x30,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtaskspane.cpp",
                      0xc29);
  uStack_8 = 1;
  if (pCVar1 == (CMFCCaptionButton *)0x0) {
    pCStack_38 = (CMFCCaptionButton *)0x0;
  }
  else {
    pCStack_38 = (CMFCCaptionButton *)CMFCCaptionButton::CMFCCaptionButton(pCVar1,0x18,1);
  }
  uStack_8 = 0xffffffff;
  CTypedPtrArray<>::Add((CTypedPtrArray<> *)(this + 800),pCStack_38);
  this_00 = (CMFCCaptionMenuButton *)
            CObject::operator_new
                      (0x3c,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxtaskspane.cpp",
                       0xc2b);
  uStack_8 = 2;
  if (this_00 == (CMFCCaptionMenuButton *)0x0) {
    pCStack_3c = (CMFCCaptionButton *)0x0;
  }
  else {
    pCStack_3c = (CMFCCaptionButton *)CMFCCaptionMenuButton::CMFCCaptionMenuButton(this_00,0x19,0);
  }
  uStack_8 = 0xffffffff;
  *(undefined4 *)(pCStack_3c + 0x34) = 0;
  CTypedPtrArray<>::Add((CTypedPtrArray<> *)(this + 800),pCStack_3c);
  ExceptionList = pvStack_10;
  return;
}



undefined4 __thiscall thunk_FUN_00a4bd70(undefined4 param_1,uint param_2)

{
  thunk_FUN_00a4bdb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_006c4c90(param_1);
  }
  return param_1;
}



void AfxUnmergeMenus(HMENU__ *param_1,HMENU__ *param_2,HMENU__ *param_3)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  HMENU hMenu;
  int iVar4;
  HMENU pHVar5;
  int iStack_20;
  UINT UStack_1c;
  UINT UStack_10;
  
  if (((param_1 == (HMENU__ *)0x0) || (BVar2 = IsMenu(param_1), BVar2 == 0)) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olemisc.cpp",
                                  0x255), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_2 == (HMENU__ *)0x0) || (BVar2 = IsMenu(param_2), BVar2 == 0)) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olemisc.cpp",
                                  0x256), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_3 != (HMENU__ *)0x0) && (BVar2 = IsMenu(param_3), BVar2 == 0)) &&
     (iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\olemisc.cpp",
                                  599), iVar3 != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = GetMenuItemCount(param_2);
  UStack_10 = GetMenuItemCount(param_1);
LAB_0070cc2e:
  do {
    do {
      UStack_10 = UStack_10 - 1;
      if ((int)UStack_10 < 0) {
        return;
      }
      hMenu = GetSubMenu(param_1,UStack_10);
    } while (hMenu == (HMENU)0x0);
    if (param_3 != (HMENU__ *)0x0) {
      iVar4 = GetMenuItemCount(hMenu);
      for (UStack_1c = 0; (int)UStack_1c < iVar4; UStack_1c = UStack_1c + 1) {
        pHVar5 = GetSubMenu(hMenu,UStack_1c);
        if (pHVar5 == param_3) {
          RemoveMenu(hMenu,UStack_1c,0x400);
          param_3 = (HMENU__ *)0x0;
          break;
        }
      }
      goto LAB_0070cc2e;
    }
    for (iStack_20 = 0; iStack_20 < iVar3; iStack_20 = iStack_20 + 1) {
      pHVar5 = GetSubMenu(param_2,iStack_20);
      if (pHVar5 == hMenu) {
        RemoveMenu(param_1,UStack_10,0x400);
        break;
      }
    }
  } while( true );
}



void __thiscall Serialize(CArray<> *param_1,CArchive *param_2)

{
  int iVar1;
  ulong uVar2;
  
  AfxAssertValidObject
            ((CObject *)param_1,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxtempl.h",0x278)
  ;
  thunk_FUN_006c98c0(param_2);
  iVar1 = CArchive::IsStoring(param_2);
  if (iVar1 == 0) {
    uVar2 = CArchive::ReadCount(param_2);
    CArray<>::SetSize(param_1,uVar2,-1);
  }
  else {
    CArchive::WriteCount(param_2,*(ulong *)(param_1 + 8));
  }
  SerializeElements<>(param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}



void __thiscall
CMFCBaseTabCtrl::OnLButtonUp(CMFCBaseTabCtrl *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  tagPOINT tVar1;
  tagRECT *ptVar2;
  int iVar3;
  CRgn *pCVar4;
  uint uVar5;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  uint uStack_1c;
  char cStack_15;
  int iStack_14;
  int iStack_10;
  CWnd *pCStack_c;
  CWnd *pCStack_8;
  
  uStack_1c = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x1ec) != 0) {
    *(undefined4 *)(this + 0x1ec) = 0;
    *(undefined4 *)(this + 0x1e8) = 0;
    uVar5 = 0x105;
    pCVar4 = (CRgn *)0x0;
    ptVar2 = (tagRECT *)thunk_FUN_00b31df0();
    CWnd::RedrawWindow((CWnd *)this,ptVar2,pCVar4,uVar5);
    tVar1.y = param_4;
    tVar1.x = param_3;
    iVar3 = CRect::PtInRect((CRect *)(this + 0x1f0),tVar1);
    if (iVar3 != 0) {
      pCStack_8 = (CWnd *)(**(code **)(*(int *)this + 0x214))();
      if (pCStack_8 != (CWnd *)0x0) {
        CWnd::SendMessageA(pCStack_8,0x10,0,0);
      }
      goto LAB_008e42ca;
    }
  }
  if (*(int *)(this + 0xa4) != *(int *)(this + 0xa0)) {
    pCStack_c = CWnd::SetCapture((CWnd *)this);
    AfxAssertValidObject
              ((CObject *)pCStack_c,
               "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxbasetabctrl.cpp",0x53f);
    CWnd::SendMessageA(pCStack_c,DAT_00c581bc,*(uint *)(this + 0xa4),*(long *)(this + 0xa0));
    iVar3 = CObject::IsKindOf((CObject *)pCStack_c,(CRuntimeClass *)&PTR_s_CBaseTabbedPane_00bb56a8)
    ;
    if (((iVar3 != 0) ||
        (iVar3 = CObject::IsKindOf((CObject *)pCStack_c,
                                   (CRuntimeClass *)&PTR_s_CMDIClientAreaWnd_00bc2cf0), iVar3 != 0))
       && (pCStack_c = (CWnd *)AFXGetParentFrame(pCStack_c), pCStack_c != (CWnd *)0x0)) {
      CWnd::SendMessageA(pCStack_c,DAT_00c581bc,*(uint *)(this + 0xa4),*(long *)(this + 0xa0));
    }
  }
  if (*(int *)(this + 0x148) != 0) {
    *(undefined4 *)(this + 0x148) = 0;
    ReleaseCapture();
    iVar3 = (**(code **)(*(int *)this + 0x2d0))();
    if (iVar3 == 0) {
      *(undefined4 *)(this + 0xf8) = 0xffffffff;
      *(undefined4 *)(this + 0xf4) = 0xffffffff;
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x2d0))();
  if (iVar3 != 0) {
    cStack_15 = *(int *)(this + 0xa0) != *(int *)(this + 0xf4);
    if (((*(int *)(this + 0xf4) == *(int *)(this + 0xf8)) && (-1 < *(int *)(this + 0xf4))) &&
       (*(int *)(this + 0xf4) != *(int *)(this + 0xa0))) {
      *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(this + 0xa0);
      *(undefined4 *)(this + 0x1e0) = 1;
      *(undefined4 *)(this + 0x200) = 0;
      iVar3 = (**(code **)(*(int *)this + 0x218))(*(undefined4 *)(this + 0xf4));
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x1e0) = 0;
        *(undefined4 *)(this + 0x200) = 0;
        *(undefined4 *)(this + 0xf8) = 0xffffffff;
        iVar3 = (**(code **)(*(int *)this + 0x28c))();
        if (iVar3 == 0) {
          *(undefined4 *)(this + 0xf4) = 0xffffffff;
        }
        ReleaseCapture();
        goto LAB_008e42ca;
      }
      (**(code **)(*(int *)this + 0x274))(*(undefined4 *)(this + 0xa0));
      *(undefined4 *)(this + 0x1e0) = 0;
      *(undefined4 *)(this + 0x200) = 0;
    }
    iStack_14 = *(int *)(this + 0xf4);
    iStack_10 = *(int *)(this + 0xf8);
    *(undefined4 *)(this + 0xf8) = 0xffffffff;
    iVar3 = (**(code **)(*(int *)this + 0x28c))();
    if (iVar3 == 0) {
      *(undefined4 *)(this + 0xf4) = 0xffffffff;
    }
    ReleaseCapture();
    if ((cStack_15 != '\0') && (InvalidateTab(this,iStack_14), iStack_10 != iStack_14)) {
      InvalidateTab(this,iStack_10);
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x28c))();
  if (iVar3 != 0) {
    thunk_FUN_00b31aa0();
    thunk_FUN_00b31aa0();
    (**(code **)(*(int *)this + 0x16c))(auStack_2c,auStack_3c);
    iVar3 = thunk_FUN_00b31e30();
    if (iVar3 == 0) {
      iVar3 = 0;
      ptVar2 = (tagRECT *)thunk_FUN_00b31df0();
      CWnd::InvalidateRect((CWnd *)this,ptVar2,iVar3);
    }
    iVar3 = thunk_FUN_00b31e30();
    if (iVar3 == 0) {
      iVar3 = 0;
      ptVar2 = (tagRECT *)thunk_FUN_00b31df0();
      CWnd::InvalidateRect((CWnd *)this,ptVar2,iVar3);
    }
    CWnd::UpdateWindow((CWnd *)this);
  }
  CWnd::OnLButtonUp((CWnd *)this,param_1,param_3,param_4);
LAB_008e42ca:
  __security_check_cookie(uStack_1c ^ (uint)&stack0xfffffffc);
  return;
}



undefined ** thunk_FUN_00a90ad0(void)

{
  return &PTR_thunk_FUN_0073fdc0_00bd4f8c;
}



void __thiscall FindString(int param_1,WPARAM param_2,LPARAM param_3)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  
  BVar2 = IsWindow(*(HWND *)(param_1 + 0x20));
  if (BVar2 == 0) {
    iVar3 = AfxAssertFailedLine("f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\include\\afxwin2.inl",0x377
                               );
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SendMessageA(*(HWND *)(param_1 + 0x20),0x14c,param_2,param_3);
  return;
}



undefined4 __fastcall thunk_FUN_007753d0(undefined4 param_1)

{
  thunk_FUN_007753f0();
  return param_1;
}



void __thiscall CMFCRibbonButton::GetKeyTipRect(CMFCRibbonButton *this,CDC *param_1,int param_2)

{
  tagSIZE *ptVar1;
  int iVar2;
  CRect *pCVar3;
  int *piVar4;
  int in_stack_0000000c;
  int iStack_ac;
  undefined1 auStack_64 [40];
  LONG LStack_3c;
  LONG LStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  CObject *pCStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = DAT_00c4a700 ^ (uint)&stack0xfffffffc;
  AfxAssertValidObject
            ((CObject *)this,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonbutton.cpp"
             ,0x6dc);
  AfxAssertValidObject
            ((CObject *)param_2,
             "f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonbutton.cpp",0x6dd);
  (**(code **)(*(int *)this + 0x13c))(&iStack_24,param_2);
  CRect::CRect((CRect *)&iStack_18,0,0,0,0);
  ptVar1 = (tagSIZE *)thunk_FUN_00b31090(0,0);
  LStack_3c = ptVar1->cx;
  LStack_38 = ptVar1->cy;
  iVar2 = CSize::operator==((CSize *)&iStack_24,*ptVar1);
  if ((iVar2 == 0) && (iVar2 = thunk_FUN_00b31e30(), iVar2 == 0)) {
    if (in_stack_0000000c == 0) {
      iStack_ac = *(int *)(this + 0x18) + 10;
    }
    else {
      iStack_ac = *(int *)(this + 0x20) - iStack_24 / 2;
    }
    iStack_18 = iStack_ac;
    iStack_14 = *(int *)(this + 0x24) - iStack_20 / 2;
    thunk_FUN_00b31aa0();
    thunk_FUN_00b31f60();
    pCStack_1c = (CObject *)(**(code **)(*(int *)this + 0x94))();
    if ((((pCStack_1c != (CObject *)0x0) &&
         (iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this), iVar2 == 0)) &&
        ((*(int *)(this + 0x68) == 0 || (*(int *)(this + 100) == 0)))) &&
       (iVar2 = (**(code **)(*(int *)this + 0x1b0))(), iVar2 == 0)) {
      AfxAssertValidObject
                (pCStack_1c,"f:\\dd\\vctools\\vc7libs\\ship\\atlmfc\\src\\mfc\\afxribbonbutton.cpp",
                 0x6f0);
      pCVar3 = CMFCRibbonPanel::GetRect((CMFCRibbonPanel *)pCStack_1c);
      uStack_34 = *(undefined4 *)pCVar3;
      uStack_30 = *(undefined4 *)(pCVar3 + 4);
      uStack_2c = *(undefined4 *)(pCVar3 + 8);
      iStack_28 = *(int *)(pCVar3 + 0xc);
      iVar2 = thunk_FUN_00b31e30();
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_009c9170();
        iStack_28 = iStack_28 - iVar2;
        iStack_14 = iStack_28 - iStack_20 / 2;
      }
    }
    iVar2 = (**(code **)(*(int *)this + 0x1b0))();
    if (((iVar2 == 0) || (*(int *)(this + 0x68) != 0)) || (*(int *)(this + 100) != 0)) {
      iVar2 = (**(code **)(*(int *)this + 0x1b4))();
      if (iVar2 == 0) {
        if ((*(int *)(this + 0x130) == 0) && (*(int *)(this + 100) == 0)) {
          iVar2 = CMFCRibbonBaseElement::IsMenuMode((CMFCRibbonBaseElement *)this);
          if (iVar2 == 0) {
            if (*(int *)(this + 0x68) != 0) {
              piVar4 = (int *)CRect::CenterPoint((CRect *)(this + 0x18));
              iStack_18 = *piVar4 - iStack_24 / 2;
              iVar2 = CRect::CenterPoint((CRect *)(this + 0x18));
              iStack_14 = *(int *)(iVar2 + 4);
            }
            iVar2 = thunk_FUN_00b31e30();
            if (iVar2 == 0) {
              iVar2 = CRect::CenterPoint((CRect *)&uStack_34);
              if ((*(int *)(this + 0x1c) < *(int *)(iVar2 + 4)) &&
                 (iVar2 = CRect::CenterPoint((CRect *)&uStack_34),
                 *(int *)(iVar2 + 4) < *(int *)(this + 0x24))) {
                iVar2 = CRect::CenterPoint((CRect *)(this + 0x18));
                iStack_14 = *(int *)(iVar2 + 4) - iStack_20 / 2;
              }
              else {
                iVar2 = CRect::CenterPoint((CRect *)&uStack_34);
                if (*(int *)(this + 0x1c) < *(int *)(iVar2 + 4)) {
                  iStack_14 = *(int *)(this + 0x1c) - iStack_20 / 2;
                }
              }
            }
          }
          else {
            iVar2 = CRect::CenterPoint((CRect *)(this + 0x18));
            iStack_14 = *(int *)(iVar2 + 4);
          }
        }
        else if (*(int *)(this + 0x54) == 0) {
          if (in_stack_0000000c == 0) {
            piVar4 = (int *)CRect::CenterPoint((CRect *)(this + 0x18));
            iStack_18 = *piVar4 - iStack_24 / 2;
          }
        }
        else {
          if (in_stack_0000000c == 0) {
            piVar4 = (int *)(**(code **)(*(int *)this + 0x78))(auStack_64,0);
            iStack_18 = ((*(int *)(this + 0x18) + *piVar4) - iStack_24) + 4;
          }
          iStack_14 = (*(int *)(this + 0x24) - iStack_20) + -4;
        }
      }
      else {
        iVar2 = CRect::CenterPoint((CRect *)(this + 0x18));
        iStack_14 = *(int *)(iVar2 + 4) - iStack_20 / 2;
        piVar4 = (int *)CRect::CenterPoint((CRect *)(this + 0x18));
        iStack_18 = *piVar4 - iStack_24 / 2;
      }
    }
    else {
      iStack_14 = *(int *)(this + 0x24);
      piVar4 = (int *)CRect::CenterPoint((CRect *)(this + 0x18));
      iStack_18 = *piVar4 - iStack_24 / 2;
    }
    iStack_10 = iStack_18 + iStack_24;
    iStack_c = iStack_14 + iStack_20;
    *(int *)param_1 = iStack_18;
    *(int *)(param_1 + 4) = iStack_14;
    *(int *)(param_1 + 8) = iStack_10;
    *(int *)(param_1 + 0xc) = iStack_c;
  }
  else {
    *(int *)param_1 = iStack_18;
